/********************************************************************************
** Form generated from reading UI file 'listsdialog.ui'
**
** Created: Fri Mar 19 23:54:14 2010
**      by: Qt User Interface Compiler version 4.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LISTSDIALOG_H
#define UI_LISTSDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTableView>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ListsDialog
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *l_select;
    QComboBox *cb_gcomps;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *b_select;
    QHBoxLayout *horizontalLayout;
    QTableView *t_freeprogs;
    QVBoxLayout *verticalLayout_3;
    QPushButton *b_tolist;
    QPushButton *b_fromlist;
    QTableView *t_onlistprogs;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ListsDialog)
    {
        if (ListsDialog->objectName().isEmpty())
            ListsDialog->setObjectName(QString::fromUtf8("ListsDialog"));
        ListsDialog->resize(660, 430);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ListsDialog->sizePolicy().hasHeightForWidth());
        ListsDialog->setSizePolicy(sizePolicy);
        ListsDialog->setMinimumSize(QSize(660, 430));
        verticalLayout = new QVBoxLayout(ListsDialog);
        verticalLayout->setContentsMargins(2, 2, 2, 2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox = new QGroupBox(ListsDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(100);
        sizePolicy1.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy1);
        groupBox->setMinimumSize(QSize(0, 100));
        groupBox->setMaximumSize(QSize(16777215, 16777215));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        l_select = new QLabel(groupBox);
        l_select->setObjectName(QString::fromUtf8("l_select"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(l_select->sizePolicy().hasHeightForWidth());
        l_select->setSizePolicy(sizePolicy2);
        l_select->setMinimumSize(QSize(120, 0));

        horizontalLayout_2->addWidget(l_select);

        cb_gcomps = new QComboBox(groupBox);
        cb_gcomps->setObjectName(QString::fromUtf8("cb_gcomps"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(cb_gcomps->sizePolicy().hasHeightForWidth());
        cb_gcomps->setSizePolicy(sizePolicy3);
        cb_gcomps->setMinimumSize(QSize(100, 0));

        horizontalLayout_2->addWidget(cb_gcomps);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        b_select = new QPushButton(groupBox);
        b_select->setObjectName(QString::fromUtf8("b_select"));

        horizontalLayout_3->addWidget(b_select);


        verticalLayout_2->addLayout(horizontalLayout_3);


        verticalLayout->addWidget(groupBox);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, -1, -1, 0);
        t_freeprogs = new QTableView(ListsDialog);
        t_freeprogs->setObjectName(QString::fromUtf8("t_freeprogs"));
        t_freeprogs->setSelectionMode(QAbstractItemView::ExtendedSelection);
        t_freeprogs->setSelectionBehavior(QAbstractItemView::SelectRows);
        t_freeprogs->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);
        t_freeprogs->horizontalHeader()->setStretchLastSection(true);
        t_freeprogs->verticalHeader()->setVisible(false);
        t_freeprogs->verticalHeader()->setHighlightSections(false);

        horizontalLayout->addWidget(t_freeprogs);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(2, -1, 2, -1);
        b_tolist = new QPushButton(ListsDialog);
        b_tolist->setObjectName(QString::fromUtf8("b_tolist"));
        QSizePolicy sizePolicy4(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(b_tolist->sizePolicy().hasHeightForWidth());
        b_tolist->setSizePolicy(sizePolicy4);
        b_tolist->setMinimumSize(QSize(26, 0));
        b_tolist->setMaximumSize(QSize(26, 16777215));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/buttons/arrow-right.png"), QSize(), QIcon::Normal, QIcon::Off);
        b_tolist->setIcon(icon);
        b_tolist->setIconSize(QSize(19, 19));
        b_tolist->setFlat(false);

        verticalLayout_3->addWidget(b_tolist);

        b_fromlist = new QPushButton(ListsDialog);
        b_fromlist->setObjectName(QString::fromUtf8("b_fromlist"));
        sizePolicy4.setHeightForWidth(b_fromlist->sizePolicy().hasHeightForWidth());
        b_fromlist->setSizePolicy(sizePolicy4);
        b_fromlist->setMinimumSize(QSize(26, 0));
        b_fromlist->setMaximumSize(QSize(26, 16777215));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/buttons/arrow-left.png"), QSize(), QIcon::Normal, QIcon::Off);
        b_fromlist->setIcon(icon1);
        b_fromlist->setIconSize(QSize(19, 19));
        b_fromlist->setFlat(false);

        verticalLayout_3->addWidget(b_fromlist);


        horizontalLayout->addLayout(verticalLayout_3);

        t_onlistprogs = new QTableView(ListsDialog);
        t_onlistprogs->setObjectName(QString::fromUtf8("t_onlistprogs"));
        t_onlistprogs->setSelectionBehavior(QAbstractItemView::SelectRows);
        t_onlistprogs->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);
        t_onlistprogs->horizontalHeader()->setStretchLastSection(true);
        t_onlistprogs->verticalHeader()->setVisible(false);
        t_onlistprogs->verticalHeader()->setCascadingSectionResizes(false);
        t_onlistprogs->verticalHeader()->setHighlightSections(false);

        horizontalLayout->addWidget(t_onlistprogs);


        verticalLayout->addLayout(horizontalLayout);

        buttonBox = new QDialogButtonBox(ListsDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);

        QWidget::setTabOrder(cb_gcomps, b_select);
        QWidget::setTabOrder(b_select, t_freeprogs);
        QWidget::setTabOrder(t_freeprogs, b_tolist);
        QWidget::setTabOrder(b_tolist, b_fromlist);
        QWidget::setTabOrder(b_fromlist, t_onlistprogs);
        QWidget::setTabOrder(t_onlistprogs, buttonBox);

        retranslateUi(ListsDialog);

        QMetaObject::connectSlotsByName(ListsDialog);
    } // setupUi

    void retranslateUi(QDialog *ListsDialog)
    {
        ListsDialog->setWindowTitle(QString());
        groupBox->setTitle(QApplication::translate("ListsDialog", "\320\223\321\200\321\203\320\277\320\277\321\213 \320\272\320\276\320\274\320\277\321\214\321\216\321\202\320\265\321\200\320\276\320\262", 0, QApplication::UnicodeUTF8));
        l_select->setText(QApplication::translate("ListsDialog", "\320\222\321\213\320\261\320\265\321\200\320\270\321\202\320\265 \320\263\321\200\321\203\320\277\320\277\321\203:", 0, QApplication::UnicodeUTF8));
        b_select->setText(QApplication::translate("ListsDialog", "\320\222\321\213\320\261\321\200\320\260\321\202\321\214", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        b_tolist->setToolTip(QApplication::translate("ListsDialog", "\320\237\320\276\320\274\320\265\321\201\321\202\320\270\321\202\321\214 \320\262", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        b_tolist->setText(QString());
#ifndef QT_NO_TOOLTIP
        b_fromlist->setToolTip(QApplication::translate("ListsDialog", "\320\243\320\261\321\200\320\260\321\202\321\214 \320\270\320\267 \321\201\320\277\320\270\321\201\320\272\320\260", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        b_fromlist->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ListsDialog: public Ui_ListsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LISTSDIALOG_H
