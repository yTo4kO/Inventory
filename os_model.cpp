#include "os_model.h"

os_model::os_model()
{
}

void os_model::init(QString *prefix, QTableWidget *twidget)
{
    this->t_prefix=*prefix;
    this->view=twidget;
}

void os_model::showinfo(QString cid)
{
    QString select;
    this->setHeaderData(0, Qt::Horizontal, tr(""));
    this->setHeaderData(1, Qt::Horizontal, tr(""));
    this->setQuery("SELECT name, os, sp, version, user, organization, path, lastupdate FROM "+t_prefix+"comps WHERE id='"+cid+"'");
    this->query().first();
    this->view->setColumnCount(2);
    this->view->setRowCount(this->columnCount());
    this->view->horizontalHeader()->setVisible(false);
    this->view->verticalHeader()->setVisible(false);

    name_item.setText(tr("Имя компьютера:"));
    this->view->setItem(0, 0, &name_item);
    name_item_val.setText(this->query().value(0).toString());
    this->view->setItem(0, 1, &name_item_val);

    os_item.setText(tr("Операционная система:"));
    this->view->setItem(1, 0, &os_item);
    os_item_val.setText(this->query().value(1).toString());
    this->view->setItem(1, 1, &os_item_val);

    sp_item.setText(tr("Service Pack:"));
    this->view->setItem(2, 0, &sp_item);
    sp_item_val.setText(this->query().value(2).toString());
    this->view->setItem(2, 1, &sp_item_val);

    version_item.setText(tr("Версия:"));
    this->view->setItem(3, 0, &version_item);
    version_item_val.setText(this->query().value(3).toString());
    this->view->setItem(3, 1, &version_item_val);

    user_item.setText(tr("Пользователь:"));
    this->view->setItem(4, 0, &user_item);
    user_item_val.setText(this->query().value(4).toString());
    this->view->setItem(4, 1, &user_item_val);

    organization_item.setText(tr("Организация:"));
    this->view->setItem(5, 0, &organization_item);
    organization_item_val.setText(this->query().value(5).toString());
    this->view->setItem(5, 1, &organization_item_val);

    path_item.setText(tr("Путь:"));
    this->view->setItem(6, 0, &path_item);
    path_item_val.setText(this->query().value(6).toString().replace(":", ":\\"));
    this->view->setItem(6, 1, &path_item_val);

    lastupd_item.setText(tr("Последнее обновление:"));
    this->view->setItem(7, 0, &lastupd_item);
    lastupd_item_val.setText(QDateTime::fromTime_t(this->query().value(7).toInt()).toString("hh:mm:ss dd.MM.yyyy"));
    this->view->setItem(7, 1, &lastupd_item_val);

    this->view->horizontalHeader()->setStretchLastSection(true);
    this->view->resizeColumnsToContents();
}
