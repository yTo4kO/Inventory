/****************************************************************************
** Meta object code from reading C++ file 'gprogs.h'
**
** Created: Fri Mar 19 23:54:49 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "edit/gprogs.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gprogs.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_gprogs[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      14,    8,    7,    7, 0x08,
      46,    8,    7,    7, 0x08,
      80,    8,    7,    7, 0x08,
     115,    8,    7,    7, 0x08,
     154,    8,    7,    7, 0x08,
     182,    7,    7,    7, 0x08,
     205,    7,    7,    7, 0x08,
     232,    7,    7,    7, 0x08,
     255,    7,    7,    7, 0x08,
     277,    7,    7,    7, 0x08,
     306,  299,    7,    7, 0x08,
     345,    8,    7,    7, 0x08,
     377,    8,    7,    7, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_gprogs[] = {
    "gprogs\0\0index\0on_t_progs_entered(QModelIndex)\0"
    "on_t_progs_activated(QModelIndex)\0"
    "on_l_gprogs_activated(QModelIndex)\0"
    "on_l_gprogs_doubleClicked(QModelIndex)\0"
    "on_cb_gprogs_activated(int)\0"
    "on_b_setg_ok_clicked()\0"
    "on_b_setg_cancel_clicked()\0"
    "on_b_edit_gr_clicked()\0on_b_del_gr_clicked()\0"
    "on_b_add_gr_clicked()\0button\0"
    "on_buttonBox_clicked(QAbstractButton*)\0"
    "on_t_progs_clicked(QModelIndex)\0"
    "on_l_gprogs_clicked(QModelIndex)\0"
};

const QMetaObject gprogs::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_gprogs,
      qt_meta_data_gprogs, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &gprogs::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *gprogs::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *gprogs::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_gprogs))
        return static_cast<void*>(const_cast< gprogs*>(this));
    return QDialog::qt_metacast(_clname);
}

int gprogs::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_t_progs_entered((*reinterpret_cast< QModelIndex(*)>(_a[1]))); break;
        case 1: on_t_progs_activated((*reinterpret_cast< QModelIndex(*)>(_a[1]))); break;
        case 2: on_l_gprogs_activated((*reinterpret_cast< QModelIndex(*)>(_a[1]))); break;
        case 3: on_l_gprogs_doubleClicked((*reinterpret_cast< QModelIndex(*)>(_a[1]))); break;
        case 4: on_cb_gprogs_activated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: on_b_setg_ok_clicked(); break;
        case 6: on_b_setg_cancel_clicked(); break;
        case 7: on_b_edit_gr_clicked(); break;
        case 8: on_b_del_gr_clicked(); break;
        case 9: on_b_add_gr_clicked(); break;
        case 10: on_buttonBox_clicked((*reinterpret_cast< QAbstractButton*(*)>(_a[1]))); break;
        case 11: on_t_progs_clicked((*reinterpret_cast< QModelIndex(*)>(_a[1]))); break;
        case 12: on_l_gprogs_clicked((*reinterpret_cast< QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 13;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
