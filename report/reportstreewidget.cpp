#include "reportstreewidget.h"

#define REPORTDIR "./Reports/"+identificator+"/"

ReportsTreeWidget::ReportsTreeWidget()
{
    filtered=true;
}

void ReportsTreeWidget::loadreports()
{
    if (filtered)
    {
        this->clear();
        QDir reportdir(REPORTDIR);
        QDir reportfiles;
        QString reportfile;
        reportfiles.setFilter(QDir::Files | QDir::NoDotAndDotDot);
        reportfiles.setSorting(QDir::Time | QDir::Reversed);
        reportdir.setFilter(QDir::Dirs | QDir::NoDotAndDotDot);

        QList<QTreeWidgetItem *> comps_list;
        for (int i = 0; i < reportdir.count(); i++)
        {
            comps_list.append(new QTreeWidgetItem((QTreeWidget*)0, QStringList(QString(reportdir[i]))));
            reportfiles.setPath(REPORTDIR+reportdir[i]+"/");
            for (int n = 0; n < reportfiles.count(); n++)
            {
                reportfile=reportfiles[n].replace(".html", "").replace("-", ":");
                comps_list[i]->addChild(new QTreeWidgetItem((QTreeWidget*)0, QStringList(reportfile)));
            }
        }
        this->insertTopLevelItems(0, comps_list);
        filtered=false;
    }
    else
    {
    }
}

void ReportsTreeWidget::setfilter(QDate *fromdate, QDate *todate)
{
    if (filtered)
        this->loadreports();

    for (int i = 0; i < this->topLevelItemCount(); i++)
    {
        for (int n = 0; n < this->topLevelItem(i)->childCount(); n++)
        {
            if ( QDate::fromString(this->topLevelItem(i)->child(n)->text(0).left(10).replace(".", ""), "ddMMyyyy") <= *fromdate
                 || QDate::fromString(this->topLevelItem(i)->child(n)->text(0).left(10).replace(".", ""), "ddMMyyyy") >= *todate)
            {
                this->topLevelItem(i)->removeChild(this->topLevelItem(i)->child(n));
                n--;
            }
        }
    }
    filtered=true;
}

void ReportsTreeWidget::setfilter(QString *compname)
{
    if (filtered)
        this->loadreports();
    for (int i = 0; i < this->topLevelItemCount(); i++)
    {
        if (!this->topLevelItem(i)->text(0).contains(*compname, Qt::CaseInsensitive))
        {
            this->takeTopLevelItem(i);
            i--;
        }
    }
    filtered=true;
}

void ReportsTreeWidget::resetfilter()
{
    if (filtered)
        this->loadreports();
}
