#ifndef REPORTSTREEWIDGET_H
#define REPORTSTREEWIDGET_H

#include <QTreeWidget>
#include <QDir>
#include <QDebug>
#include <QDate>
#include "../user.h"

class ReportsTreeWidget : public QTreeWidget
{
public:
    ReportsTreeWidget();
    void loadreports();
    void setfilter(QDate *fromdate, QDate *todate);
    void setfilter(QString *compname);
    void resetfilter();

private:
    bool filtered;
//    void set
};

#endif // REPORTSTREEWIDGET_H
