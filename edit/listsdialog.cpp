#include "listsdialog.h"
#include "ui_listsdialog.h"

ListsDialog::ListsDialog(QWidget *parent, int prelist) :
    QDialog(parent),
    m_ui(new Ui::ListsDialog)
{
    m_ui->setupUi(this);
    this->setWindowFlags(Qt::Widget);
    setstyle(getstyle(), this);
    this->list=prelist;
    switch (list)
    {
        case 1: this->setWindowTitle(tr("\"Белый список\""));
                m_ui->b_tolist->setToolTip(tr("Поместить в список разрешённых программ"));
                m_ui->b_fromlist->setToolTip(tr("Удалить из списка разрешённых программ"));
                break;
        case 2: this->setWindowTitle(tr("\"Чёрный список\""));
                m_ui->b_tolist->setToolTip(tr("Поместить в список запрещённых программ"));
                m_ui->b_fromlist->setToolTip(tr("Удалить из списка запрещённых программ"));
                break;
    }
    gcompmodel.init(&t_prefix, this->m_ui->cb_gcomps);
    progsmodel.init(&t_prefix, m_ui->t_onlistprogs);
    freeprogsmodel.init(&t_prefix, m_ui->t_freeprogs);
    progsmodel.vers=true;
    progsmodel.pub=false;
    freeprogsmodel.vers=true;
    freeprogsmodel.pub=false;
    cgid="1";
    progsmodel.select(cgid, this->list);
    freeprogsmodel.selectfreeprogs(cgid);
}

ListsDialog::~ListsDialog()
{
    delete m_ui;
}

void ListsDialog::changeEvent(QEvent *e)
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

void ListsDialog::on_cb_gcomps_activated(int index)
{

}


void ListsDialog::on_b_select_clicked()
{
    cgid=gcompmodel.index(m_ui->cb_gcomps->currentIndex(), 0).data().toString();
    freeprogsmodel.selectfreeprogs(cgid);
    progsmodel.select(cgid, this->list);
}

void ListsDialog::on_buttonBox_clicked(QAbstractButton* button)
{
    this->close();
}

void ListsDialog::on_b_tolist_clicked()
{
    pid_free=freeprogsmodel.index(m_ui->t_freeprogs->currentIndex().row(), 0).data().toInt();
    if (pid_free!=0)
    {
        QSqlQuery *tolistquery= new QSqlQuery;
        QModelIndexList inds=m_ui->t_freeprogs->selectionModel()->selectedRows(0);
        for (int i=0; i<inds.count(); i++)
        {
            QModelIndex index = inds.at(i);
            pid_free=index.sibling(index.row(), 0).data().toInt();
            switch (list)
            {
                case 1: tolistquery->exec("INSERT INTO "+t_prefix+"wlist (cgid, pid) VALUES ('"+cgid+"', '"+QString("%1").arg(pid_free)+"')"); break;
                case 2: tolistquery->exec("INSERT INTO "+t_prefix+"blist (cgid, pid) VALUES ('"+cgid+"', '"+QString("%1").arg(pid_free)+"')"); break;
            }
        }
        delete tolistquery;
        freeprogsmodel.selectfreeprogs(cgid);
        progsmodel.select(cgid, this->list);
    }
    else
    {
        QMessageBox error(QMessageBox::Warning, tr("Ошибка!"), tr("Вначале выберите программы из списка слева."), QMessageBox::Ok, this);
        error.exec();
    }
}

void ListsDialog::on_b_fromlist_clicked()
{
    pid_inlist=progsmodel.index(m_ui->t_onlistprogs->currentIndex().row(), 0).data().toInt();
    if (pid_inlist!=0)
    {
        QSqlQuery *tofreequery= new QSqlQuery;
        QModelIndexList inds=m_ui->t_onlistprogs->selectionModel()->selectedRows(0);
        for (int i=0; i<inds.count(); i++)
        {
            QModelIndex index = inds.at(i);
            pid_inlist=index.sibling(index.row(), 0).data().toInt();
            switch (list)
            {
                case 1: tofreequery->exec("DELETE FROM "+t_prefix+"wlist WHERE cgid='"+cgid+"' AND pid='"+QString("%1").arg(pid_inlist)+"'"); break;
                case 2: tofreequery->exec("DELETE FROM "+t_prefix+"blist WHERE cgid='"+cgid+"' AND pid='"+QString("%1").arg(pid_inlist)+"'"); break;
            }
        }
        delete tofreequery;
        freeprogsmodel.selectfreeprogs(cgid);
        progsmodel.select(cgid, this->list);
    }
    else
    {
        QMessageBox error(QMessageBox::Warning, tr("Ошибка!"), tr("Вначале выберите программы из списка справа."), QMessageBox::Ok, this);
        error.exec();
    }
}
