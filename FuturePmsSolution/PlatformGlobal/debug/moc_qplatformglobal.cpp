/****************************************************************************
** Meta object code from reading C++ file 'qplatformglobal.h'
**
** Created: Wed Jul 4 15:39:32 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qplatformglobal.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qplatformglobal.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QPlatformGlobal[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      50,   17,   16,   16, 0x05,

 // slots: signature, parameters, type, tag, flags
     110,   87,   16,   16, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QPlatformGlobal[] = {
    "QPlatformGlobal\0\0strServer,pPeerSocket,pByteArray\0"
    "ParseData(QString,QTcpSocket*,void*)\0"
    "pPeerSocket,pByteArray\0"
    "HandleGetWholeTcpStreamDataFromServer(QTcpSocket*,void*)\0"
};

void QPlatformGlobal::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QPlatformGlobal *_t = static_cast<QPlatformGlobal *>(_o);
        switch (_id) {
        case 0: _t->ParseData((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QTcpSocket*(*)>(_a[2])),(*reinterpret_cast< void*(*)>(_a[3]))); break;
        case 1: _t->HandleGetWholeTcpStreamDataFromServer((*reinterpret_cast< QTcpSocket*(*)>(_a[1])),(*reinterpret_cast< void*(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QPlatformGlobal::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QPlatformGlobal::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QPlatformGlobal,
      qt_meta_data_QPlatformGlobal, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QPlatformGlobal::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QPlatformGlobal::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QPlatformGlobal::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QPlatformGlobal))
        return static_cast<void*>(const_cast< QPlatformGlobal*>(this));
    return QObject::qt_metacast(_clname);
}

int QPlatformGlobal::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void QPlatformGlobal::ParseData(QString _t1, QTcpSocket * _t2, void * _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
