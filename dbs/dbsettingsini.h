#ifndef DBSETTINGSINI_H
#define DBSETTINGSINI_H


#include <QObject>
#include <QSettings>
#include <QListWidget>
#include <QDebug>

class dbsettingsini : public QObject
{
public:
    dbsettingsini();
    int setdb(QString *oldname, QString *name, QString *host, QString *db, QString *user, QString *pass, QString *ident, bool savepass, bool editing);
    bool getdb(QString *name, QString *toname, QString *tohost, QString *todb, QString *touser, QString *topass, QString *ident, bool *tosavepass);
    void del_db(QString *name);

    void update_list(QListWidget* list);

private:
    QSettings settings();
    int checkname(QString *name, QString *host, QString *db, QString *user, QString *pass, QString *ident);
    int checkparams(QString *name, QString *host, QString *db, QString *user, QString *pass);
};

#endif // DBSETTINGSINI_H
