/****************************************************************************
** Meta object code from reading C++ file 'dbsdialog.h'
**
** Created: Fri Mar 19 23:54:41 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "dbsdialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dbsdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_dbsdialog[] = {

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
      11,   10,   10,   10, 0x08,
      36,   10,   10,   10, 0x08,
      68,   10,   10,   10, 0x08,
      91,   10,   10,   10, 0x08,
     119,  113,   10,   10, 0x08,
     154,   10,   10,   10, 0x08,
     173,   10,   10,   10, 0x08,
     193,   10,   10,   10, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_dbsdialog[] = {
    "dbsdialog\0\0on_b_installdb_clicked()\0"
    "on_cb_styles_activated(QString)\0"
    "on_b_connect_clicked()\0on_b_cancel_clicked()\0"
    "index\0on_l_db_doubleClicked(QModelIndex)\0"
    "on_b_del_clicked()\0on_b_edit_clicked()\0"
    "on_b_add_clicked()\0"
};

const QMetaObject dbsdialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_dbsdialog,
      qt_meta_data_dbsdialog, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &dbsdialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *dbsdialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *dbsdialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_dbsdialog))
        return static_cast<void*>(const_cast< dbsdialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int dbsdialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_b_installdb_clicked(); break;
        case 1: on_cb_styles_activated((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: on_b_connect_clicked(); break;
        case 3: on_b_cancel_clicked(); break;
        case 4: on_l_db_doubleClicked((*reinterpret_cast< QModelIndex(*)>(_a[1]))); break;
        case 5: on_b_del_clicked(); break;
        case 6: on_b_edit_clicked(); break;
        case 7: on_b_add_clicked(); break;
        default: ;
        }
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
