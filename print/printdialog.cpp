#include "printdialog.h"
#include "ui_printdialog.h"

PrintDialog::PrintDialog(QWidget *parent) :
    QDialog(parent),
    m_ui(new Ui::PrintDialog)
{
    m_ui->setupUi(this);
}

PrintDialog::~PrintDialog()
{
    QMessageBox confirm_del(QMessageBox::Warning, tr("Внимание"), tr("Вы хотите сохранить отчёт в системе?"), QMessageBox::Yes | QMessageBox::No, this);
    if (confirm_del.exec()==QMessageBox::No)
    {
        QFile file(filename);
        file.close();
        file.remove();
    }
    delete m_ui;
}

void PrintDialog::changeEvent(QEvent *e)
{
    QDialog::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        m_ui->retranslateUi(this);
        break;
    default:
        break;
    }
}

void PrintDialog::showreport(QString *url, QString *compname)
{
    this->filename=*url;
    m_ui->webView->setUrl(filename);
    this->setWindowTitle(tr("Отчёт по компьютеру ")+*compname);
    this->exec();
}

void PrintDialog::on_tb_print_clicked()
{
     QPrinter printer;
     QPrintDialog *prdialog = new QPrintDialog(&printer, this);
     prdialog->setWindowTitle(tr("Печать"));
     if (prdialog->exec()==QDialog::Accepted)
        m_ui->webView->print(&printer);
}
