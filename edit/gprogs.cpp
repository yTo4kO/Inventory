#include "gprogs.h"
#include "ui_gprogs.h"
//#include <QDebug>
//QString t_prefix;

gprogs::gprogs(QWidget *parent) :
    QDialog(parent),
    m_ui(new Ui::gprogs)
{
    m_ui->setupUi(this);
    this->setWindowFlags(Qt::Widget);
    setstyle(getstyle(), this);
    gid="1";
    m_ui->cb_gprogs->setEnabled(false);
    gprogsmodel.init(&t_prefix, this->m_ui->l_gprogs);
    gprogsmodel.init(&t_prefix, this->m_ui->cb_gprogs);
    progsmodel.init(&t_prefix, this->m_ui->t_progs);
    progsmodel.pub=false;
    progsmodel.select(gid);
    m_ui->b_setg_ok->setEnabled(false);
    m_ui->b_setg_cancel->setEnabled(false);
}

gprogs::~gprogs()
{
    delete m_ui;
}

void gprogs::changeEvent(QEvent *e)
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

void gprogs::on_l_gprogs_clicked(QModelIndex index)
{
    gid=index.sibling(index.row(), 0).data().toString();
    pid.clear();
    m_ui->cb_gprogs->setEnabled(false);
    gname=index.sibling(index.row(), 1).data().toString();
    progsmodel.select(gid);
    m_ui->cb_gprogs->setCurrentIndex(index.row());
    if (progsmodel.query().size()>0)
    {
        this->on_cb_gprogs_activated(index.row());
    }
}

void gprogs::on_t_progs_clicked(QModelIndex index)
{

    pid=index.sibling(index.row(), 0).data().toString();
    if (!pid.isEmpty())
        m_ui->cb_gprogs->setEnabled(true);
    else
    {
        m_ui->cb_gprogs->setEnabled(false);
        m_ui->b_setg_ok->setEnabled(false);
        m_ui->b_setg_cancel->setEnabled(false);
    }

}

void gprogs::on_buttonBox_clicked(QAbstractButton* button)
{
    if (button->text()=="OK")
    {
        this->accept();
    }
    else
        this->close();
}

void gprogs::on_b_add_gr_clicked()
{
    bool ok;
    QString group_name;
    group_name = QInputDialog::getText(this, tr("Введите название новой группы ПК"), tr("Название:"), QLineEdit::Normal, "", &ok);
    group_name=group_name.replace("'", "");
    if (ok && !group_name.isEmpty())
    {
        QSqlQuery *addquery = new QSqlQuery;
        addquery->exec("SELECT id FROM "+t_prefix+"gprogs WHERE name='"+group_name+"'");
        if (addquery->size()==0)
        {
            addquery->exec("INSERT INTO "+t_prefix+"gprogs (name, icon) VALUES ('"+group_name+"', '')");
            gprogsmodel.refresh();
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
        QMessageBox error(QMessageBox::Warning, tr("Ошибка"), tr("Вы не ввели название группы."), QMessageBox::Ok, this);
        error.exec();
    }
}

void gprogs::on_b_del_gr_clicked()
{
    if (gid!="1")
    {
        QMessageBox confirm_del(QMessageBox::Warning, tr("Внимание"), tr("Вы уверены, что хотите удалить группу '%1'?").arg(this->gname), QMessageBox::Ok | QMessageBox::Cancel, this);
        int answer=confirm_del.exec();
        if (answer==QMessageBox::Ok)
        {
            QSqlQuery *delquery = new QSqlQuery;
            delquery->exec("UPDATE "+t_prefix+"progs SET gid=1 WHERE gid='"+gid+"'");
            delquery->exec("DELETE FROM "+t_prefix+"gprogs WHERE id='"+gid+"'");
            gprogsmodel.refresh();
            delete delquery;
            this->on_l_gprogs_clicked(gprogsmodel.index(0, 1));
        }
    }
    else
    {
        QMessageBox error(QMessageBox::Warning, tr("Ошибка!"), tr("Эту группу нельзя удалить."), QMessageBox::Ok, this);
        error.exec();
    }
}

void gprogs::on_b_edit_gr_clicked()
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
            editquery->exec("SELECT id FROM "+t_prefix+"gprogs WHERE name='"+group_name+"'");
            if (editquery->size()==0)
            {
                editquery->exec("UPDATE "+t_prefix+"gprogs SET name='"+group_name+"' WHERE id='"+gid+"'");
                gprogsmodel.refresh();
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

void gprogs::on_b_setg_ok_clicked()
{
    QSqlQuery *editquery = new QSqlQuery;
    QModelIndexList inds=m_ui->t_progs->selectionModel()->selectedRows(0);
    for (int i=0; i<inds.count(); i++)
    {
        QModelIndex index = inds.at(i);
        pid=index.sibling(index.row(), 0).data().toString();
        editquery->exec("UPDATE "+t_prefix+"progs SET gid='"+togid+"' WHERE id='"+pid+"'");
    }
    gprogsmodel.refresh();
    delete editquery;
    progsmodel.select(gid);
    this->on_t_progs_clicked(m_ui->t_progs->currentIndex());
}


void gprogs::on_cb_gprogs_activated(int index)
{
    QSqlQuery *selgquery= new QSqlQuery;
    selgquery->exec("SELECT id FROM "+t_prefix+"gprogs WHERE name='"+m_ui->cb_gprogs->currentText()+"'");
    selgquery->first();
//    qDebug() << selgquery->lastQuery();
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

void gprogs::on_b_setg_cancel_clicked()
{
    m_ui->cb_gprogs->setCurrentIndex(m_ui->l_gprogs->currentIndex().row());
    this->on_cb_gprogs_activated(m_ui->l_gprogs->currentIndex().row());
}

void gprogs::on_l_gprogs_doubleClicked(QModelIndex index)
{
    if (index.isValid())
    {
        this->on_b_edit_gr_clicked();
    }
}

void gprogs::on_l_gprogs_activated(QModelIndex index)
{

}

void gprogs::on_t_progs_activated(QModelIndex index)
{

}

void gprogs::on_t_progs_entered(QModelIndex index)
{
//    qDebug() << "easd";
}
