#ifndef PRINTTABLEVIEW_H
#define PRINTTABLEVIEW_H

#include <QTableView>
#include <QPrinter>
#include <QAbstractItemView>
#include <QPainter>

class PrintTableView : public QTableView
{
public:
    PrintTableView();
    void printTable(QPainter* painter, QTableView *view);
    QStyleOptionViewItem viewOptions() const;
};

#endif // PRINTTABLEVIEW_H
