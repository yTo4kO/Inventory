#include "browser.h"
#include "ui_browser.h"

browser::browser(QWidget *parent) :
    QDialog(parent),
    m_ui(new Ui::browser)
{
    m_ui->setupUi(this);
    setAttribute(Qt::WA_DeleteOnClose, true);
    this->setWindowFlags(Qt::Widget);
    setstyle(getstyle(), this);
    m_ui->w_bydate->setEnabled(false);
    m_ui->e_name->setEnabled(false);
    tr_comps.setParent(this->m_ui->gb_comps);
    m_ui->verticalLayout_3->addWidget(&tr_comps);
    tr_comps.setHeaderHidden(true);
    tr_comps.loadreports();
    tr_comps.connect(&tr_comps, SIGNAL(clicked(QModelIndex)), this, SLOT(on_tr_comps_clicked(QModelIndex)));
    m_ui->de_from->setDate(QDate::currentDate());
    m_ui->de_to->setDate(QDate::currentDate());
    reportfile="browserhelp.html";
    m_ui->reportview->setUrl(reportfile);
}

browser::~browser()
{
    delete m_ui;
}

void browser::changeEvent(QEvent *e)
{
    switch (e->type()) {
    case QEvent::LanguageChange:
        m_ui->retranslateUi(this);
        break;
    default:
        break;
    }
}

void browser::on_tr_comps_clicked(QModelIndex index)
{
    if (index.parent().row()!=-1)
    {
        reportfile="Reports/"+identificator+"/"+index.parent().data().toString()+"/"+index.data().toString().replace(":", "-")+".html";
        m_ui->reportview->setUrl(reportfile);
    }
}

void browser::on_b_quit_clicked()
{
    this->close();
}

void browser::on_rb_bydate_toggled(bool checked)
{
        m_ui->w_bydate->setEnabled(checked);
}

void browser::on_rb_byname_toggled(bool checked)
{
        m_ui->e_name->setEnabled(checked);
}

void browser::on_b_fapply_clicked()
{
    if (!m_ui->rb_bydate->isChecked() && !m_ui->rb_byname->isChecked())
    {
        QMessageBox message(QMessageBox::Warning, tr("Ошибка"), tr("Выберите один из двух типов фильтрации на панели слева."), QMessageBox::Ok, this);
        message.exec();
    }
    else
    {
        if (m_ui->rb_bydate->isChecked())
            tr_comps.setfilter(&m_ui->de_from->date(), &m_ui->de_to->date());
        if (m_ui->rb_byname->isChecked())
        {
            if (!m_ui->e_name->text().isEmpty())
            {
                tr_comps.setfilter(&m_ui->e_name->text());
            }
            else
            {
                QMessageBox message(QMessageBox::Warning, tr("Ошибка"), tr("Введите в поле имя компьютера."), QMessageBox::Ok, this);
                message.exec();
            }
        }
    }
}

void browser::on_b_fcancel_clicked()
{
    tr_comps.resetfilter();
    m_ui->e_name->clear();
}

void browser::on_b_print_clicked()
{
     QPrinter printer;
     QPrintDialog *prdialog = new QPrintDialog(&printer, this);
     prdialog->setWindowTitle(tr("Печать"));
     if (prdialog->exec()==QDialog::Accepted)
        m_ui->reportview->print(&printer);
     delete prdialog;
}

void browser::on_b_help_clicked()
{
    reportfile="browserhelp.html";
    m_ui->reportview->setUrl(reportfile);
}
