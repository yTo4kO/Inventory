/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created: Fri Mar 19 23:54:43 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "mainwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_mainwindow[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
      21,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x08,
      34,   11,   11,   11, 0x08,
      57,   11,   11,   11, 0x08,
      85,   11,   11,   11, 0x08,
     109,   11,   11,   11, 0x08,
     134,   11,   11,   11, 0x08,
     159,   11,   11,   11, 0x08,
     183,   11,   11,   11, 0x08,
     206,   11,   11,   11, 0x08,
     229,   11,   11,   11, 0x08,
     259,  253,   11,   11, 0x08,
     292,   11,   11,   11, 0x08,
     316,   11,   11,   11, 0x08,
     341,   11,   11,   11, 0x08,
     363,  253,   11,   11, 0x08,
     397,  253,   11,   11, 0x08,
     429,  253,   11,   11, 0x08,
     461,  253,   11,   11, 0x08,
     489,   11,   11,   11, 0x08,
     513,   11,   11,   11, 0x08,
     535,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_mainwindow[] = {
    "mainwindow\0\0on_m_help_triggered()\0"
    "on_m_users_triggered()\0"
    "on_m_showhidden_triggered()\0"
    "on_m_hidden_triggered()\0"
    "on_m_browser_triggered()\0"
    "on_m_qreport_triggered()\0"
    "on_m_colors_triggered()\0on_m_blist_triggered()\0"
    "on_m_wlist_triggered()\0on_action_7_triggered()\0"
    "index\0on_tr_info_clicked2(QModelIndex)\0"
    "on_m_gprogs_triggered()\0"
    "on_action_11_triggered()\0on_m_exit_triggered()\0"
    "on_t_comps_activated(QModelIndex)\0"
    "on_tr_info_clicked(QModelIndex)\0"
    "on_t_comps_clicked(QModelIndex)\0"
    "on_cb_gcomps_activated(int)\0"
    "on_m_gcomps_triggered()\0on_tb_print_clicked()\0"
    "on_tb_refresh_clicked()\0"
};

const QMetaObject mainwindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_mainwindow,
      qt_meta_data_mainwindow, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &mainwindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *mainwindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *mainwindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_mainwindow))
        return static_cast<void*>(const_cast< mainwindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int mainwindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_m_help_triggered(); break;
        case 1: on_m_users_triggered(); break;
        case 2: on_m_showhidden_triggered(); break;
        case 3: on_m_hidden_triggered(); break;
        case 4: on_m_browser_triggered(); break;
        case 5: on_m_qreport_triggered(); break;
        case 6: on_m_colors_triggered(); break;
        case 7: on_m_blist_triggered(); break;
        case 8: on_m_wlist_triggered(); break;
        case 9: on_action_7_triggered(); break;
        case 10: on_tr_info_clicked2((*reinterpret_cast< QModelIndex(*)>(_a[1]))); break;
        case 11: on_m_gprogs_triggered(); break;
        case 12: on_action_11_triggered(); break;
        case 13: on_m_exit_triggered(); break;
        case 14: on_t_comps_activated((*reinterpret_cast< QModelIndex(*)>(_a[1]))); break;
        case 15: on_tr_info_clicked((*reinterpret_cast< QModelIndex(*)>(_a[1]))); break;
        case 16: on_t_comps_clicked((*reinterpret_cast< QModelIndex(*)>(_a[1]))); break;
        case 17: on_cb_gcomps_activated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 18: on_m_gcomps_triggered(); break;
        case 19: on_tb_print_clicked(); break;
        case 20: on_tb_refresh_clicked(); break;
        default: ;
        }
        _id -= 21;
    }
    return _id;
}
static const uint qt_meta_data_Blank_Delegate[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_Blank_Delegate[] = {
    "Blank_Delegate\0"
};

const QMetaObject Blank_Delegate::staticMetaObject = {
    { &QItemDelegate::staticMetaObject, qt_meta_stringdata_Blank_Delegate,
      qt_meta_data_Blank_Delegate, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Blank_Delegate::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Blank_Delegate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Blank_Delegate::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Blank_Delegate))
        return static_cast<void*>(const_cast< Blank_Delegate*>(this));
    return QItemDelegate::qt_metacast(_clname);
}

int Blank_Delegate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QItemDelegate::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
