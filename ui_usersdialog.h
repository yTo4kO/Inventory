/********************************************************************************
** Form generated from reading UI file 'usersdialog.ui'
**
** Created: Fri Mar 19 23:54:14 2010
**      by: Qt User Interface Compiler version 4.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERSDIALOG_H
#define UI_USERSDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_UsersDialog
{
public:
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QLabel *l_seluser;
    QComboBox *cb_users;
    QHBoxLayout *horizontalLayout_2;
    QLabel *l_oldpass;
    QLineEdit *e_oldpass;
    QHBoxLayout *horizontalLayout_3;
    QLabel *l_newpass;
    QLineEdit *e_newpass;
    QHBoxLayout *horizontalLayout_4;
    QLabel *l_rnewpass;
    QLineEdit *e_rnewpass;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer;
    QPushButton *b_apply;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *b_quit;

    void setupUi(QDialog *UsersDialog)
    {
        if (UsersDialog->objectName().isEmpty())
            UsersDialog->setObjectName(QString::fromUtf8("UsersDialog"));
        UsersDialog->resize(350, 180);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(UsersDialog->sizePolicy().hasHeightForWidth());
        UsersDialog->setSizePolicy(sizePolicy);
        UsersDialog->setMinimumSize(QSize(350, 150));
        UsersDialog->setMaximumSize(QSize(400, 180));
        verticalLayout = new QVBoxLayout(UsersDialog);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 6, 0, 0);
        verticalSpacer_2 = new QSpacerItem(16, 2, QSizePolicy::Minimum, QSizePolicy::Maximum);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        l_seluser = new QLabel(UsersDialog);
        l_seluser->setObjectName(QString::fromUtf8("l_seluser"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(l_seluser->sizePolicy().hasHeightForWidth());
        l_seluser->setSizePolicy(sizePolicy1);
        l_seluser->setMinimumSize(QSize(160, 0));
        l_seluser->setMaximumSize(QSize(160, 16777215));

        horizontalLayout->addWidget(l_seluser);

        cb_users = new QComboBox(UsersDialog);
        cb_users->setObjectName(QString::fromUtf8("cb_users"));

        horizontalLayout->addWidget(cb_users);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        l_oldpass = new QLabel(UsersDialog);
        l_oldpass->setObjectName(QString::fromUtf8("l_oldpass"));
        sizePolicy1.setHeightForWidth(l_oldpass->sizePolicy().hasHeightForWidth());
        l_oldpass->setSizePolicy(sizePolicy1);
        l_oldpass->setMinimumSize(QSize(160, 0));
        l_oldpass->setMaximumSize(QSize(160, 16777215));

        horizontalLayout_2->addWidget(l_oldpass);

        e_oldpass = new QLineEdit(UsersDialog);
        e_oldpass->setObjectName(QString::fromUtf8("e_oldpass"));
        e_oldpass->setEchoMode(QLineEdit::Password);

        horizontalLayout_2->addWidget(e_oldpass);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        l_newpass = new QLabel(UsersDialog);
        l_newpass->setObjectName(QString::fromUtf8("l_newpass"));
        sizePolicy1.setHeightForWidth(l_newpass->sizePolicy().hasHeightForWidth());
        l_newpass->setSizePolicy(sizePolicy1);
        l_newpass->setMinimumSize(QSize(160, 0));
        l_newpass->setMaximumSize(QSize(160, 16777215));

        horizontalLayout_3->addWidget(l_newpass);

        e_newpass = new QLineEdit(UsersDialog);
        e_newpass->setObjectName(QString::fromUtf8("e_newpass"));
        e_newpass->setEchoMode(QLineEdit::Password);

        horizontalLayout_3->addWidget(e_newpass);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
#ifndef Q_OS_MAC
        horizontalLayout_4->setSpacing(-1);
#endif
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        l_rnewpass = new QLabel(UsersDialog);
        l_rnewpass->setObjectName(QString::fromUtf8("l_rnewpass"));
        sizePolicy1.setHeightForWidth(l_rnewpass->sizePolicy().hasHeightForWidth());
        l_rnewpass->setSizePolicy(sizePolicy1);
        l_rnewpass->setMinimumSize(QSize(160, 0));
        l_rnewpass->setMaximumSize(QSize(160, 16777215));

        horizontalLayout_4->addWidget(l_rnewpass);

        e_rnewpass = new QLineEdit(UsersDialog);
        e_rnewpass->setObjectName(QString::fromUtf8("e_rnewpass"));
        e_rnewpass->setEchoMode(QLineEdit::Password);

        horizontalLayout_4->addWidget(e_rnewpass);


        verticalLayout->addLayout(horizontalLayout_4);

        verticalSpacer = new QSpacerItem(10, 8, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(0);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setSizeConstraint(QLayout::SetNoConstraint);
        horizontalSpacer = new QSpacerItem(40, 10, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);

        b_apply = new QPushButton(UsersDialog);
        b_apply->setObjectName(QString::fromUtf8("b_apply"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/buttons/apply.png"), QSize(), QIcon::Normal, QIcon::Off);
        b_apply->setIcon(icon);
        b_apply->setFlat(false);

        horizontalLayout_5->addWidget(b_apply);

        horizontalSpacer_2 = new QSpacerItem(8, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);

        b_quit = new QPushButton(UsersDialog);
        b_quit->setObjectName(QString::fromUtf8("b_quit"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/buttons/exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        b_quit->setIcon(icon1);

        horizontalLayout_5->addWidget(b_quit);


        verticalLayout->addLayout(horizontalLayout_5);


        retranslateUi(UsersDialog);

        QMetaObject::connectSlotsByName(UsersDialog);
    } // setupUi

    void retranslateUi(QDialog *UsersDialog)
    {
        UsersDialog->setWindowTitle(QApplication::translate("UsersDialog", "\320\237\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\320\270", 0, QApplication::UnicodeUTF8));
        l_seluser->setText(QApplication::translate("UsersDialog", "\320\222\321\213\320\261\320\265\321\200\320\270\321\202\320\265 \320\277\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\321\217:", 0, QApplication::UnicodeUTF8));
        l_oldpass->setText(QApplication::translate("UsersDialog", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \321\201\321\202\320\260\321\200\321\213\320\271 \320\277\320\260\321\200\320\276\320\273\321\214:", 0, QApplication::UnicodeUTF8));
        l_newpass->setText(QApplication::translate("UsersDialog", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\275\320\276\320\262\321\213\320\271 \320\277\320\260\321\200\320\276\320\273\321\214:", 0, QApplication::UnicodeUTF8));
        l_rnewpass->setText(QApplication::translate("UsersDialog", "\320\237\320\276\320\262\321\202\320\276\321\200\320\270\321\202\320\265 \320\275\320\276\320\262\321\213\320\271 \320\277\320\260\321\200\320\276\320\273\321\214:", 0, QApplication::UnicodeUTF8));
        b_apply->setText(QApplication::translate("UsersDialog", "\320\237\321\200\320\270\320\274\320\265\320\275\320\270\321\202\321\214", 0, QApplication::UnicodeUTF8));
        b_quit->setText(QApplication::translate("UsersDialog", "\320\222\321\213\321\205\320\276\320\264", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class UsersDialog: public Ui_UsersDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERSDIALOG_H
