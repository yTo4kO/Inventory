/********************************************************************************
** Form generated from reading UI file 'gprogs.ui'
**
** Created: Fri Mar 19 23:54:14 2010
**      by: Qt User Interface Compiler version 4.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GPROGS_H
#define UI_GPROGS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListView>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTableView>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_gprogs
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QListView *l_gprogs;
    QTableView *t_progs;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *b_add_gr;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *b_edit_gr;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *b_del_gr;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QComboBox *cb_gprogs;
    QPushButton *b_setg_ok;
    QPushButton *b_setg_cancel;
    QSpacerItem *horizontalSpacer_2;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *gprogs)
    {
        if (gprogs->objectName().isEmpty())
            gprogs->setObjectName(QString::fromUtf8("gprogs"));
        gprogs->setWindowModality(Qt::NonModal);
        gprogs->resize(800, 450);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(gprogs->sizePolicy().hasHeightForWidth());
        gprogs->setSizePolicy(sizePolicy);
        gprogs->setMinimumSize(QSize(400, 240));
        verticalLayout = new QVBoxLayout(gprogs);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        l_gprogs = new QListView(gprogs);
        l_gprogs->setObjectName(QString::fromUtf8("l_gprogs"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(l_gprogs->sizePolicy().hasHeightForWidth());
        l_gprogs->setSizePolicy(sizePolicy1);
        l_gprogs->setMinimumSize(QSize(180, 0));
        l_gprogs->setMaximumSize(QSize(180, 16777215));

        horizontalLayout->addWidget(l_gprogs);

        t_progs = new QTableView(gprogs);
        t_progs->setObjectName(QString::fromUtf8("t_progs"));
        sizePolicy1.setHeightForWidth(t_progs->sizePolicy().hasHeightForWidth());
        t_progs->setSizePolicy(sizePolicy1);
        t_progs->setMinimumSize(QSize(300, 0));
        t_progs->setSelectionBehavior(QAbstractItemView::SelectRows);
        t_progs->setVerticalScrollMode(QAbstractItemView::ScrollPerItem);
        t_progs->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);
        t_progs->setWordWrap(false);
        t_progs->horizontalHeader()->setDefaultSectionSize(150);
        t_progs->horizontalHeader()->setStretchLastSection(true);

        horizontalLayout->addWidget(t_progs);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_3 = new QSpacerItem(21, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        b_add_gr = new QPushButton(gprogs);
        b_add_gr->setObjectName(QString::fromUtf8("b_add_gr"));
        b_add_gr->setMinimumSize(QSize(26, 0));
        b_add_gr->setMaximumSize(QSize(26, 16777215));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/buttons/add.png"), QSize(), QIcon::Normal, QIcon::Off);
        b_add_gr->setIcon(icon);
        b_add_gr->setIconSize(QSize(17, 17));

        horizontalLayout_2->addWidget(b_add_gr);

        horizontalSpacer_4 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        b_edit_gr = new QPushButton(gprogs);
        b_edit_gr->setObjectName(QString::fromUtf8("b_edit_gr"));
        b_edit_gr->setMinimumSize(QSize(26, 0));
        b_edit_gr->setMaximumSize(QSize(26, 16777215));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/buttons/edit.png"), QSize(), QIcon::Normal, QIcon::Off);
        b_edit_gr->setIcon(icon1);
        b_edit_gr->setIconSize(QSize(17, 17));

        horizontalLayout_2->addWidget(b_edit_gr);

        horizontalSpacer_5 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);

        b_del_gr = new QPushButton(gprogs);
        b_del_gr->setObjectName(QString::fromUtf8("b_del_gr"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(b_del_gr->sizePolicy().hasHeightForWidth());
        b_del_gr->setSizePolicy(sizePolicy2);
        b_del_gr->setMinimumSize(QSize(26, 0));
        b_del_gr->setMaximumSize(QSize(26, 16777215));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/buttons/remove.png"), QSize(), QIcon::Normal, QIcon::Off);
        b_del_gr->setIcon(icon2);
        b_del_gr->setIconSize(QSize(17, 17));

        horizontalLayout_2->addWidget(b_del_gr);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        label = new QLabel(gprogs);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setMinimumSize(QSize(90, 0));
        label->setMaximumSize(QSize(90, 16777215));

        horizontalLayout_2->addWidget(label);

        cb_gprogs = new QComboBox(gprogs);
        cb_gprogs->setObjectName(QString::fromUtf8("cb_gprogs"));
        sizePolicy2.setHeightForWidth(cb_gprogs->sizePolicy().hasHeightForWidth());
        cb_gprogs->setSizePolicy(sizePolicy2);
        cb_gprogs->setMinimumSize(QSize(108, 0));

        horizontalLayout_2->addWidget(cb_gprogs);

        b_setg_ok = new QPushButton(gprogs);
        b_setg_ok->setObjectName(QString::fromUtf8("b_setg_ok"));
        b_setg_ok->setMinimumSize(QSize(26, 0));
        b_setg_ok->setMaximumSize(QSize(26, 16777215));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/buttons/apply.png"), QSize(), QIcon::Normal, QIcon::Off);
        b_setg_ok->setIcon(icon3);
        b_setg_ok->setIconSize(QSize(17, 17));

        horizontalLayout_2->addWidget(b_setg_ok);

        b_setg_cancel = new QPushButton(gprogs);
        b_setg_cancel->setObjectName(QString::fromUtf8("b_setg_cancel"));
        b_setg_cancel->setMinimumSize(QSize(26, 0));
        b_setg_cancel->setMaximumSize(QSize(26, 16777215));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/buttons/cancel.png"), QSize(), QIcon::Normal, QIcon::Off);
        b_setg_cancel->setIcon(icon4);
        b_setg_cancel->setIconSize(QSize(17, 17));

        horizontalLayout_2->addWidget(b_setg_cancel);

        horizontalSpacer_2 = new QSpacerItem(10, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_2);

        buttonBox = new QDialogButtonBox(gprogs);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);

        QWidget::setTabOrder(l_gprogs, b_add_gr);
        QWidget::setTabOrder(b_add_gr, b_edit_gr);
        QWidget::setTabOrder(b_edit_gr, b_del_gr);
        QWidget::setTabOrder(b_del_gr, t_progs);
        QWidget::setTabOrder(t_progs, cb_gprogs);
        QWidget::setTabOrder(cb_gprogs, b_setg_ok);
        QWidget::setTabOrder(b_setg_ok, b_setg_cancel);
        QWidget::setTabOrder(b_setg_cancel, buttonBox);

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

#endif // UI_GPROGS_H
