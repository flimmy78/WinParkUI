#include "qudpsenderthread.h"

QUdpSenderThread::QUdpSenderThread(QObject *parent) :
    QMyBaseThread(parent)
{
    setObjectName( "QUdpSenderThread" );
    OutputMsg( QString( " Created" ) );
    pUdpClientSocket = NULL;
}

QUdpSenderThread::~QUdpSenderThread( )
{
    if ( NULL != pUdpClientSocket ) {
        delete pUdpClientSocket;
        pUdpClientSocket = NULL;
    }

    OutputMsg( "" );
}

QUdpSenderThread* QUdpSenderThread::GetInstance(   )
{
    QUdpSenderThread* pThreadInstance = new QUdpSenderThread( );
    pThreadInstance->InitializeThread( );
    pThreadInstance->start( );
    pThreadInstance->moveToThread( pThreadInstance );

    return pThreadInstance;
}

void QUdpSenderThread::run( )
{
    InitializeSubThread( );
    exec( ); // Event Loop
}

void QUdpSenderThread::InitializeSubThread( )
{
    if ( NULL == pUdpClientSocket ) {
        pUdpClientSocket = network.GenerateUdpClientSocket( commonFunction.GetTextCodec( ) );
        OutputMsg( objectName( ) );
    }

    connect( &network, SIGNAL( NotifyMessage( QString, QManipulateIniFile::LogTypes ) ), this, SLOT( HandleMessage( QString, QManipulateIniFile::LogTypes ) ) );
    connect( &network, SIGNAL( GetWholeUdpDatagram( void*, QString,quint16 ) ), this, SLOT( HandleGetWholeUdpDatagram( void*, QString, quint16 ) ) );
}

void QUdpSenderThread::HandleGetWholeUdpDatagram( void* pByteArray, QString strSenderIP, quint16 nSenderPort )
{
    OutputMsg( "Sender:" + sender( )->objectName( ) + "GetWholeUdpDatagram( ... )" );
    emit GetWholeUdpDatagram( pByteArray, strSenderIP, nSenderPort );
}

void QUdpSenderThread::ProcessBroadcastDatagramEvent( MyDataStructs::PQQueueEventParams pEventParams )
{
    if ( NULL == pEventParams || pEventParams->isEmpty( ) ) {
        return;
    }

    MyDataStructs::QEventMultiHash& hash = pEventParams->head( );
    QVariant varData = hash.value( MyEnums::NetworkParamPort );
    quint16 nPort = ( quint16 ) varData.toUInt( );

    varData = hash.value( MyEnums::NetworkParamData );
    quint32 nBytePointer = varData.toUInt( );
    QByteArray* pByteArray = ( QByteArray* ) nBytePointer;

    network.UdpBroadcastDatagram( pUdpClientSocket, *pByteArray, nPort );

    delete pByteArray;
}

void QUdpSenderThread::ProcessSendDatagramEvent( MyDataStructs::PQQueueEventParams pEventParams )
{
    if ( NULL == pEventParams || pEventParams->isEmpty( ) ) {
        return;
    }

    MyDataStructs::QEventMultiHash& hash = pEventParams->head( );
    QVariant varData = hash.value( MyEnums::NetworkParamPort );
    quint16 nPort = ( quint16 ) varData.toUInt( );

    varData = hash.value( MyEnums::NetworkParamData );
    quint32 nBytePointer = varData.toUInt( );
    QByteArray* pByteArray = ( QByteArray* ) nBytePointer;

    varData = hash.value( MyEnums::NetworkParamIP );
    QString strIP = varData.toString( );
    QHostAddress hostAddress( strIP );

    network.UdpSendDatagram( pUdpClientSocket, *pByteArray, hostAddress, nPort );

    delete pByteArray;
}

void QUdpSenderThread::customEvent( QEvent *event )
{
    QUdpSenderThreadEvent* pEvent = ( QUdpSenderThreadEvent* ) event;
    MyEnums::EventType type = ( MyEnums::EventType ) pEvent->type( );
    MyDataStructs::PQQueueEventParams pEventParams = pEvent->GetEventParams( );

    if ( MyEnums::UdpClientBroadcastDatagram == type ) {
        ProcessBroadcastDatagramEvent( pEventParams );
    } else if ( MyEnums::UdpClientSendDatagram == type ) {
        ProcessSendDatagramEvent( pEventParams );
    } else if ( MyEnums::ThreadExit == type ) {
       LaunchThreadExit( );
    }
}
