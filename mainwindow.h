#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtGui/QMainWindow>
//#include <QDebug>
#include <QSqlRecord>
#include <QSqlField>
#include <QTreeWidget>
#include <QToolButton>
#include <QPrinter>
#include <QPrintDialog>
#include <QPaintEvent>
#include <QLabel>
#include <QTextStream>
#include <QDateTime>
#include <QFile>
#include <QSizePolicy>
#include <QLayout>
#include <QListWidgetItem>
#include <QSizePolicy>
#include <QFont>
#include <QTableWidget>

#include "user.h"

#include "edit/gcomps.h"
#include "edit/gprogs.h"
#include "edit/gcomp_model.h"
#include "edit/comp_model.h"
#include "edit/prog_model.h"
#include "os_model.h"
#include "update_model.h"
#include "edit/listsdialog.h"
#include "edit/hiddenlistdialog.h"
#include "print/printtableview.h"
#include "print/printdialog.h"
#include "report/mkreport.h"
#include "report/browser.h"
#include "connect.h"
#include "aboutdialog.h"
#include "treewidget.h"
#include "tv_delegate.h"
#include "styles.h"
#include "settings/usersdialog.h"
#include "helpbrowser.h"

namespace Ui {
    class mainwindow;
}

class mainwindow : public QMainWindow {
    Q_OBJECT
    Q_DISABLE_COPY(mainwindow)
public:
    explicit mainwindow(QWidget *parent = 0);
    virtual ~mainwindow();
    QLabel *oslabel;
    QLabel *splabel;
    QLabel *verslabel;
    QLabel *userlabel;
    QLabel *orglabel;
    QLabel *pathlabel;
    QLabel *oslabelval;
    QLabel *splabelval;
    QLabel *verslabelval;
    QLabel *userlabelval;
    QLabel *orglabelval;
    QLabel *pathlabelval;

protected:
    virtual void changeEvent(QEvent *e);

private:
    Ui::mainwindow *m_ui;
    gcomp_model gcompmodel;
    comp_model compmodel;
    prog_model progmodel;
    update_model updatemodel;
    os_model osmodel;

    gprogs gprogs_dialog;
    gcomps gcomps_dialog;
    browser *browser_dialog;
    HiddenListDialog *hiddenlist_dialog;
    UsersDialog *users_dialog;
    HelpBrowser *help_dialog;

    QToolButton tb_print;
    QToolButton tb_rbrowser;
    QToolButton tb_refresh;
    QTableWidget t_compinfo;
    TreeWidget tr_info;
    QString gid;
    QString cid;
    QString al_count;
    QString bl_count;
    QString wl_count;
    int apr_row;
    int os_row;
    void savexml();
    int prev_row;

    //void action;
private slots:


private slots:
    void on_m_help_triggered();
    void on_m_users_triggered();
    void on_m_showhidden_triggered();
    void on_m_hidden_triggered();
    void on_m_browser_triggered();
    void on_m_qreport_triggered();
    void on_m_colors_triggered();
    void on_m_blist_triggered();
    void on_m_wlist_triggered();
    void on_action_7_triggered();
    void on_tr_info_clicked2(QModelIndex index);

    void on_m_gprogs_triggered();
    void on_action_11_triggered();
    void on_m_exit_triggered();
    void on_t_comps_activated(QModelIndex index);
    void on_tr_info_clicked(QModelIndex index);
    void on_t_comps_clicked(QModelIndex index);
    void on_cb_gcomps_activated(int index);
    void on_m_gcomps_triggered();
    void on_tb_print_clicked();
    void on_tb_refresh_clicked();
};

class Blank_Delegate : public QItemDelegate
{
    Q_OBJECT
public:
//    TV_Delegate();
    Blank_Delegate(QWidget *parent = 0) : QItemDelegate(parent) { }
};
#endif // MAINWINDOW_H
