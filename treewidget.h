#ifndef TREEWIDGET_H
#define TREEWIDGET_H

#include <QTreeWidget>
#include <QSqlQuery>
#include <QTreeWidgetItem>
#include <QTreeWidget>
#include <QDebug>
#include <QModelIndex>
#include <QAbstractItemView>

#include "connect.h"
class TreeWidget : public QTreeWidget
{
public:
    TreeWidget();
    QModelIndex prev_index;

private:
    QSqlQuery *query;
    int os_row, os_row_parent;
    int progs_row, progs_row_parent;
    int upds_row, upds_row_parent;
    QList<int> ids;

public slots:
    void refresh();
    QStringList getCodeItem(QModelIndex index);
signals:
    void clicked(QModelIndex index);
};

#endif // TREEWIDGET_H
