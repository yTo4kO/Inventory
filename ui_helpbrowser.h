/********************************************************************************
** Form generated from reading UI file 'helpbrowser.ui'
**
** Created: Fri Mar 19 23:54:14 2010
**      by: Qt User Interface Compiler version 4.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HELPBROWSER_H
#define UI_HELPBROWSER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QSpacerItem>
#include <QtGui/QTextBrowser>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_HelpBrowser
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QToolButton *tb_home;
    QToolButton *tb_back;
    QSpacerItem *horizontalSpacer;
    QToolButton *tb_exit;
    QTextBrowser *help_browser;

    void setupUi(QDialog *HelpBrowser)
    {
        if (HelpBrowser->objectName().isEmpty())
            HelpBrowser->setObjectName(QString::fromUtf8("HelpBrowser"));
        HelpBrowser->resize(640, 480);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(HelpBrowser->sizePolicy().hasHeightForWidth());
        HelpBrowser->setSizePolicy(sizePolicy);
        HelpBrowser->setMinimumSize(QSize(320, 240));
        verticalLayout = new QVBoxLayout(HelpBrowser);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        tb_home = new QToolButton(HelpBrowser);
        tb_home->setObjectName(QString::fromUtf8("tb_home"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/buttons/go-home.png"), QSize(), QIcon::Normal, QIcon::Off);
        tb_home->setIcon(icon);
        tb_home->setIconSize(QSize(18, 18));

        horizontalLayout->addWidget(tb_home);

        tb_back = new QToolButton(HelpBrowser);
        tb_back->setObjectName(QString::fromUtf8("tb_back"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/buttons/go-previous.png"), QSize(), QIcon::Normal, QIcon::Off);
        tb_back->setIcon(icon1);
        tb_back->setIconSize(QSize(18, 18));

        horizontalLayout->addWidget(tb_back);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        tb_exit = new QToolButton(HelpBrowser);
        tb_exit->setObjectName(QString::fromUtf8("tb_exit"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/buttons/exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        tb_exit->setIcon(icon2);
        tb_exit->setIconSize(QSize(18, 18));
        tb_exit->setCheckable(false);
        tb_exit->setToolButtonStyle(Qt::ToolButtonIconOnly);
        tb_exit->setArrowType(Qt::NoArrow);

        horizontalLayout->addWidget(tb_exit);


        verticalLayout->addLayout(horizontalLayout);

        help_browser = new QTextBrowser(HelpBrowser);
        help_browser->setObjectName(QString::fromUtf8("help_browser"));

        verticalLayout->addWidget(help_browser);


        retranslateUi(HelpBrowser);

        QMetaObject::connectSlotsByName(HelpBrowser);
    } // setupUi

    void retranslateUi(QDialog *HelpBrowser)
    {
        HelpBrowser->setWindowTitle(QString());
#ifndef QT_NO_TOOLTIP
        tb_home->setToolTip(QApplication::translate("HelpBrowser", "\320\235\320\260 \320\263\320\273\320\260\320\262\320\275\321\203\321\216", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        tb_home->setText(QString());
#ifndef QT_NO_TOOLTIP
        tb_back->setToolTip(QApplication::translate("HelpBrowser", "\320\235\320\260\320\267\320\260\320\264", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        tb_back->setText(QString());
#ifndef QT_NO_TOOLTIP
        tb_exit->setToolTip(QApplication::translate("HelpBrowser", "\320\227\320\260\320\272\321\200\321\213\321\202\321\214 \320\276\320\272\320\275\320\276 \321\201\320\277\321\200\320\260\320\262\320\272\320\270", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        tb_exit->setText(QApplication::translate("HelpBrowser", "\320\222\321\213\321\205\320\276\320\264", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class HelpBrowser: public Ui_HelpBrowser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HELPBROWSER_H
