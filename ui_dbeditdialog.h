/********************************************************************************
** Form generated from reading UI file 'dbeditdialog.ui'
**
** Created: Fri Mar 19 23:54:14 2010
**      by: Qt User Interface Compiler version 4.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DBEDITDIALOG_H
#define UI_DBEDITDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_dbeditdialog
{
public:
    QLineEdit *e_name;
    QLineEdit *e_host;
    QLineEdit *e_db;
    QLineEdit *e_user;
    QLineEdit *e_pass;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QDialogButtonBox *b_okcancel;
    QCheckBox *c_savepass;
    QLabel *label_6;
    QLineEdit *e_ident;

    void setupUi(QDialog *dbeditdialog)
    {
        if (dbeditdialog->objectName().isEmpty())
            dbeditdialog->setObjectName(QString::fromUtf8("dbeditdialog"));
        dbeditdialog->resize(309, 230);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(dbeditdialog->sizePolicy().hasHeightForWidth());
        dbeditdialog->setSizePolicy(sizePolicy);
        dbeditdialog->setMinimumSize(QSize(309, 230));
        dbeditdialog->setMaximumSize(QSize(309, 230));
        e_name = new QLineEdit(dbeditdialog);
        e_name->setObjectName(QString::fromUtf8("e_name"));
        e_name->setGeometry(QRect(114, 9, 190, 22));
        e_host = new QLineEdit(dbeditdialog);
        e_host->setObjectName(QString::fromUtf8("e_host"));
        e_host->setGeometry(QRect(114, 63, 190, 22));
        e_db = new QLineEdit(dbeditdialog);
        e_db->setObjectName(QString::fromUtf8("e_db"));
        e_db->setGeometry(QRect(114, 93, 190, 22));
        e_user = new QLineEdit(dbeditdialog);
        e_user->setObjectName(QString::fromUtf8("e_user"));
        e_user->setGeometry(QRect(114, 123, 190, 22));
        e_pass = new QLineEdit(dbeditdialog);
        e_pass->setObjectName(QString::fromUtf8("e_pass"));
        e_pass->setGeometry(QRect(114, 153, 190, 22));
        e_pass->setEchoMode(QLineEdit::Password);
        label = new QLabel(dbeditdialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 12, 66, 16));
        label_2 = new QLabel(dbeditdialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(9, 66, 58, 16));
        label_3 = new QLabel(dbeditdialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(9, 96, 91, 16));
        label_4 = new QLabel(dbeditdialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(9, 126, 96, 16));
        label_5 = new QLabel(dbeditdialog);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(9, 156, 58, 16));
        b_okcancel = new QDialogButtonBox(dbeditdialog);
        b_okcancel->setObjectName(QString::fromUtf8("b_okcancel"));
        b_okcancel->setGeometry(QRect(132, 204, 171, 23));
        b_okcancel->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        c_savepass = new QCheckBox(dbeditdialog);
        c_savepass->setObjectName(QString::fromUtf8("c_savepass"));
        c_savepass->setGeometry(QRect(6, 177, 146, 22));
        c_savepass->setChecked(true);
        label_6 = new QLabel(dbeditdialog);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(9, 39, 103, 16));
        e_ident = new QLineEdit(dbeditdialog);
        e_ident->setObjectName(QString::fromUtf8("e_ident"));
        e_ident->setGeometry(QRect(114, 36, 190, 22));
        QWidget::setTabOrder(e_name, e_ident);
        QWidget::setTabOrder(e_ident, e_host);
        QWidget::setTabOrder(e_host, e_db);
        QWidget::setTabOrder(e_db, e_user);
        QWidget::setTabOrder(e_user, e_pass);
        QWidget::setTabOrder(e_pass, c_savepass);
        QWidget::setTabOrder(c_savepass, b_okcancel);

        retranslateUi(dbeditdialog);

        QMetaObject::connectSlotsByName(dbeditdialog);
    } // setupUi

    void retranslateUi(QDialog *dbeditdialog)
    {
        dbeditdialog->setWindowTitle(QString());
        label->setText(QApplication::translate("dbeditdialog", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265:", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("dbeditdialog", "\320\220\320\264\321\200\320\265\321\201:", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("dbeditdialog", "\320\221\320\260\320\267\320\260 \320\264\320\260\320\275\320\275\321\213\321\205:", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("dbeditdialog", "\320\237\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\321\214:", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("dbeditdialog", "\320\237\320\260\321\200\320\276\320\273\321\214:", 0, QApplication::UnicodeUTF8));
        c_savepass->setText(QApplication::translate("dbeditdialog", "\320\241\320\276\321\205\321\200\320\260\320\275\321\217\321\202\321\214 \320\277\320\260\321\200\320\276\320\273\321\214", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("dbeditdialog", "\320\230\320\264\320\265\320\275\321\202\320\270\321\204\320\270\320\272\320\260\321\202\320\276\321\200:", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class dbeditdialog: public Ui_dbeditdialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DBEDITDIALOG_H
