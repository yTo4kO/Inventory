#include "prog_model.h"

prog_model::prog_model()
{
}

void prog_model::init(QString *prefix, QTableView *tview)
{
    this->t_prefix=*prefix;
    this->view=tview;
}

void prog_model::select(QString cid, QString pgid)
{
    QString select;
    this->setHeaderData(0, Qt::Horizontal, tr("#"));
    this->setHeaderData(1, Qt::Horizontal, tr("Название"));
    sec=2;
    if (pub) { select=", "+t_prefix+"progs.publisher"; this->setHeaderData(sec, Qt::Horizontal, tr("Издатель")); sec++; }
    if (vers) { select=select+", "+t_prefix+"progs.version"; this->setHeaderData(sec, Qt::Horizontal, tr("Версия")); sec++; }
//    SELECT def_progs.name, def_progs.publisher, def_progs.version FROM def_comp_prog, def_progs WHERE def_progs.id=def_comp_prog.id AND def_comp_prog.cid=7
    this->setQuery("SELECT "+t_prefix+"progs.id, "+t_prefix+"progs.name"+select+" "
                   "FROM "+t_prefix+"progs, "+t_prefix+"comp_prog "
                   "WHERE "+t_prefix+"progs.id="+t_prefix+"comp_prog.pid AND "+t_prefix+"comp_prog.cid='"+cid+"' AND "+t_prefix+"progs.gid='"+pgid+"' ORDER BY "+t_prefix+"progs.name");
//    qDebug() << this->query().lastQuery();
    this->view->setModel(this);
    this->view->hideColumn(0);
    this->view->resizeColumnsToContents();
}

void prog_model::selectmw(QString cid, QString pgid, bool showhidden, QString cgid)
{
    QString select, q_showhidden;
    this->setHeaderData(0, Qt::Horizontal, tr("#"));
    this->setHeaderData(3, Qt::Horizontal, tr("Название"));
    sec=4;
    if (pub) { select=", "+t_prefix+"progs.publisher"; this->setHeaderData(sec, Qt::Horizontal, tr("Издатель")); sec++; }
    if (vers) { select=select+", "+t_prefix+"progs.version"; this->setHeaderData(sec, Qt::Horizontal, tr("Версия")); sec++; }
    if (!showhidden)
        q_showhidden="AND "+t_prefix+"progs.hide='0'";
    else
        q_showhidden="";
    if (pgid=="apr")
    {
        this->setQuery("SELECT "+t_prefix+"progs.id, "+t_prefix+"blist.cgid, "+t_prefix+"wlist.cgid, "+t_prefix+"progs.name"+select+" "
                       "FROM "+t_prefix+"progs "
                       "LEFT JOIN "+t_prefix+"blist ON "+t_prefix+"progs.id="+t_prefix+"blist.pid "
                       "LEFT JOIN "+t_prefix+"wlist ON "+t_prefix+"progs.id="+t_prefix+"wlist.pid "
                       "LEFT JOIN "+t_prefix+"comp_prog ON "+t_prefix+"progs.id="+t_prefix+"comp_prog.pid "
                       "WHERE "+t_prefix+"comp_prog.cid='"+cid+"' "+q_showhidden+" GROUP BY "+t_prefix+"progs.id ORDER BY "+t_prefix+"progs.name");
    }
    else
    {
        this->setQuery("SELECT "+t_prefix+"progs.id, "+t_prefix+"blist.cgid, "+t_prefix+"wlist.cgid, "+t_prefix+"progs.name"+select+" "
                       "FROM "+t_prefix+"progs "
                       "LEFT JOIN "+t_prefix+"blist ON "+t_prefix+"progs.id="+t_prefix+"blist.pid "
                       "LEFT JOIN "+t_prefix+"wlist ON "+t_prefix+"progs.id="+t_prefix+"wlist.pid "
                       "LEFT JOIN "+t_prefix+"comp_prog ON "+t_prefix+"progs.id="+t_prefix+"comp_prog.pid "
                       "WHERE "+t_prefix+"comp_prog.cid='"+cid+"' AND "+t_prefix+"progs.gid='"+pgid+"' "+q_showhidden+" GROUP BY "+t_prefix+"progs.id ORDER BY "+t_prefix+"progs.name");
    }
//     qDebug() << this->query().lastQuery();
    this->view->setModel(this);
    this->view->hideColumn(0);
    this->view->hideColumn(1);
    this->view->hideColumn(2);
    this->view->resizeColumnsToContents();
}

void prog_model::selectmwcount(QString cid, QString cgid, QString *al_count, QString *bl_count, QString *wl_count)
{
        this->setQuery("SELECT "+t_prefix+"progs.id, "+t_prefix+"blist.cgid, "+t_prefix+"wlist.cgid, "+t_prefix+"progs.name "
                       "FROM "+t_prefix+"progs "
                       "LEFT JOIN "+t_prefix+"blist ON "+t_prefix+"progs.id="+t_prefix+"blist.pid "
                       "LEFT JOIN "+t_prefix+"wlist ON "+t_prefix+"progs.id="+t_prefix+"wlist.pid "
                       "LEFT JOIN "+t_prefix+"comp_prog ON "+t_prefix+"progs.id="+t_prefix+"comp_prog.pid "
                       "WHERE "+t_prefix+"comp_prog.cid='"+cid+"' GROUP BY "+t_prefix+"progs.id");
    *al_count=QString("%1").arg(this->rowCount());
        this->setQuery("SELECT "+t_prefix+"progs.id, "+t_prefix+"blist.cgid, "+t_prefix+"wlist.cgid, "+t_prefix+"progs.name "
                       "FROM "+t_prefix+"progs "
                       "LEFT JOIN "+t_prefix+"blist ON "+t_prefix+"progs.id="+t_prefix+"blist.pid "
                       "LEFT JOIN "+t_prefix+"wlist ON "+t_prefix+"progs.id="+t_prefix+"wlist.pid "
                       "LEFT JOIN "+t_prefix+"comp_prog ON "+t_prefix+"progs.id="+t_prefix+"comp_prog.pid "
                       "WHERE "+t_prefix+"comp_prog.cid='"+cid+"' AND "+t_prefix+"blist.cgid='"+cgid+"' GROUP BY "+t_prefix+"progs.id");
//        qDebug() << this->query().lastQuery();

        *bl_count=QString("%1").arg(this->rowCount());

        this->setQuery("SELECT "+t_prefix+"progs.id, "+t_prefix+"blist.cgid, "+t_prefix+"wlist.cgid, "+t_prefix+"progs.name "
                       "FROM "+t_prefix+"progs "
                       "LEFT JOIN "+t_prefix+"blist ON "+t_prefix+"progs.id="+t_prefix+"blist.pid "
                       "LEFT JOIN "+t_prefix+"wlist ON "+t_prefix+"progs.id="+t_prefix+"wlist.pid "
                       "LEFT JOIN "+t_prefix+"comp_prog ON "+t_prefix+"progs.id="+t_prefix+"comp_prog.pid "
                       "WHERE "+t_prefix+"comp_prog.cid='"+cid+"' AND "+t_prefix+"wlist.cgid='"+cgid+"' GROUP BY "+t_prefix+"progs.id");
//        qDebug() << this->query().lastQuery();

        *wl_count=QString("%1").arg(this->rowCount());
//                    this->setQuery("SELECT "+t_prefix+"progs.id, "+t_prefix+"blist.cgid, "+t_prefix+"wlist.cgid, "+t_prefix+"progs.name "
//    return QString("%1").arg(this->rowCount());
}

void prog_model::select(QString pgid)
{
    QString select;
    this->setHeaderData(0, Qt::Horizontal, tr("#"));
    this->setHeaderData(1, Qt::Horizontal, tr("Название"));
    select=t_prefix+"progs.id,"+t_prefix+"progs.name";
    sec=2;
    if (pub) { select+=", "+t_prefix+"progs.publisher"; this->setHeaderData(sec, Qt::Horizontal, tr("Издатель")); sec++; }
    if (vers) { select+=", "+t_prefix+"progs.version"; this->setHeaderData(sec, Qt::Horizontal, tr("Версия")); sec++; }
    this->setQuery("SELECT "+select+" FROM "+t_prefix+"progs WHERE gid='"+pgid+"' ORDER BY name");
//    qDebug() << this->query().lastQuery();
    this->view->setModel(this);
    this->view->hideColumn(0);
//    this->view->resize(
//    this->view->resizeColumnsToContents();
//    this->view->resizeColumnToContents(1);
}

void prog_model::select(QString cgid, int list)
{
    QString select;
    this->setHeaderData(0, Qt::Horizontal, tr("#"));
    this->setHeaderData(1, Qt::Horizontal, tr("Название"));
    select=t_prefix+"progs.id,"+t_prefix+"progs.name";
    sec=2;
    if (pub) { select+=", "+t_prefix+"progs.publisher"; this->setHeaderData(sec, Qt::Horizontal, tr("Издатель")); sec++; }
    if (vers) { select+=", "+t_prefix+"progs.version"; this->setHeaderData(sec, Qt::Horizontal, tr("Версия")); sec++; }
    if (list==1)
    {
        this->setQuery("SELECT "+select+" FROM "+t_prefix+"wlist, "+t_prefix+"progs, "+t_prefix+"gcomps "
                       "WHERE "+t_prefix+"gcomps.id="+t_prefix+"wlist.cgid AND "+t_prefix+"progs.id = "+t_prefix+"wlist.pid AND def_wlist.cgid='"+cgid+"' ORDER BY "+t_prefix+"progs.name");
    }
    if (list==2)
    {
        this->setQuery("SELECT "+select+" FROM "+t_prefix+"blist, "+t_prefix+"progs, "+t_prefix+"gcomps "
                       "WHERE "+t_prefix+"gcomps.id="+t_prefix+"blist.cgid AND "+t_prefix+"progs.id = "+t_prefix+"blist.pid AND def_blist.cgid='"+cgid+"' ORDER BY "+t_prefix+"progs.name");
    }
//    qDebug() << this->query().lastQuery();
    this->view->setModel(this);
    this->view->hideColumn(0);
    this->view->resizeColumnsToContents();
}

void prog_model::selectfreeprogs(QString cgid)
{
    QString select;
    this->setHeaderData(0, Qt::Horizontal, tr("#"));
    this->setHeaderData(1, Qt::Horizontal, tr("Название"));
    select=t_prefix+"progs.id,"+t_prefix+"progs.name";
    sec=2;
    if (pub) { select+=", "+t_prefix+"progs.publisher"; this->setHeaderData(sec, Qt::Horizontal, tr("Издатель")); sec++; }
    if (vers) { select+=", "+t_prefix+"progs.version"; this->setHeaderData(sec, Qt::Horizontal, tr("Версия")); sec++; }
//    this->setQuery("SELECT "+select+" FROM "+t_prefix+"blist, "+t_prefix+"progs, "+t_prefix+"gcomps "
//                       "WHERE "+t_prefix+"gcomps.id="+t_prefix+"blist.cgid AND "+t_prefix+"progs.id = "+t_prefix+"blist.pid AND def_blist.cgid='"+cgid+"'");
    this->setQuery("SELECT "+select+" FROM "+t_prefix+"progs "
                   "LEFT JOIN "+t_prefix+"wlist ON "+t_prefix+"progs.id="+t_prefix+"wlist.pid "
                   "LEFT JOIN "+t_prefix+"blist ON "+t_prefix+"progs.id="+t_prefix+"blist.pid "
//                   "WHERE "+t_prefix+"wlist.pid IS NULL AND "+t_prefix+"blist.pid IS NULL ORDER BY "+t_prefix+"progs.name"
                   "WHERE ("+t_prefix+"wlist.pid IS NULL OR "+t_prefix+"wlist.cgid<>'"+cgid+"') AND ("+t_prefix+"blist.pid IS NULL OR "+t_prefix+"blist.cgid<>'"+cgid+"') ORDER BY "+t_prefix+"progs.name");
//    qDebug() << this->query().lastQuery();
    this->view->setModel(this);
    this->view->hideColumn(0);
    this->view->resizeColumnsToContents();
}

void prog_model::selecthidelist(int list)
{
    QString select;
    this->setHeaderData(0, Qt::Horizontal, tr("#"));
    this->setHeaderData(1, Qt::Horizontal, tr("Название"));
    select=t_prefix+"progs.id,"+t_prefix+"progs.name";
    sec=2;
    if (pub) { select+=", "+t_prefix+"progs.publisher"; this->setHeaderData(sec, Qt::Horizontal, tr("Издатель")); sec++; }
    if (vers) { select+=", "+t_prefix+"progs.version"; this->setHeaderData(sec, Qt::Horizontal, tr("Версия")); sec++; }
    this->setQuery("SELECT "+select+" FROM "+t_prefix+"progs WHERE hide='"+QString("%1").arg(list)+"' ORDER BY name");
    this->view->setModel(this);
    this->view->hideColumn(0);
    this->view->resizeColumnsToContents();
}
