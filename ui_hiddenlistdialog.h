/********************************************************************************
** Form generated from reading UI file 'hiddenlistdialog.ui'
**
** Created: Fri Mar 19 23:54:14 2010
**      by: Qt User Interface Compiler version 4.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HIDDENLISTDIALOG_H
#define UI_HIDDENLISTDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSplitter>
#include <QtGui/QTableView>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HiddenListDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QSplitter *splitter;
    QTableView *t_unhidden;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QPushButton *b_hide;
    QPushButton *b_unhide;
    QSpacerItem *verticalSpacer_2;
    QTableView *t_hidden;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *HiddenListDialog)
    {
        if (HiddenListDialog->objectName().isEmpty())
            HiddenListDialog->setObjectName(QString::fromUtf8("HiddenListDialog"));
        HiddenListDialog->resize(528, 382);
        verticalLayout_2 = new QVBoxLayout(HiddenListDialog);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        splitter = new QSplitter(HiddenListDialog);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        t_unhidden = new QTableView(splitter);
        t_unhidden->setObjectName(QString::fromUtf8("t_unhidden"));
        t_unhidden->setSelectionBehavior(QAbstractItemView::SelectRows);
        t_unhidden->setVerticalScrollMode(QAbstractItemView::ScrollPerPixel);
        splitter->addWidget(t_unhidden);
        t_unhidden->horizontalHeader()->setStretchLastSection(true);
        t_unhidden->verticalHeader()->setVisible(false);
        verticalLayoutWidget = new QWidget(splitter);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
#ifndef Q_OS_MAC
        verticalLayout->setSpacing(-1);
#endif
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetMaximumSize);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalSpacer = new QSpacerItem(20, 50, QSizePolicy::Minimum, QSizePolicy::Ignored);

        verticalLayout->addItem(verticalSpacer);

        b_hide = new QPushButton(verticalLayoutWidget);
        b_hide->setObjectName(QString::fromUtf8("b_hide"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(b_hide->sizePolicy().hasHeightForWidth());
        b_hide->setSizePolicy(sizePolicy);
        b_hide->setMinimumSize(QSize(24, 0));
        b_hide->setMaximumSize(QSize(24, 16777215));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/buttons/arrow-right.png"), QSize(), QIcon::Normal, QIcon::Off);
        b_hide->setIcon(icon);

        verticalLayout->addWidget(b_hide);

        b_unhide = new QPushButton(verticalLayoutWidget);
        b_unhide->setObjectName(QString::fromUtf8("b_unhide"));
        sizePolicy.setHeightForWidth(b_unhide->sizePolicy().hasHeightForWidth());
        b_unhide->setSizePolicy(sizePolicy);
        b_unhide->setMinimumSize(QSize(24, 0));
        b_unhide->setMaximumSize(QSize(24, 16777215));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/buttons/arrow-left.png"), QSize(), QIcon::Normal, QIcon::Off);
        b_unhide->setIcon(icon1);

        verticalLayout->addWidget(b_unhide);

        verticalSpacer_2 = new QSpacerItem(20, 50, QSizePolicy::Minimum, QSizePolicy::Ignored);

        verticalLayout->addItem(verticalSpacer_2);

        splitter->addWidget(verticalLayoutWidget);
        t_hidden = new QTableView(splitter);
        t_hidden->setObjectName(QString::fromUtf8("t_hidden"));
        t_hidden->setSelectionBehavior(QAbstractItemView::SelectRows);
        t_hidden->setVerticalScrollMode(QAbstractItemView::ScrollPerPixel);
        splitter->addWidget(t_hidden);
        t_hidden->horizontalHeader()->setStretchLastSection(true);
        t_hidden->verticalHeader()->setVisible(false);

        verticalLayout_2->addWidget(splitter);

        buttonBox = new QDialogButtonBox(HiddenListDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_2->addWidget(buttonBox);

        QWidget::setTabOrder(t_unhidden, b_hide);
        QWidget::setTabOrder(b_hide, b_unhide);
        QWidget::setTabOrder(b_unhide, t_hidden);
        QWidget::setTabOrder(t_hidden, buttonBox);

        retranslateUi(HiddenListDialog);

        QMetaObject::connectSlotsByName(HiddenListDialog);
    } // setupUi

    void retranslateUi(QDialog *HiddenListDialog)
    {
        HiddenListDialog->setWindowTitle(QApplication::translate("HiddenListDialog", "\320\241\320\277\320\270\321\201\320\276\320\272 \321\201\320\272\321\200\321\213\321\202\321\213\321\205 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274", 0, QApplication::UnicodeUTF8));
        b_hide->setText(QString());
        b_unhide->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class HiddenListDialog: public Ui_HiddenListDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HIDDENLISTDIALOG_H
