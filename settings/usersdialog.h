#ifndef USERSDIALOG_H
#define USERSDIALOG_H

#include <QtGui/QDialog>
#include <QSqlQuery>
#include <QMessageBox>
#include <QCryptographicHash>
//#include <QDebug>
#include <QByteArray>

#include "../connect.h"
#include "styles.h"

namespace Ui {
    class UsersDialog;
}

class UsersDialog : public QDialog {
    Q_OBJECT
    Q_DISABLE_COPY(UsersDialog)
public:
    explicit UsersDialog(QWidget *parent = 0);
    virtual ~UsersDialog();

protected:
    virtual void changeEvent(QEvent *e);

private:
    Ui::UsersDialog *m_ui;

private slots:
    void on_b_apply_clicked();
    void on_b_quit_clicked();
};

#endif // USERSDIALOG_H
