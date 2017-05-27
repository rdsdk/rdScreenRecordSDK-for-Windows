/****************************************************************************
** Meta object code from reading C++ file 'ChipItem.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "StdAfx.h"
#include "../../ChipItem.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ChipItem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ChipItem[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      20,   10,    9,    9, 0x0a,
      73,   66,    9,    9, 0x0a,
     113,    9,    9,    9, 0x0a,
     150,  142,    9,    9, 0x0a,
     179,  142,    9,    9, 0x0a,
     206,  142,    9,    9, 0x0a,
     236,    9,    9,    9, 0x0a,
     268,    9,    9,    9, 0x0a,
     302,    9,    9,    9, 0x0a,
     337,    9,    9,    9, 0x0a,
     358,    9,    9,    9, 0x0a,
     380,    9,    9,    9, 0x0a,
     401,  142,    9,    9, 0x0a,
     432,  426,    9,    9, 0x0a,
     470,    9,    9,    9, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_ChipItem[] = {
    "ChipItem\0\0fMin,fMax\0"
    "on_widPlayProgress_areaChanged(double,double)\0"
    "fValue\0on_widPlayProgress_valueChanged(double)\0"
    "on_timPlayProgress_timeout()\0checked\0"
    "on_chkHideChip_clicked(bool)\0"
    "on_butMiddle_clicked(bool)\0"
    "on_butScaleFull_clicked(bool)\0"
    "on_Up_Chip_pushButton_clicked()\0"
    "on_Down_Chip_pushButton_clicked()\0"
    "on_Close_Chip_pushButton_clicked()\0"
    "on_butPlay_clicked()\0on_butPause_clicked()\0"
    "on_butStop_clicked()\0on_chkMute_clicked(bool)\0"
    "value\0on_horizontalSlider_valueChanged(int)\0"
    "on_pushButton_Revise_Txt_clicked()\0"
};

void ChipItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ChipItem *_t = static_cast<ChipItem *>(_o);
        switch (_id) {
        case 0: _t->on_widPlayProgress_areaChanged((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 1: _t->on_widPlayProgress_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 2: _t->on_timPlayProgress_timeout(); break;
        case 3: _t->on_chkHideChip_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->on_butMiddle_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->on_butScaleFull_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->on_Up_Chip_pushButton_clicked(); break;
        case 7: _t->on_Down_Chip_pushButton_clicked(); break;
        case 8: _t->on_Close_Chip_pushButton_clicked(); break;
        case 9: _t->on_butPlay_clicked(); break;
        case 10: _t->on_butPause_clicked(); break;
        case 11: _t->on_butStop_clicked(); break;
        case 12: _t->on_chkMute_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->on_horizontalSlider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->on_pushButton_Revise_Txt_clicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ChipItem::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ChipItem::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ChipItem,
      qt_meta_data_ChipItem, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ChipItem::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ChipItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ChipItem::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ChipItem))
        return static_cast<void*>(const_cast< ChipItem*>(this));
    return QWidget::qt_metacast(_clname);
}

int ChipItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
