#include "dbsettingsini.h"
#define DBFILESETTINGS "dbsettings.ini"
QString apppath;

dbsettingsini::dbsettingsini()
{
    QSettings settings(DBFILESETTINGS, QSettings::IniFormat, 0);
}

int dbsettingsini::setdb(QString *oldname, QString *name, QString *host, QString *db, QString *user, QString *pass, QString *ident,  bool savepass, bool editing)
{
    QSettings settings(apppath+DBFILESETTINGS, QSettings::IniFormat, 0);
    int rescheck, newrescheck;
    rescheck=dbsettingsini::checkname(oldname, host, db, user, pass, ident);
    newrescheck=dbsettingsini::checkname(name, host, db, user, pass, ident);
    if (*oldname==*name)
    {
        newrescheck=-1;
        rescheck=6;
    }
    if (rescheck==6 && newrescheck==-1 && editing==true)
    {
        this->del_db(oldname);
    }
    rescheck=dbsettingsini::checkname(name, host, db, user, pass, ident);
    if ((rescheck>-1 && rescheck<5 && rescheck!=0) || (rescheck==6))
    {
        return rescheck;
    }
    else
    {
        QString identif;
        if (ident->isEmpty())
            identif=QString("%1").arg(rand());
        else
            identif=*ident;
        settings.beginGroup(*name);
        settings.setValue("host", *host);
        settings.setValue("db", *db);
        settings.setValue("user", *user);
        settings.setValue("ident", identif);
        if (savepass==true)
        {
            settings.setValue("pass", *pass);
        }
        settings.setValue("savepass", savepass);
        settings.endGroup();
        return rescheck;
    }
}

bool dbsettingsini::getdb(QString *name, QString *toname, QString *tohost, QString *todb, QString *touser, QString *topass, QString *ident, bool *tosavepass)
{
    QSettings settings(apppath+DBFILESETTINGS, QSettings::IniFormat, 0);
        *toname=*name;
        *tohost=settings.value(*name+"/host", "").toString();
        *todb=settings.value(*name+"/db", "").toString();
        *touser=settings.value(*name+"/user", "").toString();
        *topass=settings.value(*name+"/pass", "").toString();
        *ident=settings.value(*name+"/ident", "").toString();
        *tosavepass=settings.value(*name+"/savepass", "").toBool();
}

void dbsettingsini::del_db(QString *name)
{
    if (name->isNull()==false)
    {
        QSettings settings(apppath+DBFILESETTINGS, QSettings::IniFormat, 0);
        settings.remove(*name);
    }
}

int dbsettingsini::checkname(QString *name, QString *host, QString *db, QString *user, QString *pass, QString *ident)
{
    QSettings settings(apppath+DBFILESETTINGS, QSettings::IniFormat, 0);
    int errorcode;
    errorcode=-1;
    if (*pass=="") { errorcode=5; }
    if (*user=="") { errorcode=4; }
    if (*db=="")   { errorcode=3; }
    if (*host=="") { errorcode=2; }
    if (*name=="") { errorcode=1; }
    if (*ident=="") { errorcode=0; }
    if (errorcode>-1 && errorcode<5)
    {
        return errorcode;
    }
    else
    {
        if (settings.value(*name+"/host", "").toString()!="")
        {
            return 6;
        }
    }
    return errorcode;
}

void dbsettingsini::update_list(QListWidget* list)
{
    QSettings settings(apppath+DBFILESETTINGS, QSettings::IniFormat, 0);
    list->clear();
    list->addItems(settings.childGroups());
}
