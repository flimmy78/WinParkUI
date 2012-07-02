#include "qmynetwork.h"

QMyNetwork::QMyNetwork( QObject* parent ) : QObject( parent )
{
    qRegisterMetaType< QAbstractSocket::SocketError >( "QAbstractSocket::SocketError" );
    pTcpServer = NULL;
    setObjectName( "QMyNetwork" );
}

QMyNetwork::~QMyNetwork( )
{
    if ( NULL != pTcpServer ) {
        delete pTcpServer;
    }
}

void QMyNetwork::HandleGetWholeTcpStreamData( QTcpSocket* pPeerSocket, void *pByteArray )
{
    OutputMsg( "Sender:" + sender( )->objectName( ) + ":emit GetWholeTcpStreamData( ... )" );
    emit GetWholeTcpStreamData( pPeerSocket, pByteArray );
}

void QMyNetwork::HandleThreadEnqueue( QTcpSocket* pPeerSocket )
{
    OutputMsg( "Sender:" + sender( )->objectName( ) + ":emit EnqueueThread( ... )" );
    emit EnqueueThread( pPeerSocket );
}

void QMyNetwork::StartupTcpServer( quint16 nPort, int nMaxConnections )
{
    if ( NULL == pTcpServer ) {
        pTcpServer = new QMyTcpServer( nPort, nMaxConnections );
        connect( pTcpServer, SIGNAL( NotifyMessage( QString, QManipulateIniFile::LogTypes ) ), this, SLOT( HandleMessage( QString, QManipulateIniFile::LogTypes ) ) );
        connect( pTcpServer, SIGNAL( Accept( int ) ), this, SLOT( HandleAccept( int ) ) );
        pTcpServer->Initialize( );
    }
}

QTcpPeerClient* QMyNetwork::GenerateTcpPeerSocket( QTextCodec* pCodec )
{
    QTcpPeerClient* pPeerSocket = new QTcpPeerClient( pCodec );
    connect( pPeerSocket, SIGNAL( NotifyMessage( QString, QManipulateIniFile::LogTypes ) ), this, SLOT( HandleMessage( QString, QManipulateIniFile::LogTypes ) ) );
    connect( pPeerSocket, SIGNAL( EnqueueThread( QTcpSocket* ) ), this, SLOT( HandleThreadEnqueue( QTcpSocket*  ) ) );
    connect( pPeerSocket, SIGNAL( GetWholeTcpStreamData( QTcpSocket*, void* ) ), this, SLOT( HandleGetWholeTcpStreamData( QTcpSocket*, void* ) ) );

    return pPeerSocket;
}

QTcpClient* QMyNetwork::GenerateTcpClientSocket( QTextCodec *pCodec )
{
    QTcpClient* pClientSocket = new QTcpClient( pCodec );
    connect( pClientSocket, SIGNAL( NotifyMessage( QString, QManipulateIniFile::LogTypes ) ), this, SLOT( HandleMessage( QString, QManipulateIniFile::LogTypes ) ) );
    connect( pClientSocket, SIGNAL( GetWholeTcpStreamData( QTcpSocket*, void* ) ), this, SLOT( HandleGetWholeTcpStreamData( QTcpSocket*, void* ) ) );

    return pClientSocket;
}

void QMyNetwork::HandleMessage( QString strMsg, QManipulateIniFile::LogTypes type )
{
    OutputMsg( "Sender:" + sender( )->objectName( ) + QString( ":emit NotifyMessage( %1, LogTypes=%2 ) " ).arg( strMsg, QString::number( type ) ) );
    emit NotifyMessage( strMsg, type );
}

void QMyNetwork::HandleAccept( int socketDescriptor )
{
    OutputMsg( "Sender:" + sender( )->objectName( ) + QString( ":emit Accept( %1 )" ).arg( socketDescriptor ) );
    emit Accept( socketDescriptor );
}

bool QMyNetwork::TcpConnect2Server( QTcpClient* pTcpClient, const QHostAddress &hostAddr, quint16 nPort )
{
    return pTcpClient->Connect2Server( hostAddr, nPort );
}

quint64 QMyNetwork::TcpSendData( QMyTcpSocket* pTcpSocket,  const char * data, qint64 maxSize )
{
    return pTcpSocket->SendData( data, maxSize );
}

quint64 QMyNetwork::TcpSendData( QMyTcpSocket* pTcpSocket,  const QByteArray & byteArray )
{
    return pTcpSocket->SendData( byteArray );
}

quint64 QMyNetwork::TcpReceiveData( QMyTcpSocket* pTcpSocket,  char* data, qint64 maxSize )
{
    return pTcpSocket->ReceiveData( data, maxSize );
}

QByteArray QMyNetwork::QMyNetwork::TcpReceiveData( QMyTcpSocket* pTcpSocket,  qint64 maxSize )
{
    return pTcpSocket->ReceiveData( maxSize );
}

QByteArray QMyNetwork::TcpReceiveData( QMyTcpSocket* pTcpSocket )
{
    return pTcpSocket->ReceiveData( );
}
