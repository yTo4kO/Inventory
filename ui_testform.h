/********************************************************************************
** Form generated from reading ui file 'testform.ui'
**
** Created: Thu 14. May 01:01:33 2009
**      by: Qt User Interface Compiler version 4.5.0
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_TESTFORM_H
#define UI_TESTFORM_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_testform
{
public:

    void setupUi(QWidget *testform)
    {
        if (testform->objectName().isEmpty())
            testform->setObjectName(QString::fromUtf8("testform"));
        testform->setObjectName(QString::fromUtf8("Form"));
        testform->resize(400, 300);

        retranslateUi(testform);

        QMetaObject::connectSlotsByName(testform);
    } // setupUi

    void retranslateUi(QWidget *testform)
    {
        testform->setWindowTitle(QApplication::translate("testform", "Form", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(testform);
    } // retranslateUi

};

namespace Ui {
    class testform: public Ui_testform {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTFORM_H
