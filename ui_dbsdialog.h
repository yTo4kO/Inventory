/********************************************************************************
** Form generated from reading UI file 'dbsdialog.ui'
**
** Created: Fri Mar 19 23:54:14 2010
**      by: Qt User Interface Compiler version 4.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DBSDIALOG_H
#define UI_DBSDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_dbsdialog
{
public:
    QHBoxLayout *horizontalLayout;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_2;
    QListWidget *l_db;
    QComboBox *cb_styles;
    QVBoxLayout *verticalLayout;
    QPushButton *b_connect;
    QPushButton *b_cancel;
    QPushButton *b_installdb;
    QPushButton *b_add;
    QPushButton *b_edit;
    QPushButton *b_del;

    void setupUi(QDialog *dbsdialog)
    {
        if (dbsdialog->objectName().isEmpty())
            dbsdialog->setObjectName(QString::fromUtf8("dbsdialog"));
        dbsdialog->resize(376, 300);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(dbsdialog->sizePolicy().hasHeightForWidth());
        dbsdialog->setSizePolicy(sizePolicy);
        dbsdialog->setMinimumSize(QSize(376, 300));
        dbsdialog->setMaximumSize(QSize(376, 300));
        horizontalLayout = new QHBoxLayout(dbsdialog);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(2, 2, 2, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        l_db = new QListWidget(dbsdialog);
        l_db->setObjectName(QString::fromUtf8("l_db"));

        verticalLayout_2->addWidget(l_db);

        cb_styles = new QComboBox(dbsdialog);
        cb_styles->setObjectName(QString::fromUtf8("cb_styles"));

        verticalLayout_2->addWidget(cb_styles);


        horizontalLayout_2->addLayout(verticalLayout_2);


        horizontalLayout->addLayout(horizontalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(-1, -1, 2, -1);
        b_connect = new QPushButton(dbsdialog);
        b_connect->setObjectName(QString::fromUtf8("b_connect"));
        b_connect->setMaximumSize(QSize(16777215, 23));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/buttons/connect.png"), QSize(), QIcon::Normal, QIcon::Off);
        b_connect->setIcon(icon);

        verticalLayout->addWidget(b_connect);

        b_cancel = new QPushButton(dbsdialog);
        b_cancel->setObjectName(QString::fromUtf8("b_cancel"));
        b_cancel->setMaximumSize(QSize(16777215, 23));
        b_cancel->setBaseSize(QSize(0, 0));
        b_cancel->setLayoutDirection(Qt::LeftToRight);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/buttons/exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        b_cancel->setIcon(icon1);
        b_cancel->setIconSize(QSize(16, 16));

        verticalLayout->addWidget(b_cancel);

        b_installdb = new QPushButton(dbsdialog);
        b_installdb->setObjectName(QString::fromUtf8("b_installdb"));
        b_installdb->setMaximumSize(QSize(16777215, 23));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/buttons/installdb.png"), QSize(), QIcon::Normal, QIcon::Off);
        b_installdb->setIcon(icon2);

        verticalLayout->addWidget(b_installdb);

        b_add = new QPushButton(dbsdialog);
        b_add->setObjectName(QString::fromUtf8("b_add"));
        b_add->setMaximumSize(QSize(16777215, 23));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/buttons/add.png"), QSize(), QIcon::Normal, QIcon::Off);
        b_add->setIcon(icon3);

        verticalLayout->addWidget(b_add);

        b_edit = new QPushButton(dbsdialog);
        b_edit->setObjectName(QString::fromUtf8("b_edit"));
        b_edit->setMaximumSize(QSize(16777215, 23));
        b_edit->setStyleSheet(QString::fromUtf8(""));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/buttons/edit.png"), QSize(), QIcon::Normal, QIcon::Off);
        b_edit->setIcon(icon4);

        verticalLayout->addWidget(b_edit);

        b_del = new QPushButton(dbsdialog);
        b_del->setObjectName(QString::fromUtf8("b_del"));
        sizePolicy.setHeightForWidth(b_del->sizePolicy().hasHeightForWidth());
        b_del->setSizePolicy(sizePolicy);
        b_del->setMinimumSize(QSize(0, 0));
        b_del->setMaximumSize(QSize(16777215, 23));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/buttons/remove.png"), QSize(), QIcon::Normal, QIcon::Off);
        b_del->setIcon(icon5);

        verticalLayout->addWidget(b_del);


        horizontalLayout->addLayout(verticalLayout);


        retranslateUi(dbsdialog);

        QMetaObject::connectSlotsByName(dbsdialog);
    } // setupUi

    void retranslateUi(QDialog *dbsdialog)
    {
        dbsdialog->setWindowTitle(QApplication::translate("dbsdialog", "\320\221\320\260\320\267\321\213 \320\264\320\260\320\275\320\275\321\213\321\205", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        b_connect->setToolTip(QApplication::translate("dbsdialog", "\320\237\320\276\320\264\320\272\320\273\321\216\321\207\320\270\321\202\321\214\321\201\321\217 \320\272 \320\262\321\213\320\261\321\200\320\260\320\275\320\275\320\276\320\274\321\203 \321\201\320\265\321\200\320\262\320\265\321\200\321\203", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        b_connect->setText(QApplication::translate("dbsdialog", "\320\237\320\276\320\264\320\272\320\273\321\216\321\207.", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        b_cancel->setToolTip(QApplication::translate("dbsdialog", "\320\222\321\213\320\271\321\202\320\270 \320\270\320\267 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\321\213", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        b_cancel->setText(QApplication::translate("dbsdialog", "  \320\222\321\213\321\205\320\276\320\264  ", 0, QApplication::UnicodeUTF8));
        b_installdb->setText(QApplication::translate("dbsdialog", " \320\243\321\201\321\202\320\260\320\275\320\276\320\262.", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        b_add->setToolTip(QApplication::translate("dbsdialog", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \321\201\320\265\321\200\320\262\320\265\321\200", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        b_add->setText(QApplication::translate("dbsdialog", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        b_edit->setToolTip(QApplication::translate("dbsdialog", "\320\240\320\265\320\264\320\260\320\272\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214 \320\277\320\260\321\200\320\260\320\274\320\265\321\202\321\200\321\213 \321\201\320\265\321\200\320\262\320\265\321\200\320\260", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        b_edit->setText(QApplication::translate("dbsdialog", " \320\240\320\265\320\264\320\260\320\272\321\202.  ", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        b_del->setToolTip(QApplication::translate("dbsdialog", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \321\201\320\265\321\200\320\262\320\265\321\200", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        b_del->setText(QApplication::translate("dbsdialog", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 ", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class dbsdialog: public Ui_dbsdialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DBSDIALOG_H
