/********************************************************************************
** Form generated from reading ui file 'test.ui'
**
** Created: Sun May 17 01:18:06 2009
**      by: Qt User Interface Compiler version 4.5.1
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_TEST_H
#define UI_TEST_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>
#include <QtWebKit/QWebView>

QT_BEGIN_NAMESPACE

class Ui_test
{
public:
    QHBoxLayout *horizontalLayout;
    QWebView *webView;
    QGroupBox *groupBox;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *test)
    {
        if (test->objectName().isEmpty())
            test->setObjectName(QString::fromUtf8("test"));
        test->resize(439, 300);
        horizontalLayout = new QHBoxLayout(test);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        webView = new QWebView(test);
        webView->setObjectName(QString::fromUtf8("webView"));
        webView->setUrl(QUrl("about:blank"));

        horizontalLayout->addWidget(webView);

        groupBox = new QGroupBox(test);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(5, 25, 61, 24));
        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(5, 50, 61, 24));

        horizontalLayout->addWidget(groupBox);


        retranslateUi(test);

        QMetaObject::connectSlotsByName(test);
    } // setupUi

    void retranslateUi(QWidget *test)
    {
        test->setWindowTitle(QApplication::translate("test", "Form", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("test", "GroupBox", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QString());
        pushButton_2->setText(QString());
        Q_UNUSED(test);
    } // retranslateUi

};

namespace Ui {
    class test: public Ui_test {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEST_H
