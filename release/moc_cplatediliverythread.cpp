/****************************************************************************
** Meta object code from reading C++ file 'cplatediliverythread.h'
**
** Created: Wed Feb 20 12:15:40 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../PlateDilivery/cplatediliverythread.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cplatediliverythread.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CPlateDiliveryThread[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      30,   22,   21,   21, 0x05,
      68,   59,   21,   21, 0x05,
      91,   84,   21,   21, 0x05,

 // slots: signature, parameters, type, tag, flags
     140,  114,   21,   21, 0x0a,
     185,   21,   21,   21, 0x0a,
     201,   21,   21,   21, 0x0a,
     224,  213,   21,   21, 0x0a,
     268,  251,   21,   21, 0x0a,
     286,   59,   21,   21, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_CPlateDiliveryThread[] = {
    "CPlateDiliveryThread\0\0lstData\0"
    "WeighingRequest(QStringList)\0nChannel\0"
    "Capture(quint8)\0nCount\0SendFileCount(quint32)\0"
    "nChannel,lstData,strPlate\0"
    "HandlePlateDilivery(int,QStringList,QString)\0"
    "IncommingData()\0Reconnect()\0byResponse\0"
    "HandleResponse(QByteArray)\0socketDescriptor\0"
    "HandleAccept(int)\0HandleCapture(quint8)\0"
};

const QMetaObject CPlateDiliveryThread::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_CPlateDiliveryThread,
      qt_meta_data_CPlateDiliveryThread, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CPlateDiliveryThread::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CPlateDiliveryThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CPlateDiliveryThread::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CPlateDiliveryThread))
        return static_cast<void*>(const_cast< CPlateDiliveryThread*>(this));
    return QThread::qt_metacast(_clname);
}

int CPlateDiliveryThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: WeighingRequest((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 1: Capture((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 2: SendFileCount((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 3: HandlePlateDilivery((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QStringList(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 4: IncommingData(); break;
        case 5: Reconnect(); break;
        case 6: HandleResponse((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 7: HandleAccept((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: HandleCapture((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void CPlateDiliveryThread::WeighingRequest(QStringList _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CPlateDiliveryThread::Capture(quint8 _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void CPlateDiliveryThread::SendFileCount(quint32 _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE