#ifndef PRINTDIALOG_H
#define PRINTDIALOG_H

#include <QtGui/QDialog>
#include <QPrinter>
#include <QPrintDialog>
#include <QMessageBox>
#include <QFile>
//#include <QDebug>

namespace Ui {
    class PrintDialog;
}

class PrintDialog : public QDialog {
    Q_OBJECT
    Q_DISABLE_COPY(PrintDialog)
public:
    explicit PrintDialog(QWidget *parent = 0);
    virtual ~PrintDialog();
    void showreport(QString *url, QString *compname);

protected:
    virtual void changeEvent(QEvent *e);

private:
    Ui::PrintDialog *m_ui;
    QString filename;
private slots:
    void on_tb_print_clicked();
};

#endif // PRINTDIALOG_H
