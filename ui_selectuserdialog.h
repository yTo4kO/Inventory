/********************************************************************************
** Form generated from reading UI file 'selectuserdialog.ui'
**
** Created: Fri Mar 19 23:54:14 2010
**      by: Qt User Interface Compiler version 4.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELECTUSERDIALOG_H
#define UI_SELECTUSERDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_selectuserdialog
{
public:
    QComboBox *cb_user;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *e_pass;
    QDialogButtonBox *buttonBox;
    QLabel *label_3;

    void setupUi(QDialog *selectuserdialog)
    {
        if (selectuserdialog->objectName().isEmpty())
            selectuserdialog->setObjectName(QString::fromUtf8("selectuserdialog"));
        selectuserdialog->resize(334, 110);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(selectuserdialog->sizePolicy().hasHeightForWidth());
        selectuserdialog->setSizePolicy(sizePolicy);
        selectuserdialog->setMinimumSize(QSize(334, 110));
        selectuserdialog->setMaximumSize(QSize(334, 110));
        cb_user = new QComboBox(selectuserdialog);
        cb_user->setObjectName(QString::fromUtf8("cb_user"));
        cb_user->setGeometry(QRect(165, 10, 162, 23));
        label = new QLabel(selectuserdialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(68, 15, 96, 16));
        label_2 = new QLabel(selectuserdialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(68, 45, 58, 16));
        e_pass = new QLineEdit(selectuserdialog);
        e_pass->setObjectName(QString::fromUtf8("e_pass"));
        e_pass->setGeometry(QRect(165, 40, 162, 23));
        e_pass->setEchoMode(QLineEdit::Password);
        buttonBox = new QDialogButtonBox(selectuserdialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(155, 75, 171, 25));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label_3 = new QLabel(selectuserdialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(8, 10, 51, 55));

        retranslateUi(selectuserdialog);

        QMetaObject::connectSlotsByName(selectuserdialog);
    } // setupUi

    void retranslateUi(QDialog *selectuserdialog)
    {
        selectuserdialog->setWindowTitle(QApplication::translate("selectuserdialog", "\320\222\321\213\320\261\320\276\321\200 \320\277\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\321\217", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("selectuserdialog", "\320\237\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\321\214:", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("selectuserdialog", "\320\237\320\260\321\200\320\276\320\273\321\214:", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("selectuserdialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Bitstream Vera Sans'; font-size:8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><img src=\":/images/buttons/user-pass.png\" /></p></body></html>", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class selectuserdialog: public Ui_selectuserdialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELECTUSERDIALOG_H
