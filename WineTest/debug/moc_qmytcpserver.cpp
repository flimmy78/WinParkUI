/****************************************************************************
** Meta object code from reading C++ file 'qmytcpserver.h'
**
** Created: Mon Aug 13 17:30:18 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qmytcpserver.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qmytcpserver.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QMyTcpServer[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      31,   14,   13,   13, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_QMyTcpServer[] = {
    "QMyTcpServer\0\0socketDescriptor\0"
    "Accept(int)\0"
};

void QMyTcpServer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QMyTcpServer *_t = static_cast<QMyTcpServer *>(_o);
        switch (_id) {
        case 0: _t->Accept((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QMyTcpServer::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QMyTcpServer::staticMetaObject = {
    { &QTcpServer::staticMetaObject, qt_meta_stringdata_QMyTcpServer,
      qt_meta_data_QMyTcpServer, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QMyTcpServer::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QMyTcpServer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QMyTcpServer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QMyTcpServer))
        return static_cast<void*>(const_cast< QMyTcpServer*>(this));
    return QTcpServer::qt_metacast(_clname);
}

int QMyTcpServer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTcpServer::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void QMyTcpServer::Accept(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE