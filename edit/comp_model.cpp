#include "comp_model.h"

comp_model::comp_model()
{
    os=false;
    sp=false;
    vers=false;
    user=false;
    org=false;
    path=false;
    upd=false;
}

void comp_model::init(QString *prefix, QTableView *tview)
{
    this->t_prefix=*prefix;
    this->view=tview;
}
//void comp_model::select(QString gid, bool os=0, bool sp=0, bool vers=0, bool user=0, bool org=0, bool path=0, bool upd=0)
void comp_model::select(QString gid)
{
    QString select;
    this->setHeaderData(0, Qt::Horizontal, tr("#"));
    this->setHeaderData(1, Qt::Horizontal, tr("Имя"));
    sec=2;
    if (os) { select=", os"; this->setHeaderData(sec, Qt::Horizontal, tr("ОС")); sec++; }
    if (sp) { select=select+", sp"; this->setHeaderData(sec, Qt::Horizontal, tr("SP")); sec++; }
    if (vers) { select=select+", version"; this->setHeaderData(sec, Qt::Horizontal, tr("Версия")); sec++; }
    if (user) { select=select+", user"; this->setHeaderData(sec, Qt::Horizontal, tr("Пользователь")); sec++; }
    if (org) { select=select+", organization"; this->setHeaderData(sec, Qt::Horizontal, tr("Организация")); sec++; }
    if (path) { select=select+", path"; this->setHeaderData(sec, Qt::Horizontal, tr("Путь")); sec++; }
    if (upd) { select=select+", lastupdate"; this->setHeaderData(sec, Qt::Horizontal, tr("Обновление")); sec++; }
    this->setQuery("SELECT id, name"+select+" FROM "+this->t_prefix+"comps WHERE gid='"+gid+"'");
    this->view->setModel(this);
    this->view->hideColumn(0);
    this->view->resizeRowsToContents();
}
