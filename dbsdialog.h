#ifndef DBSDIALOG_H
#define DBSDIALOG_H

#include <QtGui/QDialog>
#include <QMessageBox>
#include <QInputDialog>
#include <QSplashScreen>
#include <QFile>
#include "logo_widget.h"
#include "dbs/dbeditdialog.h"
#include "dbs/dbsettingsini.h"
#include "connect.h"
#include "selectuserdialog.h"
#include "styles.h"
#include "user.h"

namespace Ui
{
    class dbsdialog;
}

class dbsdialog : public QDialog
{
    Q_OBJECT

public:
    dbsdialog(QWidget *parent = 0);
    ~dbsdialog();
    logo_widget logo;
    dbsettingsini dbsettings;

private:
    Ui::dbsdialog *ui;
    bool checkserv();
    void reinstalldb();

private slots:

    void on_b_installdb_clicked();
    void on_cb_styles_activated(QString );
    void on_b_connect_clicked();
    void on_b_cancel_clicked();
    void on_l_db_doubleClicked(QModelIndex index);
    void on_b_del_clicked();
    void on_b_edit_clicked();
    void on_b_add_clicked();
};

#endif // DBSDIALOG_H
