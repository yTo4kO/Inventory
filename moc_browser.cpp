/****************************************************************************
** Meta object code from reading C++ file 'browser.h'
**
** Created: Fri Mar 19 23:54:51 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "report/browser.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'browser.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_browser[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       9,    8,    8,    8, 0x08,
      29,    8,    8,    8, 0x08,
      50,    8,    8,    8, 0x08,
      73,    8,    8,    8, 0x08,
     103,   95,    8,    8, 0x08,
     130,   95,    8,    8, 0x08,
     157,    8,    8,    8, 0x08,
     183,  177,    8,    8, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_browser[] = {
    "browser\0\0on_b_help_clicked()\0"
    "on_b_print_clicked()\0on_b_fcancel_clicked()\0"
    "on_b_fapply_clicked()\0checked\0"
    "on_rb_byname_toggled(bool)\0"
    "on_rb_bydate_toggled(bool)\0"
    "on_b_quit_clicked()\0index\0"
    "on_tr_comps_clicked(QModelIndex)\0"
};

const QMetaObject browser::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_browser,
      qt_meta_data_browser, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &browser::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *browser::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *browser::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_browser))
        return static_cast<void*>(const_cast< browser*>(this));
    return QDialog::qt_metacast(_clname);
}

int browser::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_b_help_clicked(); break;
        case 1: on_b_print_clicked(); break;
        case 2: on_b_fcancel_clicked(); break;
        case 3: on_b_fapply_clicked(); break;
        case 4: on_rb_byname_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: on_rb_bydate_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: on_b_quit_clicked(); break;
        case 7: on_tr_comps_clicked((*reinterpret_cast< QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
