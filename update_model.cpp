#include "update_model.h"

update_model::update_model()
{
}

void update_model::init(QString *prefix, QTableView *tview)
{
    this->t_prefix=*prefix;
    this->view=tview;
}

void update_model::select(QString cid, QString urtid)
{
    QString select;
    this->setHeaderData(0, Qt::Horizontal, tr("#"));
    this->setHeaderData(1, Qt::Horizontal, tr("Название"));
    this->setHeaderData(2, Qt::Horizontal, tr("Описание"));
    sec=3;
    if (pub) { select=", "+t_prefix+"updates.publisher"; this->setHeaderData(sec, Qt::Horizontal, tr("Издатель")); sec++; }
    if (urtid=="aupd")
    {
        this->setQuery("SELECT "+t_prefix+"updates.id, "+t_prefix+"updates.name, "+t_prefix+"updates.dispname "+select+" "
                       "FROM "+t_prefix+"updates, "+t_prefix+"comp_update "
                       "WHERE "+t_prefix+"updates.id="+t_prefix+"comp_update.uid AND "+t_prefix+"comp_update.cid='"+cid+"' ORDER BY "+t_prefix+"updates.name");
    }
    else
    {
        this->setQuery("SELECT "+t_prefix+"updates.id, "+t_prefix+"updates.name, "+t_prefix+"updates.dispname "+select+" "
                       "FROM "+t_prefix+"updates, "+t_prefix+"comp_update "
                       "WHERE "+t_prefix+"updates.id="+t_prefix+"comp_update.uid AND "+t_prefix+"comp_update.cid='"+cid+"' AND "+t_prefix+"updates.releasetype='"+urtid+"' ORDER BY "+t_prefix+"updates.name");

    }

    //    qDebug() << this->query().lastQuery();
    this->view->setModel(this);
    this->view->hideColumn(0);
    this->view->resizeColumnsToContents();
}
