/****************************************************************************
** Meta object code from reading C++ file 'qdlglogbrowser.h'
**
** Created: Wed Jul 4 16:13:34 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Dialog/qdlglogbrowser.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qdlglogbrowser.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QDlgLogBrowser[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      28,   16,   15,   15, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QDlgLogBrowser[] = {
    "QDlgLogBrowser\0\0item,column\0"
    "on_treeWidget_itemDoubleClicked(QTreeWidgetItem*,int)\0"
};

void QDlgLogBrowser::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QDlgLogBrowser *_t = static_cast<QDlgLogBrowser *>(_o);
        switch (_id) {
        case 0: _t->on_treeWidget_itemDoubleClicked((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QDlgLogBrowser::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QDlgLogBrowser::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QDlgLogBrowser,
      qt_meta_data_QDlgLogBrowser, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QDlgLogBrowser::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QDlgLogBrowser::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QDlgLogBrowser::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QDlgLogBrowser))
        return static_cast<void*>(const_cast< QDlgLogBrowser*>(this));
    return QDialog::qt_metacast(_clname);
}

int QDlgLogBrowser::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
