#ifndef LISTSDIALOG_H
#define LISTSDIALOG_H

#include <QtGui/QDialog>
#include <QSqlQueryModel>
#include <QSqlQuery>
#include <QAbstractButton>
#include <QMessageBox>

#include "../connect.h"
#include "gcomp_model.h"
#include "prog_model.h"
#include "styles.h"

namespace Ui {
    class ListsDialog;
}

class ListsDialog : public QDialog {
    Q_OBJECT
    Q_DISABLE_COPY(ListsDialog)
public:
    explicit ListsDialog(QWidget *parent = 0, int prelist=1);
    virtual ~ListsDialog();
    int list;

protected:
    virtual void changeEvent(QEvent *e);
    QString cgid;

private:
    Ui::ListsDialog *m_ui;
    gcomp_model gcompmodel;
    prog_model progsmodel;
    prog_model freeprogsmodel;
    int pid_free, pid_inlist;

private slots:
    void on_b_fromlist_clicked();
    void on_b_tolist_clicked();
    void on_buttonBox_clicked(QAbstractButton* button);
    void on_b_select_clicked();
    void on_cb_gcomps_activated(int index);
};

#endif // LISTSDIALOG_H
