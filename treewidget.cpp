#include "treewidget.h"

TreeWidget::TreeWidget()
{
    refresh();
    os_row=0;
    os_row_parent=-1;
    progs_row=1;
    progs_row_parent=-1;
    upds_row=2;
    upds_row_parent=-1;
}

QStringList TreeWidget::getCodeItem(QModelIndex index)
{
    QStringList ret_list;
    if (index.parent().row()==os_row_parent && index.row()==os_row)
    {
        ret_list.insert(0, "os");
        ret_list.insert(1, "");
    }
    if (index.parent().row()==progs_row_parent && index.row()==progs_row)
    {
        ret_list.insert(0, "progs");
        ret_list.insert(1, "");
    }
    if (index.parent().parent().row()==progs_row_parent && index.parent().row()==progs_row)
    {
        ret_list.insert(0, "progs");
        ret_list.insert(1, QString("%1").arg(ids[index.row()]));
    }
    if (index.parent().row()==upds_row_parent && index.row()==upds_row)
    {
        ret_list.insert(0, "updates");
        ret_list.insert(1, "");
    }
    if (index.parent().parent().row()==upds_row_parent && index.parent().row()==upds_row)
    {
        ret_list.insert(0, "updates");
        ret_list.insert(1, QString("%1").arg(index.row()+1));
    }
//    prev_index=index;
//    prev_item=this->currentItem();
    prev_index=index;
    return ret_list;
}
void TreeWidget::refresh()
{
    this->clear();
    ids.clear();
    query = new QSqlQuery;
    query->exec("SELECT id, name FROM "+t_prefix+"gprogs");
    query->first();
    QList<QTreeWidgetItem *> gprogs_list;
    for (int i = 0; i < query->size(); i++)
    {
        gprogs_list.append(new QTreeWidgetItem((QTreeWidget*)0, QStringList(QString(query->value(1).toString()))));
        ids.append(query->value(0).toInt());
//        qDebug() << ids[i];
        query->next();
    }

    QTreeWidgetItem *topitemos = new QTreeWidgetItem(this);
    topitemos->setText(0, tr("Операционная система"));
    QTreeWidgetItem *topitemprogs = new QTreeWidgetItem(this);
    topitemprogs->setText(0, tr("Программы"));

    QTreeWidgetItem *topitemupds = new QTreeWidgetItem(this);
    topitemupds->setText(0, tr("Обновления"));
    QTreeWidgetItem *topitemupds_sec_upd = new QTreeWidgetItem(topitemupds);
    topitemupds_sec_upd->setText(0, tr("Security Update"));
    QTreeWidgetItem *topitemupds_soft_upd = new QTreeWidgetItem(topitemupds);
    topitemupds_soft_upd->setText(0, tr("Software Update"));

    topitemprogs->addChildren(gprogs_list);
    this->insertTopLevelItem(0, topitemos);
    this->insertTopLevelItem(1, topitemprogs);
    this->insertTopLevelItem(2, topitemupds);
}
