/****************************************************************************
** Meta object code from reading C++ file 'gcomps.h'
**
** Created: Fri Mar 19 23:54:48 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "edit/gcomps.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gcomps.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_gcomps[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      14,    8,    7,    7, 0x08,
      53,    7,    7,    7, 0x08,
      80,    8,    7,    7, 0x08,
     108,    8,    7,    7, 0x08,
     146,    7,    7,    7, 0x08,
     169,    7,    7,    7, 0x08,
     192,    7,    7,    7, 0x08,
     214,    7,    7,    7, 0x08,
     243,  236,    7,    7, 0x08,
     282,    8,    7,    7, 0x08,
     314,    8,    7,    7, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_gcomps[] = {
    "gcomps\0\0index\0on_l_gcomps_doubleClicked(QModelIndex)\0"
    "on_b_setg_cancel_clicked()\0"
    "on_cb_gcomps_activated(int)\0"
    "on_cb_gcomps_currentIndexChanged(int)\0"
    "on_b_setg_ok_clicked()\0on_b_edit_gr_clicked()\0"
    "on_b_del_gr_clicked()\0on_b_add_gr_clicked()\0"
    "button\0on_buttonBox_clicked(QAbstractButton*)\0"
    "on_t_comps_clicked(QModelIndex)\0"
    "on_l_gcomps_clicked(QModelIndex)\0"
};

const QMetaObject gcomps::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_gcomps,
      qt_meta_data_gcomps, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &gcomps::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *gcomps::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *gcomps::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_gcomps))
        return static_cast<void*>(const_cast< gcomps*>(this));
    return QDialog::qt_metacast(_clname);
}

int gcomps::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_l_gcomps_doubleClicked((*reinterpret_cast< QModelIndex(*)>(_a[1]))); break;
        case 1: on_b_setg_cancel_clicked(); break;
        case 2: on_cb_gcomps_activated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: on_cb_gcomps_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: on_b_setg_ok_clicked(); break;
        case 5: on_b_edit_gr_clicked(); break;
        case 6: on_b_del_gr_clicked(); break;
        case 7: on_b_add_gr_clicked(); break;
        case 8: on_buttonBox_clicked((*reinterpret_cast< QAbstractButton*(*)>(_a[1]))); break;
        case 9: on_t_comps_clicked((*reinterpret_cast< QModelIndex(*)>(_a[1]))); break;
        case 10: on_l_gcomps_clicked((*reinterpret_cast< QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 11;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
