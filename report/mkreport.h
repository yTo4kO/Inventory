#ifndef MKREPORT_H
#define MKREPORT_H

#include <QString>
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <QDateTime>
#include <QDir>
#include <QObject>
#include <QTextDocument>
#include <QPainter>
#include "../edit/prog_model.h"
#include "../user.h"

static QString mkhtmlreport(QString *compname, QString *groupname, QString updatetime, prog_model *progmodel)
{
    QString html;
    html="";
    QString charset;
#if defined(Q_OS_LINUX)
{
        charset="UTF-8";
}
#endif
#if defined(Q_OS_WIN32)
{
        charset="windows-1251";
}
#endif

    html+="<META HTTP-EQUIV='Content-Type' CONTENT='text/html; charset="+charset+"'> "
    "<html>"
    "<head>"
    "<title>"+QObject::tr("Отчёт по компьютеру")+" '"+*compname+"'</title>"
    "</head>"
    "<body>"
        "<center><h2>"+QObject::tr("ОТЧЁТ")+"</h2></center>"
        "<table>"
            "<tr><td>"+QObject::tr("Имя компьютера:")+"</td><td> '"+*compname+"'</td></tr>"
            "<tr><td>"+QObject::tr("Группа компьютера:")+"</td><td> '"+*groupname+"'</td></tr>"
            "<tr><td>"+QObject::tr("Последнее обновление:")+"</td><td> "+updatetime+"</td></tr>"
        "</table>"
        "<br>"
        "<table align='center' cellpadding='0' cellspacing='0' border='0'  style='border:1px solid black'>"
    "<tr>"
        "<td align='center'>"+QObject::tr("Название")+"</td>"
        "<td align='center' style='border-left:black solid 1px'>"+QObject::tr("Версия")+"</td>"
        "<td align='center' style='border-left:black solid 1px'>"+QObject::tr("Разработчик")+"</td>"
    "</tr>"
        ;
    QString trcolor;
    for (int i=0; i<progmodel->rowCount(); i++)
    {
        if (progmodel->record(i).value(3).toString()!="")
        {
        trcolor="#c8e2f1";
        if (i % 2 == 1) trcolor="#98cdeb";
        html+="<tr bgcolor='"+trcolor+"'>"
        "<td>&#160;"+progmodel->record(i).value(3).toString()+"</td>"
        "<td align='center' style='border-left:black solid 1px'>"
        "&#160;"+progmodel->record(i).value(4).toString()+""
                "</td>"
        "<td style='border-left:black solid 1px' align='center'>"
        "&#160;"+progmodel->record(i).value(5).toString()+""
                "</td>"
        "</tr>";
        }
    }
        html+="</table>"
        "<hr>"
        "<div align='right' style=\"color:'9f9f9f'\">"+QObject::tr("Отчёт сгенерирован:")+" "+QDateTime::currentDateTime().toString("hh:mm:ss dd.MM.yyyy")+"</div>"
    "</body>"
    "</html>";

    QString filename=QDateTime::currentDateTime().toString("dd.MM.yyyy hh-mm-ss");
    QDir dir;
    if (!dir.exists("Reports/"+identificator+"/"+*compname+"/"))
    {
        dir.mkpath("Reports/"+identificator+"/"+*compname+"/");
    }
    QFile file("Reports/"+identificator+"/"+*compname+"/"+filename+".html");
//    QFile file("Reports/"+*compname+"/"+filename+".html");
    if (!file.exists() && file.open( QIODevice::ReadWrite ) )
    {
        QTextStream TextStream(&file);
        TextStream << html;
        file.close();
        return file.fileName();
    }
    else
    {
        return "-1";
    }
}

#endif // MKREPORT_H
