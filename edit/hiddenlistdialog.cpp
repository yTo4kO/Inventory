#include "hiddenlistdialog.h"
#include "ui_hiddenlistdialog.h"

HiddenListDialog::HiddenListDialog(QWidget *parent) :
    QDialog(parent),
    m_ui(new Ui::HiddenListDialog)
{
    m_ui->setupUi(this);
    setAttribute(Qt::WA_DeleteOnClose, true);
    this->setWindowFlags(Qt::Widget);
    setstyle(getstyle(), this);

    unhprogsmodel.init(&t_prefix, this->m_ui->t_unhidden);
    unhprogsmodel.vers=true;
    unhprogsmodel.pub=false;
    unhprogsmodel.selecthidelist(0);
    hprogsmodel.init(&t_prefix, this->m_ui->t_hidden);
    hprogsmodel.vers=true;
    hprogsmodel.pub=false;
    hprogsmodel.selecthidelist(1);
}

HiddenListDialog::~HiddenListDialog()
{
    delete m_ui;
}

void HiddenListDialog::changeEvent(QEvent *e)
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

void HiddenListDialog::on_buttonBox_clicked(QAbstractButton* button)
{
    this->close();
}

void HiddenListDialog::on_b_hide_clicked()
{
//    pid=m_ui->t_unhidden->currentIndex().sibling(m_ui->t_unhidden->currentIndex().row(), 0).data().toString();
    pid=QString("%1").arg(m_ui->t_unhidden->selectionModel()->selectedRows(0).count());
    if (pid!="0")
    {
        QSqlQuery *editquery = new QSqlQuery;
        QModelIndexList inds=m_ui->t_unhidden->selectionModel()->selectedRows(0);
        for (int i=0; i<inds.count(); i++)
        {
            QModelIndex index = inds.at(i);
            pid=index.sibling(index.row(), 0).data().toString();
            editquery->exec("UPDATE "+t_prefix+"progs SET hide='1' WHERE id='"+pid+"'");
        }
        unhprogsmodel.selecthidelist(0);
        hprogsmodel.selecthidelist(1);
        delete editquery;
    }
    else
    {
        QMessageBox error(QMessageBox::Warning, tr("Ошибка!"), tr("Выберите хотя бы одну программу из списка слева."), QMessageBox::Ok, this);
        error.exec();
    }
}

void HiddenListDialog::on_b_unhide_clicked()
{
    pid=QString("%1").arg(m_ui->t_hidden->selectionModel()->selectedRows(0).count());
    if (pid!="0")
    {
        QSqlQuery *editquery = new QSqlQuery;
        QModelIndexList inds=m_ui->t_hidden->selectionModel()->selectedRows(0);
        for (int i=0; i<inds.count(); i++)
        {
            QModelIndex index = inds.at(i);
            pid=index.sibling(index.row(), 0).data().toString();
            editquery->exec("UPDATE "+t_prefix+"progs SET hide='0' WHERE id='"+pid+"'");
        }
        unhprogsmodel.selecthidelist(0);
        hprogsmodel.selecthidelist(1);
        delete editquery;
    }
    else
    {
        QMessageBox error(QMessageBox::Warning, tr("Ошибка!"), tr("Выберите хотя бы одну программу из списка справа."), QMessageBox::Ok, this);
        error.exec();
    }
}
