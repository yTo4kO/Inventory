#ifndef SELECTUSERDIALOG_H
#define SELECTUSERDIALOG_H

#include <QtGui/QDialog>
#include <QSqlQuery>
#include <QAbstractButton>
#include <QMessageBox>
#include <QSqlResult>
#include <QMainWindow>
#include <QCryptographicHash>
//#include <QDebug>
#include <QByteArray>

#include "connect.h"
#include "styles.h"
#include "user.h"
#include "mainwindow.h"

namespace Ui {
    class selectuserdialog;
}

class selectuserdialog : public QDialog {
    Q_OBJECT
    Q_DISABLE_COPY(selectuserdialog)
public:
    explicit selectuserdialog(QWidget *parent = 0);
    virtual ~selectuserdialog();

protected:
    virtual void changeEvent(QEvent *e);

private:
    Ui::selectuserdialog *m_ui;

private slots:
    void on_buttonBox_clicked(QAbstractButton* button);
};

#endif // SELECTUSERDIALOG_H
