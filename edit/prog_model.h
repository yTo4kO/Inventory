#ifndef PROG_MODEL_H
#define PROG_MODEL_H

#include <QSqlQueryModel>
#include <QSqlQuery>
#include <QTableView>
#include <QDebug>
#include <QModelIndex>

class prog_model : public QSqlQueryModel
{
public:
    prog_model();
    void init(QString *prefix, QTableView *view);
    bool pub;
    bool vers;

public slots:
    void select(QString cid, QString pgid);
    void selectmw(QString cid, QString pgid, bool showhidden, QString cgid);
    void selectmwcount(QString cid, QString cgid, QString *al_count, QString *bl_count, QString *wl_count);
    void select(QString pgid);
    void select(QString cgid, int list);
    void selectfreeprogs(QString cgid);
    void selecthidelist(int list);

private:
    QString t_prefix;
    QTableView *view;
    int sec;
};

#endif // PROG_MODEL_H
