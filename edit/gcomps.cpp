#include "gcomps.h"
#include "ui_gcomps.h"
//#include <QDebug>
//QString t_prefix;

gcomps::gcomps(QWidget *parent) :
    QDialog(parent),
    m_ui(new Ui::gcomps)
{
    m_ui->setupUi(this);
    this->setWindowFlags(Qt::Widget);
    setstyle(getstyle(), this);
    gid="1";
    m_ui->cb_gcomps->setEnabled(false);
    gcompmodel.init(&t_prefix, this->m_ui->l_gcomps);
    gcompmodel.init(&t_prefix, this->m_ui->cb_gcomps);
    compmodel.init(&t_prefix, this->m_ui->t_comps);
    compmodel.os=true;
    compmodel.select(gid);
    m_ui->b_setg_ok->setEnabled(false);
    m_ui->b_setg_cancel->setEnabled(false);
}

gcomps::~gcomps()
{
    delete m_ui;
}

void gcomps::changeEvent(QEvent *e)
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

void gcomps::on_l_gcomps_clicked(QModelIndex index)
{
    gid=index.sibling(index.row(), 0).data().toString();
    cid.clear();
    m_ui->cb_gcomps->setEnabled(false);
    gname=index.sibling(index.row(), 1).data().toString();
    compmodel.select(gid);
    m_ui->cb_gcomps->setCurrentIndex(index.row());
    this->on_cb_gcomps_activated(index.row());
}

void gcomps::on_t_comps_clicked(QModelIndex index)
{
    cid=index.sibling(index.row(), 0).data().toString();
    if (!cid.isEmpty())
        m_ui->cb_gcomps->setEnabled(true);
    else
    {
        m_ui->cb_gcomps->setEnabled(false);
        m_ui->b_setg_ok->setEnabled(false);
        m_ui->b_setg_cancel->setEnabled(false);
    }

}

void gcomps::on_buttonBox_clicked(QAbstractButton* button)
{
    if (button->text()=="OK")
    {
        this->accept();
    }
    else
        this->close();
}

void gcomps::on_b_add_gr_clicked()
{
    bool ok;
    QString group_name;
    group_name = QInputDialog::getText(this, tr("Введите название новой группы ПК"), tr("Название:"), QLineEdit::Normal, "", &ok);
    group_name=group_name.replace("'", "");
    if (ok && !group_name.isEmpty())
    {

        QSqlQuery *addquery = new QSqlQuery;
        addquery->exec("SELECT id FROM "+t_prefix+"gcomps WHERE name='"+group_name+"'");
        if (addquery->size()==0)
        {
            addquery->exec("INSERT INTO "+t_prefix+"gcomps (name, icon) VALUES ('"+group_name+"', '')");
            gcompmodel.refresh();
        }
        else
        {
            QMessageBox error(QMessageBox::Warning, tr("Ошибка"), tr("Группа с названием '%1' уже существует").arg(group_name), QMessageBox::Ok, this);
            error.exec();
        }
        delete addquery;
    }
    else
    {
            QMessageBox error(QMessageBox::Warning, tr("Ошибка"), tr("Вы не ввели название группы"), QMessageBox::Ok, this);
            error.exec();
    }
}

void gcomps::on_b_del_gr_clicked()
{
    if (gid!="1")
    {
        QMessageBox confirm_del(QMessageBox::Warning, tr("Внимание"), tr("Вы уверены, что хотите удалить группу '%1'?").arg(this->gname), QMessageBox::Ok | QMessageBox::Cancel, this);
        int answer=confirm_del.exec();
        if (answer==QMessageBox::Ok)
        {
            QSqlQuery *delquery = new QSqlQuery;
            delquery->exec("UPDATE "+t_prefix+"comps SET gid=1 WHERE gid='"+gid+"'");
            delquery->exec("DELETE FROM "+t_prefix+"gcomps WHERE id='"+gid+"'");
            gcompmodel.refresh();
            delete delquery;
            this->on_l_gcomps_clicked(gcompmodel.index(0, 1));
        }
    }
    else
    {
        QMessageBox error(QMessageBox::Warning, tr("Ошибка!"), tr("Эту группу нельзя удалить."), QMessageBox::Ok, this);
        error.exec();
    }
}

void gcomps::on_b_edit_gr_clicked()
{
    if (gid!="1")
    {
        bool ok;
        QString group_name;
        group_name = QInputDialog::getText(this, tr("Введите название группы ПК"), tr("Название:"), QLineEdit::Normal, gname, &ok);
        group_name=group_name.replace("'", "");
        if (ok && !group_name.isEmpty())
        {
            QSqlQuery *editquery = new QSqlQuery;
            editquery->exec("SELECT id FROM "+t_prefix+"gcomps WHERE name='"+group_name+"'");
            if (editquery->size()==0)
            {
                editquery->exec("UPDATE "+t_prefix+"gcomps SET name='"+group_name+"' WHERE id='"+gid+"'");
                gcompmodel.refresh();
            }
            else
            {
                QMessageBox error(QMessageBox::Warning, tr("Ошибка"), tr("Группа с названием '%1' уже существует").arg(group_name), QMessageBox::Ok, this);
                error.exec();
            }
            delete editquery;
        }
        else
        {
            QMessageBox error(QMessageBox::Warning, tr("Ошибка"), tr("Вы не ввели название группы."), QMessageBox::Ok, this);
            error.exec();
        }
    }
    else
    {
        QMessageBox error(QMessageBox::Warning, tr("Ошибка!"), tr("Эту группу нельзя редактировать."), QMessageBox::Ok, this);
        error.exec();
    }
}

void gcomps::on_b_setg_ok_clicked()
{
    QSqlQuery *editquery = new QSqlQuery;
    editquery->exec("UPDATE "+t_prefix+"comps SET gid='"+togid+"' WHERE id='"+cid+"'");
    gcompmodel.refresh();
    delete editquery;
    compmodel.select(gid);
    this->on_t_comps_clicked(m_ui->t_comps->currentIndex());
}

void gcomps::on_cb_gcomps_currentIndexChanged(int index)
{

}

void gcomps::on_cb_gcomps_activated(int index)
{
    QSqlQuery *selgquery= new QSqlQuery;
    selgquery->exec("SELECT id FROM "+t_prefix+"gcomps WHERE name='"+m_ui->cb_gcomps->currentText()+"'");
    selgquery->first();
    togid=selgquery->value(0).toString();
    if (gid!=togid)
    {
        m_ui->b_setg_ok->setEnabled(true);
        m_ui->b_setg_cancel->setEnabled(true);
    }
    else
    {
        m_ui->b_setg_ok->setEnabled(false);
        m_ui->b_setg_cancel->setEnabled(false);
    }
    delete selgquery;
}

void gcomps::on_b_setg_cancel_clicked()
{
    m_ui->cb_gcomps->setCurrentIndex(m_ui->l_gcomps->currentIndex().row());
    this->on_cb_gcomps_activated(m_ui->l_gcomps->currentIndex().row());
}

void gcomps::on_l_gcomps_doubleClicked(QModelIndex index)
{
    if (index.isValid())
    {
        this->on_b_edit_gr_clicked();
    }
}
