/****************************************************************************
** Meta object code from reading C++ file 'qtxtdialog.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "StdAfx.h"
#include "../../qtxtdialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qtxtdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QTxtDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x08,
      42,   11,   11,   11, 0x08,
      66,   11,   11,   11, 0x08,
      97,   92,   11,   11, 0x08,
     147,  139,   11,   11, 0x08,
     177,  139,   11,   11, 0x08,
     205,  139,   11,   11, 0x08,
     242,  240,   11,   11, 0x08,
     289,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QTxtDialog[] = {
    "QTxtDialog\0\0on_Close_pushButton_clicked()\0"
    "on_pushButton_clicked()\0"
    "on_texInput_textChanged()\0font\0"
    "on_fontComboBox_currentFontChanged(QFont)\0"
    "checked\0on_butTexItalic_clicked(bool)\0"
    "on_butTexBold_clicked(bool)\0"
    "on_butTexSizeByWidth_clicked(bool)\0d\0"
    "on_dspScrollCharPerSecond_valueChanged(double)\0"
    "on_butTexColor_clicked()\0"
};

void QTxtDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QTxtDialog *_t = static_cast<QTxtDialog *>(_o);
        switch (_id) {
        case 0: _t->on_Close_pushButton_clicked(); break;
        case 1: _t->on_pushButton_clicked(); break;
        case 2: _t->on_texInput_textChanged(); break;
        case 3: _t->on_fontComboBox_currentFontChanged((*reinterpret_cast< const QFont(*)>(_a[1]))); break;
        case 4: _t->on_butTexItalic_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->on_butTexBold_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->on_butTexSizeByWidth_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->on_dspScrollCharPerSecond_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 8: _t->on_butTexColor_clicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QTxtDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QTxtDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QTxtDialog,
      qt_meta_data_QTxtDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QTxtDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QTxtDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QTxtDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QTxtDialog))
        return static_cast<void*>(const_cast< QTxtDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int QTxtDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
