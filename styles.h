#ifndef STYLES_H
#define STYLES_H
#include <QFile>
#include <QTextStream>
#include <QSettings>
#include <QComboBox>
#include <QDir>
#define FILESETTINGS "settings.ini"
//#include "main.cpp"


extern QString apppath;
static void setstyle(QString style, QWidget *widget)
{
    QString themefile;
    QSettings settings(FILESETTINGS, QSettings::IniFormat, 0);
    settings.setValue("theme", style);
    themefile=settings.value("theme", "default.css").toString();
    QFile styleSheetFile(apppath+"styles/"+themefile);
    if ( styleSheetFile.open(QIODevice::ReadOnly) ) {
        QTextStream textStream(&styleSheetFile);
        QString style = textStream.readAll();
        widget->setStyleSheet(style);
    }
}

static QString getstyle()
{
    QSettings settings(FILESETTINGS, QSettings::IniFormat, 0);
    return settings.value("theme", "default").toString();
}

static void getstyles(QComboBox *list)
{
    QDir *dir = new QDir(apppath+"styles/");
    QStringList filters;
    filters << "*.css";
    dir->setNameFilters(filters);
    list->addItems(dir->entryList());
}

#endif // STYLES_H
