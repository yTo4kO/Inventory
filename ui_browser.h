/********************************************************************************
** Form generated from reading UI file 'browser.ui'
**
** Created: Fri Mar 19 23:54:14 2010
**      by: Qt User Interface Compiler version 4.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BROWSER_H
#define UI_BROWSER_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDateEdit>
#include <QtGui/QDialog>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSplitter>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include <QtWebKit/QWebView>

QT_BEGIN_NAMESPACE

class Ui_browser
{
public:
    QVBoxLayout *verticalLayout;
    QSplitter *splitter;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *gb_filter;
    QVBoxLayout *verticalLayout_4;
    QRadioButton *rb_bydate;
    QWidget *w_bydate;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QDateEdit *de_from;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QDateEdit *de_to;
    QRadioButton *rb_byname;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_2;
    QLineEdit *e_name;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *b_fapply;
    QPushButton *b_fcancel;
    QSpacerItem *horizontalSpacer_3;
    QGroupBox *gb_comps;
    QVBoxLayout *verticalLayout_3;
    QWebView *reportview;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *b_print;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *b_help;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *b_quit;
    QButtonGroup *buttonGroup;

    void setupUi(QDialog *browser)
    {
        if (browser->objectName().isEmpty())
            browser->setObjectName(QString::fromUtf8("browser"));
        browser->resize(800, 480);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(browser->sizePolicy().hasHeightForWidth());
        browser->setSizePolicy(sizePolicy);
        browser->setMinimumSize(QSize(800, 480));
        browser->setSizeGripEnabled(false);
        verticalLayout = new QVBoxLayout(browser);
        verticalLayout->setSpacing(5);
        verticalLayout->setContentsMargins(2, 2, 2, 2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        splitter = new QSplitter(browser);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setFrameShape(QFrame::NoFrame);
        splitter->setFrameShadow(QFrame::Plain);
        splitter->setLineWidth(1);
        splitter->setMidLineWidth(0);
        splitter->setOrientation(Qt::Horizontal);
        splitter->setHandleWidth(4);
        widget = new QWidget(splitter);
        widget->setObjectName(QString::fromUtf8("widget"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy1);
        widget->setMinimumSize(QSize(177, 0));
        widget->setMaximumSize(QSize(200, 16777215));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        gb_filter = new QGroupBox(widget);
        gb_filter->setObjectName(QString::fromUtf8("gb_filter"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(gb_filter->sizePolicy().hasHeightForWidth());
        gb_filter->setSizePolicy(sizePolicy2);
        gb_filter->setMinimumSize(QSize(0, 185));
        gb_filter->setMaximumSize(QSize(16777215, 185));
        gb_filter->setFlat(false);
        verticalLayout_4 = new QVBoxLayout(gb_filter);
        verticalLayout_4->setSpacing(1);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(1, 0, 1, 0);
        rb_bydate = new QRadioButton(gb_filter);
        buttonGroup = new QButtonGroup(browser);
        buttonGroup->setObjectName(QString::fromUtf8("buttonGroup"));
        buttonGroup->addButton(rb_bydate);
        rb_bydate->setObjectName(QString::fromUtf8("rb_bydate"));
        rb_bydate->setMinimumSize(QSize(0, 18));

        verticalLayout_4->addWidget(rb_bydate);

        w_bydate = new QWidget(gb_filter);
        w_bydate->setObjectName(QString::fromUtf8("w_bydate"));
        verticalLayout_5 = new QVBoxLayout(w_bydate);
        verticalLayout_5->setSpacing(1);
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(w_bydate);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        label->setMinimumSize(QSize(20, 0));
        label->setMaximumSize(QSize(20, 16777215));

        horizontalLayout_2->addWidget(label);

        de_from = new QDateEdit(w_bydate);
        de_from->setObjectName(QString::fromUtf8("de_from"));
        de_from->setMinimumSize(QSize(115, 0));
        de_from->setFrame(true);
        de_from->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        de_from->setAccelerated(false);
        de_from->setDateTime(QDateTime(QDate(2000, 1, 1), QTime(0, 0, 0)));
        de_from->setCalendarPopup(true);
        de_from->setCurrentSectionIndex(0);
        de_from->setDate(QDate(2000, 1, 1));

        horizontalLayout_2->addWidget(de_from);


        verticalLayout_5->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_2 = new QLabel(w_bydate);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);
        label_2->setMinimumSize(QSize(20, 0));
        label_2->setMaximumSize(QSize(20, 16777215));

        horizontalLayout_3->addWidget(label_2);

        de_to = new QDateEdit(w_bydate);
        de_to->setObjectName(QString::fromUtf8("de_to"));
        de_to->setMinimumSize(QSize(115, 0));
        de_to->setWrapping(false);
        de_to->setFrame(true);
        de_to->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        de_to->setButtonSymbols(QAbstractSpinBox::UpDownArrows);
        de_to->setCalendarPopup(true);

        horizontalLayout_3->addWidget(de_to);


        verticalLayout_5->addLayout(horizontalLayout_3);


        verticalLayout_4->addWidget(w_bydate);

        rb_byname = new QRadioButton(gb_filter);
        buttonGroup->addButton(rb_byname);
        rb_byname->setObjectName(QString::fromUtf8("rb_byname"));
        rb_byname->setMinimumSize(QSize(0, 18));

        verticalLayout_4->addWidget(rb_byname);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer_2 = new QSpacerItem(24, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        e_name = new QLineEdit(gb_filter);
        e_name->setObjectName(QString::fromUtf8("e_name"));

        horizontalLayout_4->addWidget(e_name);


        verticalLayout_4->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(0);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(-1, 4, -1, 2);
        b_fapply = new QPushButton(gb_filter);
        b_fapply->setObjectName(QString::fromUtf8("b_fapply"));
        sizePolicy.setHeightForWidth(b_fapply->sizePolicy().hasHeightForWidth());
        b_fapply->setSizePolicy(sizePolicy);
        b_fapply->setMinimumSize(QSize(82, 24));
        b_fapply->setMaximumSize(QSize(85, 24));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/buttons/apply.png"), QSize(), QIcon::Normal, QIcon::Off);
        b_fapply->setIcon(icon);
        b_fapply->setIconSize(QSize(16, 16));

        horizontalLayout_5->addWidget(b_fapply);

        b_fcancel = new QPushButton(gb_filter);
        b_fcancel->setObjectName(QString::fromUtf8("b_fcancel"));
        sizePolicy.setHeightForWidth(b_fcancel->sizePolicy().hasHeightForWidth());
        b_fcancel->setSizePolicy(sizePolicy);
        b_fcancel->setMinimumSize(QSize(82, 24));
        b_fcancel->setMaximumSize(QSize(85, 24));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/buttons/cancel.png"), QSize(), QIcon::Normal, QIcon::Off);
        b_fcancel->setIcon(icon1);
        b_fcancel->setIconSize(QSize(16, 16));

        horizontalLayout_5->addWidget(b_fcancel);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);


        verticalLayout_4->addLayout(horizontalLayout_5);


        verticalLayout_2->addWidget(gb_filter);

        gb_comps = new QGroupBox(widget);
        gb_comps->setObjectName(QString::fromUtf8("gb_comps"));
        verticalLayout_3 = new QVBoxLayout(gb_comps);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(2, 2, 2, 1);

        verticalLayout_2->addWidget(gb_comps);

        splitter->addWidget(widget);
        reportview = new QWebView(splitter);
        reportview->setObjectName(QString::fromUtf8("reportview"));
        reportview->setUrl(QUrl("about:blank"));
        splitter->addWidget(reportview);

        verticalLayout->addWidget(splitter);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        b_print = new QPushButton(browser);
        b_print->setObjectName(QString::fromUtf8("b_print"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/buttons/printer.png"), QSize(), QIcon::Normal, QIcon::Off);
        b_print->setIcon(icon2);

        horizontalLayout->addWidget(b_print);

        horizontalSpacer_5 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_5);

        b_help = new QPushButton(browser);
        b_help->setObjectName(QString::fromUtf8("b_help"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/buttons/help.png"), QSize(), QIcon::Normal, QIcon::Off);
        b_help->setIcon(icon3);
        b_help->setIconSize(QSize(16, 16));

        horizontalLayout->addWidget(b_help);

        horizontalSpacer_4 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        b_quit = new QPushButton(browser);
        b_quit->setObjectName(QString::fromUtf8("b_quit"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/buttons/exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        b_quit->setIcon(icon4);

        horizontalLayout->addWidget(b_quit);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(browser);

        QMetaObject::connectSlotsByName(browser);
    } // setupUi

    void retranslateUi(QDialog *browser)
    {
        browser->setWindowTitle(QApplication::translate("browser", "\320\237\321\200\320\276\321\201\320\274\320\276\321\202\321\200\321\211\320\270\320\272 \320\276\321\202\321\207\321\221\321\202\320\276\320\262", 0, QApplication::UnicodeUTF8));
        gb_filter->setTitle(QApplication::translate("browser", "\320\244\320\270\320\273\321\214\321\202\321\200\320\260\321\206\320\270\321\217", 0, QApplication::UnicodeUTF8));
        rb_bydate->setText(QApplication::translate("browser", "\320\237\320\276 \320\264\320\260\321\202\320\265", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("browser", "\320\241:", 0, QApplication::UnicodeUTF8));
        de_from->setSpecialValueText(QString());
        de_from->setDisplayFormat(QApplication::translate("browser", "dd.MM.yyyy", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("browser", "\320\224\320\276:", 0, QApplication::UnicodeUTF8));
        de_to->setDisplayFormat(QApplication::translate("browser", "dd.MM.yyyy", 0, QApplication::UnicodeUTF8));
        rb_byname->setText(QApplication::translate("browser", "\320\237\320\276 \320\270\320\274\320\265\320\275\320\270 \320\237\320\232", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        b_fapply->setToolTip(QApplication::translate("browser", "\320\237\321\200\320\270\320\274\320\265\320\275\320\270\321\202\321\214 \321\204\320\270\320\273\321\214\321\202\321\200", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        b_fapply->setText(QApplication::translate("browser", "\320\244\320\270\320\273\321\214\321\202\321\200", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        b_fcancel->setToolTip(QApplication::translate("browser", "\320\236\321\202\320\274\320\265\320\275\320\270\321\202\321\214 \321\204\320\270\320\273\321\214\321\202\321\200", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        b_fcancel->setText(QApplication::translate("browser", "\320\236\321\202\320\274\320\265\320\275\320\260", 0, QApplication::UnicodeUTF8));
        gb_comps->setTitle(QApplication::translate("browser", "\320\232\320\276\320\274\320\277\321\214\321\216\321\202\320\265\321\200\321\213", 0, QApplication::UnicodeUTF8));
        b_print->setText(QApplication::translate("browser", "\320\237\320\265\321\207\320\260\321\202\320\260\321\202\321\214", 0, QApplication::UnicodeUTF8));
        b_help->setText(QApplication::translate("browser", "\320\237\320\276\320\274\320\276\321\211\321\214", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        b_quit->setToolTip(QApplication::translate("browser", "\320\227\320\260\320\272\321\200\321\213\321\202\321\214 \320\276\320\272\320\275\320\276 \320\277\321\200\320\276\321\201\320\274\320\276\321\202\321\200\321\211\320\270\320\272\320\260", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        b_quit->setText(QApplication::translate("browser", "\320\222\321\213\321\205\320\276\320\264", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class browser: public Ui_browser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BROWSER_H
