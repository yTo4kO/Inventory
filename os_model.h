#ifndef OS_MODEL_H
#define OS_MODEL_H

#include <QSqlQueryModel>
#include <QSqlQuery>
#include <QTableWidget>
#include <QDebug>
#include <QModelIndex>
#include <QHeaderView>
#include <QList>
#include <QDateTime>

class os_model : public QSqlQueryModel
{
public:
    os_model();
    void init(QString *prefix, QTableWidget *twidget);
    bool pub;

public slots:
    void showinfo(QString cid);

private:
    QString t_prefix;
    QTableWidget *view;
    int sec;
    QTableWidgetItem name_item, os_item, sp_item, version_item, user_item, organization_item, path_item, lastupd_item;
    QTableWidgetItem name_item_val, os_item_val, sp_item_val, version_item_val, user_item_val, organization_item_val, path_item_val, lastupd_item_val;
};

#endif // OS_MODEL_H
