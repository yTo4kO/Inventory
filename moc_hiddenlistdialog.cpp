/****************************************************************************
** Meta object code from reading C++ file 'hiddenlistdialog.h'
**
** Created: Fri Mar 19 23:54:49 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "edit/hiddenlistdialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'hiddenlistdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_HiddenListDialog[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      18,   17,   17,   17, 0x08,
      40,   17,   17,   17, 0x08,
      67,   60,   17,   17, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_HiddenListDialog[] = {
    "HiddenListDialog\0\0on_b_unhide_clicked()\0"
    "on_b_hide_clicked()\0button\0"
    "on_buttonBox_clicked(QAbstractButton*)\0"
};

const QMetaObject HiddenListDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_HiddenListDialog,
      qt_meta_data_HiddenListDialog, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &HiddenListDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *HiddenListDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *HiddenListDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_HiddenListDialog))
        return static_cast<void*>(const_cast< HiddenListDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int HiddenListDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_b_unhide_clicked(); break;
        case 1: on_b_hide_clicked(); break;
        case 2: on_buttonBox_clicked((*reinterpret_cast< QAbstractButton*(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
