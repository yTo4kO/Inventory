#include <QtGui/QApplication>
#include "dbsdialog.h"
#include <qtranslator.h>
#include <QTextCodec>
#include <QTranslator>
#include "styles.h"

//QString apppath;
extern QApplication a;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QTextCodec::setCodecForCStrings(QTextCodec::codecForLocale());
    QTextCodec::setCodecForTr(QTextCodec::codecForName("UTF-8"));
    /*QTranslator translator(0);
    QTranslator appTranslator;
    appTranslator.load("admin_en", qApp->applicationDirPath());
    a.installTranslator(&appTranslator);
*/
    QTranslator qtTranslator;
    qtTranslator.load("qt_" + QLocale::system().name(), qApp->applicationDirPath());
    a.installTranslator(&qtTranslator);
    apppath=a.applicationDirPath()+"/";
    //setstyle("modern");
    dbsdialog w;
    w.show();
    return a.exec();
}
