/********************************************************************************
** Form generated from reading UI file 'gprogs_.ui'
**
** Created: Fri Mar 19 23:54:14 2010
**      by: Qt User Interface Compiler version 4.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GPROGS__H
#define UI_GPROGS__H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListView>
#include <QtGui/QPushButton>
#include <QtGui/QTableView>

QT_BEGIN_NAMESPACE

class Ui_gprogs
{
public:
    QTableView *t_progs;
    QListView *l_gprogs;
    QDialogButtonBox *buttonBox;
    QPushButton *b_add_gr;
    QPushButton *b_edit_gr;
    QPushButton *b_del_gr;
    QComboBox *cb_gprogs;
    QLabel *label;
    QPushButton *b_setg_ok;
    QPushButton *b_setg_cancel;

    void setupUi(QDialog *gprogs)
    {
        if (gprogs->objectName().isEmpty())
            gprogs->setObjectName(QString::fromUtf8("gprogs"));
        gprogs->resize(496, 391);
        t_progs = new QTableView(gprogs);
        t_progs->setObjectName(QString::fromUtf8("t_progs"));
        t_progs->setGeometry(QRect(155, 5, 336, 321));
        t_progs->setAlternatingRowColors(true);
        t_progs->setSelectionMode(QAbstractItemView::SingleSelection);
        t_progs->setSelectionBehavior(QAbstractItemView::SelectRows);
        t_progs->setVerticalScrollMode(QAbstractItemView::ScrollPerItem);
        t_progs->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);
        t_progs->horizontalHeader()->setDefaultSectionSize(150);
        t_progs->horizontalHeader()->setStretchLastSection(true);
        t_progs->verticalHeader()->setVisible(false);
        t_progs->verticalHeader()->setCascadingSectionResizes(false);
        t_progs->verticalHeader()->setDefaultSectionSize(24);
        t_progs->verticalHeader()->setMinimumSectionSize(22);
        l_gprogs = new QListView(gprogs);
        l_gprogs->setObjectName(QString::fromUtf8("l_gprogs"));
        l_gprogs->setGeometry(QRect(5, 5, 146, 321));
        buttonBox = new QDialogButtonBox(gprogs);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(320, 360, 167, 25));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        b_add_gr = new QPushButton(gprogs);
        b_add_gr->setObjectName(QString::fromUtf8("b_add_gr"));
        b_add_gr->setGeometry(QRect(10, 330, 26, 26));
        b_add_gr->setStyleSheet(QString::fromUtf8(""));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/buttons/add.png"), QSize(), QIcon::Normal, QIcon::Off);
        b_add_gr->setIcon(icon);
        b_add_gr->setIconSize(QSize(17, 17));
        b_add_gr->setFlat(false);
        b_edit_gr = new QPushButton(gprogs);
        b_edit_gr->setObjectName(QString::fromUtf8("b_edit_gr"));
        b_edit_gr->setGeometry(QRect(65, 330, 26, 26));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/buttons/edit.png"), QSize(), QIcon::Normal, QIcon::Off);
        b_edit_gr->setIcon(icon1);
        b_edit_gr->setIconSize(QSize(17, 17));
        b_del_gr = new QPushButton(gprogs);
        b_del_gr->setObjectName(QString::fromUtf8("b_del_gr"));
        b_del_gr->setGeometry(QRect(120, 330, 26, 26));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/buttons/remove.png"), QSize(), QIcon::Normal, QIcon::Off);
        b_del_gr->setIcon(icon2);
        b_del_gr->setIconSize(QSize(17, 17));
        cb_gprogs = new QComboBox(gprogs);
        cb_gprogs->setObjectName(QString::fromUtf8("cb_gprogs"));
        cb_gprogs->setGeometry(QRect(250, 330, 176, 24));
        label = new QLabel(gprogs);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(165, 335, 81, 16));
        b_setg_ok = new QPushButton(gprogs);
        b_setg_ok->setObjectName(QString::fromUtf8("b_setg_ok"));
        b_setg_ok->setGeometry(QRect(435, 330, 26, 26));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/buttons/apply.png"), QSize(), QIcon::Normal, QIcon::Off);
        b_setg_ok->setIcon(icon3);
        b_setg_ok->setIconSize(QSize(18, 18));
        b_setg_cancel = new QPushButton(gprogs);
        b_setg_cancel->setObjectName(QString::fromUtf8("b_setg_cancel"));
        b_setg_cancel->setGeometry(QRect(465, 330, 26, 26));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/buttons/cancel.png"), QSize(), QIcon::Normal, QIcon::Off);
        b_setg_cancel->setIcon(icon4);
        b_setg_cancel->setIconSize(QSize(18, 18));

        retranslateUi(gprogs);

        QMetaObject::connectSlotsByName(gprogs);
    } // setupUi

    void retranslateUi(QDialog *gprogs)
    {
        gprogs->setWindowTitle(QApplication::translate("gprogs", "\320\223\321\200\321\203\320\277\320\277\321\213 \320\237\320\232", 0, QApplication::UnicodeUTF8));
        b_add_gr->setText(QString());
        b_edit_gr->setText(QString());
        b_del_gr->setText(QString());
        label->setText(QApplication::translate("gprogs", "\320\237\320\265\321\200\320\265\320\275\320\265\321\201\321\202\320\270 \320\262:", 0, QApplication::UnicodeUTF8));
        b_setg_ok->setText(QString());
        b_setg_cancel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class gprogs: public Ui_gprogs {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GPROGS__H
