#ifndef CONNECT_H
#define CONNECT_H
#include <QSqlDatabase>
#include <QSqlError>
#include <QString>
#include <QDebug>
#include "user.h"

//QString t_prefix;
extern QString t_prefix;
extern QString tables;
extern QSqlDatabase connect;
//extern QString identif;
static bool conencttodb(QString *host, QString *db, QString *user, QString *pass, QString *ident)
{
    tables="10";
    QSqlDatabase connect=QSqlDatabase::addDatabase("QMYSQL");
    connect.setHostName(*host);
    connect.setDatabaseName(*db);
    connect.setUserName(*user);
    connect.setPassword(*pass);
    t_prefix="def_";
//    identif=*ident;
    if (connect.open())
    {
        return true;
    }
    else
    {
        return false;
    }
}
#endif // CONNECT_H
