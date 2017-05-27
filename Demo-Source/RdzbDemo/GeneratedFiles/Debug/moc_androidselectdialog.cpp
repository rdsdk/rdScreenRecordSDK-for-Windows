/****************************************************************************
** Meta object code from reading C++ file 'androidselectdialog.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "StdAfx.h"
#include "../../androidselectdialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'androidselectdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_AndroidSelectDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      21,   20,   20,   20, 0x08,
      51,   20,   20,   20, 0x08,
      84,   20,   20,   20, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_AndroidSelectDialog[] = {
    "AndroidSelectDialog\0\0on_Close_pushButton_clicked()\0"
    "on_Download_pushButton_clicked()\0"
    "on_DownWindow_pushButton_clicked()\0"
};

void AndroidSelectDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        AndroidSelectDialog *_t = static_cast<AndroidSelectDialog *>(_o);
        switch (_id) {
        case 0: _t->on_Close_pushButton_clicked(); break;
        case 1: _t->on_Download_pushButton_clicked(); break;
        case 2: _t->on_DownWindow_pushButton_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData AndroidSelectDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject AndroidSelectDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_AndroidSelectDialog,
      qt_meta_data_AndroidSelectDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &AndroidSelectDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *AndroidSelectDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *AndroidSelectDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AndroidSelectDialog))
        return static_cast<void*>(const_cast< AndroidSelectDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int AndroidSelectDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
