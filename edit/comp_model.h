#ifndef COMP_MODEL_H
#define COMP_MODEL_H

#include <QSqlQueryModel>
#include <QSqlQuery>
#include <QTableView>

class comp_model : public QSqlQueryModel
{
public:
    comp_model();
    void init(QString *prefix, QTableView *view);
    bool os;
    bool sp;
    bool vers;
    bool user;
    bool org;
    bool path;
    bool upd;
public slots:
//    void select(QString gid, bool os, bool sp, bool vers, bool user, bool org, bool path, bool upd);
    void select(QString gid);
private:
    QString t_prefix;
    QTableView *view;
    int sec;
};

#endif // COMP_MODEL_H
