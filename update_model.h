#ifndef UPDATE_MODEL_H
#define UPDATE_MODEL_H

#include <QSqlQueryModel>
#include <QSqlQuery>
#include <QTableView>
#include <QDebug>
#include <QModelIndex>

class update_model : public QSqlQueryModel
{
public:
    update_model();
    void init(QString *prefix, QTableView *view);
    bool pub;
//    bool vers;

public slots:
    void select(QString cid, QString urtid);

private:
    QString t_prefix;
    QTableView *view;
    int sec;
};

#endif // UPDATE_MODEL_H
