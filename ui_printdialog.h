/********************************************************************************
** Form generated from reading UI file 'printdialog.ui'
**
** Created: Fri Mar 19 22:57:02 2010
**      by: Qt User Interface Compiler version 4.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRINTDIALOG_H
#define UI_PRINTDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtWebKit/QWebView>

QT_BEGIN_NAMESPACE

class Ui_PrintDialog
{
public:
    QVBoxLayout *verticalLayout;
    QToolButton *tb_print;
    QWebView *webView;

    void setupUi(QDialog *PrintDialog)
    {
        if (PrintDialog->objectName().isEmpty())
            PrintDialog->setObjectName(QString::fromUtf8("PrintDialog"));
        PrintDialog->resize(640, 480);
        verticalLayout = new QVBoxLayout(PrintDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(2, 0, 2, 0);
        tb_print = new QToolButton(PrintDialog);
        tb_print->setObjectName(QString::fromUtf8("tb_print"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/buttons/printer.png"), QSize(), QIcon::Normal, QIcon::Off);
        tb_print->setIcon(icon);
        tb_print->setIconSize(QSize(18, 18));

        verticalLayout->addWidget(tb_print);

        webView = new QWebView(PrintDialog);
        webView->setObjectName(QString::fromUtf8("webView"));
        webView->setUrl(QUrl("about:blank"));

        verticalLayout->addWidget(webView);


        retranslateUi(PrintDialog);

        QMetaObject::connectSlotsByName(PrintDialog);
    } // setupUi

    void retranslateUi(QDialog *PrintDialog)
    {
        PrintDialog->setWindowTitle(QApplication::translate("PrintDialog", "Dialog", 0, QApplication::UnicodeUTF8));
        tb_print->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class PrintDialog: public Ui_PrintDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRINTDIALOG_H
