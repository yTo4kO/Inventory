#ifndef GPROGS_H
#define GPROGS_H

#include <QtGui/QDialog>
#include <QSqlQueryModel>
#include <QSqlQuery>
#include <QSqlRecord>
#include <QAbstractButton>
#include <QLineEdit>
#include <QInputDialog>
#include <QMessageBox>

#include "prog_model.h"
#include "gprogs_model.h"
#include "../connect.h"
#include "../styles.h"
namespace Ui {
    class gprogs;
}

class gprogs : public QDialog {
    Q_OBJECT
    Q_DISABLE_COPY(gprogs)
public:
    explicit gprogs(QWidget *parent = 0);
    virtual ~gprogs();


protected:
    virtual void changeEvent(QEvent *e);

private:
    Ui::gprogs *m_ui;
    gprogs_model gprogsmodel;
    prog_model progsmodel;
    QString gid;
    QString pid;
    QString togid;
    QString gname;

private slots:


private slots:


private slots:
    void on_t_progs_entered(QModelIndex index);
    void on_t_progs_activated(QModelIndex index);
    void on_l_gprogs_activated(QModelIndex index);
    void on_l_gprogs_doubleClicked(QModelIndex index);
    void on_cb_gprogs_activated(int index);
    void on_b_setg_ok_clicked();
    void on_b_setg_cancel_clicked();
    void on_b_edit_gr_clicked();
    void on_b_del_gr_clicked();
    void on_b_add_gr_clicked();
    void on_buttonBox_clicked(QAbstractButton* button);
    void on_t_progs_clicked(QModelIndex index);
    void on_l_gprogs_clicked(QModelIndex index);
};

#endif // GPROGS_H
