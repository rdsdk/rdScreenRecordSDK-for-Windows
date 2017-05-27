/****************************************************************************
** Meta object code from reading C++ file 'settingdialog.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "StdAfx.h"
#include "../../settingdialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'settingdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SettingDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x08,
      47,   14,   14,   14, 0x08,
      77,   14,   14,   14, 0x08,
     108,   14,   14,   14, 0x08,
     135,   14,   14,   14, 0x08,
     165,   14,   14,   14, 0x08,
     195,   14,   14,   14, 0x08,
     230,  224,   14,   14, 0x08,
     278,  224,   14,   14, 0x08,
     319,   14,   14,   14, 0x08,
     350,   14,   14,   14, 0x08,
     387,  379,   14,   14, 0x08,
     424,  379,   14,   14, 0x08,
     460,  224,   14,   14, 0x08,
     506,  379,   14,   14, 0x08,
     537,  379,   14,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_SettingDialog[] = {
    "SettingDialog\0\0on_Langage_pushButton_clicked()\0"
    "on_Close_pushButton_clicked()\0"
    "on_Cancel_pushButton_clicked()\0"
    "on_OK_pushButton_clicked()\0"
    "on_Video_pushButton_clicked()\0"
    "on_Auido_pushButton_clicked()\0"
    "on_Live_pushButton_clicked()\0index\0"
    "on_Resolution_comboBox_currentIndexChanged(int)\0"
    "on_FPS_comboBox_currentIndexChanged(int)\0"
    "on_browse_pushButton_clicked()\0"
    "on_View_pushButton_clicked()\0checked\0"
    "on_Win7_MOUSE_checkBox_clicked(bool)\0"
    "on_Win7_Aero_checkBox_clicked(bool)\0"
    "on_Language_comboBox_currentIndexChanged(int)\0"
    "on_File_checkBox_clicked(bool)\0"
    "on_Rtmp_checkBox_clicked(bool)\0"
};

void SettingDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SettingDialog *_t = static_cast<SettingDialog *>(_o);
        switch (_id) {
        case 0: _t->on_Langage_pushButton_clicked(); break;
        case 1: _t->on_Close_pushButton_clicked(); break;
        case 2: _t->on_Cancel_pushButton_clicked(); break;
        case 3: _t->on_OK_pushButton_clicked(); break;
        case 4: _t->on_Video_pushButton_clicked(); break;
        case 5: _t->on_Auido_pushButton_clicked(); break;
        case 6: _t->on_Live_pushButton_clicked(); break;
        case 7: _t->on_Resolution_comboBox_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->on_FPS_comboBox_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->on_browse_pushButton_clicked(); break;
        case 10: _t->on_View_pushButton_clicked(); break;
        case 11: _t->on_Win7_MOUSE_checkBox_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->on_Win7_Aero_checkBox_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->on_Language_comboBox_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->on_File_checkBox_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: _t->on_Rtmp_checkBox_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData SettingDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SettingDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_SettingDialog,
      qt_meta_data_SettingDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SettingDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SettingDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SettingDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SettingDialog))
        return static_cast<void*>(const_cast< SettingDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int SettingDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
