#ifndef GCOMPS_H
#define GCOMPS_H

#include <QtGui/QDialog>
#include <QSqlQueryModel>
#include <QSqlQuery>
#include <QAbstractButton>
#include <QLineEdit>
#include <QInputDialog>
#include <QMessageBox>

#include "comp_model.h"
#include "gcomp_model.h"
#include "../connect.h"
#include "../styles.h"
namespace Ui {
    class gcomps;
}

class gcomps : public QDialog {
    Q_OBJECT
    Q_DISABLE_COPY(gcomps)
public:
    explicit gcomps(QWidget *parent = 0);
    virtual ~gcomps();


protected:
    virtual void changeEvent(QEvent *e);

private:
    Ui::gcomps *m_ui;
    gcomp_model gcompmodel;
    comp_model compmodel;
    QString gid;
    QString cid;
    QString togid;
    QString gname;

private slots:


private slots:


private slots:
    void on_l_gcomps_doubleClicked(QModelIndex index);
    void on_b_setg_cancel_clicked();
    void on_cb_gcomps_activated(int index);
    void on_cb_gcomps_currentIndexChanged(int index);
    void on_b_setg_ok_clicked();
    void on_b_edit_gr_clicked();
    void on_b_del_gr_clicked();
    void on_b_add_gr_clicked();
    void on_buttonBox_clicked(QAbstractButton* button);
    void on_t_comps_clicked(QModelIndex index);
    void on_l_gcomps_clicked(QModelIndex index);
};

#endif // GCOMPS_H
