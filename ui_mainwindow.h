/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Fri Mar 19 23:54:14 2010
**      by: Qt User Interface Compiler version 4.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDockWidget>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QTableView>
#include <QtGui/QToolBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mainwindow
{
public:
    QAction *m_exit;
    QAction *m_gcomps;
    QAction *action_5;
    QAction *action_7;
    QAction *action_8;
    QAction *action_9;
    QAction *action_11;
    QAction *m_gprogs;
    QAction *m_wlist;
    QAction *m_blist;
    QAction *m_colors;
    QAction *m_qreport;
    QAction *m_browser;
    QAction *m_hidden;
    QAction *m_showhidden;
    QAction *m_users;
    QAction *m_help;
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QTableView *t_progs;
    QMenuBar *menubar;
    QMenu *menu;
    QMenu *m_edit;
    QMenu *m_subprogs;
    QMenu *m_info;
    QMenu *m_view;
    QMenu *m_reports;
    QMenu *m_settings;
    QStatusBar *statusbar;
    QDockWidget *dockWidget_5;
    QWidget *dockWidgetContents_5;
    QVBoxLayout *verticalLayout_3;
    QDockWidget *dockWidget_4;
    QWidget *dockWidgetContents_4;
    QVBoxLayout *verticalLayout_2;
    QComboBox *cb_gcomps;
    QTableView *t_comps;
    QToolBar *toolBar;

    void setupUi(QMainWindow *mainwindow)
    {
        if (mainwindow->objectName().isEmpty())
            mainwindow->setObjectName(QString::fromUtf8("mainwindow"));
        mainwindow->setWindowModality(Qt::NonModal);
        mainwindow->resize(800, 600);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mainwindow->sizePolicy().hasHeightForWidth());
        mainwindow->setSizePolicy(sizePolicy);
        mainwindow->setMinimumSize(QSize(640, 480));
        mainwindow->setToolButtonStyle(Qt::ToolButtonIconOnly);
        m_exit = new QAction(mainwindow);
        m_exit->setObjectName(QString::fromUtf8("m_exit"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/buttons/exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        m_exit->setIcon(icon);
        m_exit->setMenuRole(QAction::QuitRole);
        m_gcomps = new QAction(mainwindow);
        m_gcomps->setObjectName(QString::fromUtf8("m_gcomps"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/buttons/gcomps.png"), QSize(), QIcon::Normal, QIcon::Off);
        m_gcomps->setIcon(icon1);
        action_5 = new QAction(mainwindow);
        action_5->setObjectName(QString::fromUtf8("action_5"));
        action_7 = new QAction(mainwindow);
        action_7->setObjectName(QString::fromUtf8("action_7"));
        action_8 = new QAction(mainwindow);
        action_8->setObjectName(QString::fromUtf8("action_8"));
        action_9 = new QAction(mainwindow);
        action_9->setObjectName(QString::fromUtf8("action_9"));
        action_11 = new QAction(mainwindow);
        action_11->setObjectName(QString::fromUtf8("action_11"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/buttons/about.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_11->setIcon(icon2);
        m_gprogs = new QAction(mainwindow);
        m_gprogs->setObjectName(QString::fromUtf8("m_gprogs"));
        m_wlist = new QAction(mainwindow);
        m_wlist->setObjectName(QString::fromUtf8("m_wlist"));
        m_blist = new QAction(mainwindow);
        m_blist->setObjectName(QString::fromUtf8("m_blist"));
        m_colors = new QAction(mainwindow);
        m_colors->setObjectName(QString::fromUtf8("m_colors"));
        m_colors->setCheckable(true);
        m_qreport = new QAction(mainwindow);
        m_qreport->setObjectName(QString::fromUtf8("m_qreport"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/buttons/printer.png"), QSize(), QIcon::Normal, QIcon::Off);
        m_qreport->setIcon(icon3);
        m_browser = new QAction(mainwindow);
        m_browser->setObjectName(QString::fromUtf8("m_browser"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/buttons/reportbrowser.png"), QSize(), QIcon::Normal, QIcon::Off);
        m_browser->setIcon(icon4);
        m_hidden = new QAction(mainwindow);
        m_hidden->setObjectName(QString::fromUtf8("m_hidden"));
        m_showhidden = new QAction(mainwindow);
        m_showhidden->setObjectName(QString::fromUtf8("m_showhidden"));
        m_showhidden->setCheckable(true);
        m_users = new QAction(mainwindow);
        m_users->setObjectName(QString::fromUtf8("m_users"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/buttons/user-password.png"), QSize(), QIcon::Normal, QIcon::Off);
        m_users->setIcon(icon5);
        m_help = new QAction(mainwindow);
        m_help->setObjectName(QString::fromUtf8("m_help"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/images/buttons/help-contents.png"), QSize(), QIcon::Normal, QIcon::Off);
        m_help->setIcon(icon6);
        centralwidget = new QWidget(mainwindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalLayout->setContentsMargins(0, -1, 0, -1);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
#ifndef Q_OS_MAC
        verticalLayout->setContentsMargins(0, 0, 0, 0);
#endif
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        t_progs = new QTableView(centralwidget);
        t_progs->setObjectName(QString::fromUtf8("t_progs"));
        t_progs->setFrameShape(QFrame::Box);
        t_progs->setAlternatingRowColors(false);
        t_progs->setSelectionMode(QAbstractItemView::SingleSelection);
        t_progs->setSelectionBehavior(QAbstractItemView::SelectRows);
        t_progs->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);
        t_progs->horizontalHeader()->setStretchLastSection(true);
        t_progs->verticalHeader()->setDefaultSectionSize(25);

        verticalLayout->addWidget(t_progs);


        horizontalLayout->addLayout(verticalLayout);

        mainwindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(mainwindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        menu->setTearOffEnabled(false);
        m_edit = new QMenu(menubar);
        m_edit->setObjectName(QString::fromUtf8("m_edit"));
        m_subprogs = new QMenu(m_edit);
        m_subprogs->setObjectName(QString::fromUtf8("m_subprogs"));
        m_info = new QMenu(menubar);
        m_info->setObjectName(QString::fromUtf8("m_info"));
        m_view = new QMenu(menubar);
        m_view->setObjectName(QString::fromUtf8("m_view"));
        m_reports = new QMenu(menubar);
        m_reports->setObjectName(QString::fromUtf8("m_reports"));
        m_settings = new QMenu(menubar);
        m_settings->setObjectName(QString::fromUtf8("m_settings"));
        mainwindow->setMenuBar(menubar);
        statusbar = new QStatusBar(mainwindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        mainwindow->setStatusBar(statusbar);
        dockWidget_5 = new QDockWidget(mainwindow);
        dockWidget_5->setObjectName(QString::fromUtf8("dockWidget_5"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(dockWidget_5->sizePolicy().hasHeightForWidth());
        dockWidget_5->setSizePolicy(sizePolicy1);
        dockWidget_5->setMinimumSize(QSize(69, 47));
        dockWidget_5->setMaximumSize(QSize(160, 10182));
        dockWidget_5->setFeatures(QDockWidget::DockWidgetFloatable|QDockWidget::DockWidgetMovable);
        dockWidget_5->setAllowedAreas(Qt::LeftDockWidgetArea|Qt::RightDockWidgetArea);
        dockWidgetContents_5 = new QWidget();
        dockWidgetContents_5->setObjectName(QString::fromUtf8("dockWidgetContents_5"));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(dockWidgetContents_5->sizePolicy().hasHeightForWidth());
        dockWidgetContents_5->setSizePolicy(sizePolicy2);
        dockWidgetContents_5->setMinimumSize(QSize(0, 0));
        dockWidgetContents_5->setMaximumSize(QSize(160, 16777215));
        verticalLayout_3 = new QVBoxLayout(dockWidgetContents_5);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        dockWidget_5->setWidget(dockWidgetContents_5);
        mainwindow->addDockWidget(static_cast<Qt::DockWidgetArea>(2), dockWidget_5);
        dockWidget_4 = new QDockWidget(mainwindow);
        dockWidget_4->setObjectName(QString::fromUtf8("dockWidget_4"));
        QSizePolicy sizePolicy3(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(dockWidget_4->sizePolicy().hasHeightForWidth());
        dockWidget_4->setSizePolicy(sizePolicy3);
        dockWidget_4->setMinimumSize(QSize(166, 187));
        dockWidget_4->setMaximumSize(QSize(180, 995));
        dockWidget_4->setFeatures(QDockWidget::DockWidgetFloatable|QDockWidget::DockWidgetMovable);
        dockWidget_4->setAllowedAreas(Qt::LeftDockWidgetArea|Qt::RightDockWidgetArea);
        dockWidgetContents_4 = new QWidget();
        dockWidgetContents_4->setObjectName(QString::fromUtf8("dockWidgetContents_4"));
        sizePolicy3.setHeightForWidth(dockWidgetContents_4->sizePolicy().hasHeightForWidth());
        dockWidgetContents_4->setSizePolicy(sizePolicy3);
        dockWidgetContents_4->setMinimumSize(QSize(0, 0));
        dockWidgetContents_4->setMaximumSize(QSize(180, 9999));
        verticalLayout_2 = new QVBoxLayout(dockWidgetContents_4);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        cb_gcomps = new QComboBox(dockWidgetContents_4);
        cb_gcomps->setObjectName(QString::fromUtf8("cb_gcomps"));
        QSizePolicy sizePolicy4(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(cb_gcomps->sizePolicy().hasHeightForWidth());
        cb_gcomps->setSizePolicy(sizePolicy4);
        cb_gcomps->setMinimumSize(QSize(100, 0));
        cb_gcomps->setMaximumSize(QSize(180, 16777215));

        verticalLayout_2->addWidget(cb_gcomps);

        t_comps = new QTableView(dockWidgetContents_4);
        t_comps->setObjectName(QString::fromUtf8("t_comps"));
        QSizePolicy sizePolicy5(QSizePolicy::Minimum, QSizePolicy::Maximum);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(t_comps->sizePolicy().hasHeightForWidth());
        t_comps->setSizePolicy(sizePolicy5);
        t_comps->setMinimumSize(QSize(100, 4));
        t_comps->setMaximumSize(QSize(180, 9999));
        t_comps->horizontalHeader()->setVisible(false);
        t_comps->horizontalHeader()->setStretchLastSection(true);
        t_comps->verticalHeader()->setVisible(false);

        verticalLayout_2->addWidget(t_comps);

        dockWidget_4->setWidget(dockWidgetContents_4);
        mainwindow->addDockWidget(static_cast<Qt::DockWidgetArea>(1), dockWidget_4);
        toolBar = new QToolBar(mainwindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        mainwindow->addToolBar(Qt::TopToolBarArea, toolBar);
        QWidget::setTabOrder(t_progs, cb_gcomps);
        QWidget::setTabOrder(cb_gcomps, t_comps);

        menubar->addAction(menu->menuAction());
        menubar->addAction(m_view->menuAction());
        menubar->addAction(m_edit->menuAction());
        menubar->addAction(m_reports->menuAction());
        menubar->addAction(m_settings->menuAction());
        menubar->addAction(m_info->menuAction());
        menu->addAction(m_exit);
        m_edit->addAction(m_gcomps);
        m_edit->addSeparator();
        m_edit->addAction(m_subprogs->menuAction());
        m_subprogs->addAction(m_gprogs);
        m_subprogs->addSeparator();
        m_subprogs->addAction(m_wlist);
        m_subprogs->addAction(m_blist);
        m_subprogs->addSeparator();
        m_subprogs->addAction(m_hidden);
        m_info->addAction(m_help);
        m_info->addSeparator();
        m_info->addAction(action_11);
        m_view->addAction(m_colors);
        m_view->addAction(m_showhidden);
        m_reports->addAction(m_qreport);
        m_reports->addAction(m_browser);
        m_settings->addAction(m_users);

        retranslateUi(mainwindow);

        QMetaObject::connectSlotsByName(mainwindow);
    } // setupUi

    void retranslateUi(QMainWindow *mainwindow)
    {
        mainwindow->setWindowTitle(QApplication::translate("mainwindow", "Inventory++", 0, QApplication::UnicodeUTF8));
        m_exit->setText(QApplication::translate("mainwindow", "\320\222\321\213\321\205\320\276\320\264", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        m_exit->setStatusTip(QApplication::translate("mainwindow", "\320\222\321\213\320\271\321\202\320\270 \320\270\320\267 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\321\213", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        m_exit->setShortcut(QApplication::translate("mainwindow", "Ctrl+Q", 0, QApplication::UnicodeUTF8));
        m_gcomps->setText(QApplication::translate("mainwindow", "\320\223\321\200\321\203\320\277\320\277\321\213 \320\237\320\232", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        m_gcomps->setStatusTip(QApplication::translate("mainwindow", "\320\240\320\265\320\264\320\260\320\272\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214 \320\263\321\200\321\203\320\277\320\277\321\213 \320\272\320\276\320\274\320\277\321\214\321\216\321\202\320\265\321\200\320\276\320\262", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        action_5->setText(QApplication::translate("mainwindow", "\320\223\321\200\321\203\320\277\320\277\321\213", 0, QApplication::UnicodeUTF8));
        action_7->setText(QApplication::translate("mainwindow", "\320\221\320\265\320\273\321\213\320\271 \321\201\320\277\320\270\321\201\320\276\320\272", 0, QApplication::UnicodeUTF8));
        action_8->setText(QApplication::translate("mainwindow", "\320\247\321\221\321\200\320\275\321\213\320\271 \321\201\320\277\320\270\321\201\320\276\320\272", 0, QApplication::UnicodeUTF8));
        action_9->setText(QApplication::translate("mainwindow", "\320\241\320\277\321\200\320\260\320\262\320\272\320\260", 0, QApplication::UnicodeUTF8));
        action_11->setText(QApplication::translate("mainwindow", "\320\236 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\320\265", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        action_11->setStatusTip(QApplication::translate("mainwindow", "\320\236\321\202\320\272\321\200\321\213\321\202\321\214 \320\276\320\272\320\275\320\276 \"\320\236 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\320\265\"", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        action_11->setWhatsThis(QApplication::translate("mainwindow", "\320\222 \320\264\320\260\320\275\320\275\320\276\320\274 \320\276\320\272\320\275\320\265 \320\262\321\213 \321\201\320\274\320\276\320\266\320\265\321\202\320\265 \321\203\320\267\320\275\320\260\321\202\321\214 \320\261\320\276\320\273\320\265\320\265 \320\277\320\276\320\264\321\200\320\276\320\261\320\275\320\276 \320\276 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\320\265 \320\270 \320\265\321\221 \320\260\320\262\321\202\320\276\321\200\320\265", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        m_gprogs->setText(QApplication::translate("mainwindow", "\320\223\321\200\321\203\320\277\320\277\321\213 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        m_gprogs->setStatusTip(QApplication::translate("mainwindow", "\320\240\320\265\320\264\320\260\320\272\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214 \320\263\321\200\321\203\320\277\320\277\321\213 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        m_wlist->setText(QApplication::translate("mainwindow", "\320\221\320\265\320\273\321\213\320\271 \321\201\320\277\320\270\321\201\320\276\320\272", 0, QApplication::UnicodeUTF8));
        m_blist->setText(QApplication::translate("mainwindow", "\320\247\321\221\321\200\320\275\321\213\320\271 \321\201\320\277\320\270\321\201\320\276\320\272", 0, QApplication::UnicodeUTF8));
        m_colors->setText(QApplication::translate("mainwindow", "\320\246\320\262\320\265\321\202\320\276\320\262\320\260\321\217 \321\201\321\205\320\265\320\274\320\260", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        m_colors->setToolTip(QApplication::translate("mainwindow", "\320\246\320\262\320\265\321\202\320\276\320\262\320\260\321\217 \321\201\321\205\320\265\320\274\320\260", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        m_colors->setStatusTip(QApplication::translate("mainwindow", "\320\222\320\272\320\273\321\216\321\207\320\270\321\202\321\214/\320\276\321\202\320\272\320\273\321\216\321\207\320\270\321\202\321\214 \321\206\320\262\320\265\321\202\320\276\320\262\321\203\321\216 \321\201\321\205\320\265\320\274\321\203 \320\264\320\273\321\217 \320\276\321\201\320\275\320\276\320\262\320\275\320\276\320\271 \321\202\320\260\320\261\320\273\320\270\321\206\321\213", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        m_colors->setWhatsThis(QApplication::translate("mainwindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Bitstream Vera Sans'; font-size:8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\320\224\320\260\320\275\320\275\321\213\320\271 \321\207\320\265\320\272\320\261\320\276\320\272\321\201 \320\262\320\272\320\273\321\216\321\207\320\260\320\265\321\202/\320\276\321\202\320\272\320\273\321\216\321\207\320\260\320\265\321\202 \321\206\320\262\320\265\321\202\320\276\320\262\321\203\321\216 \321\201\321\205\320\265\320\274\321\203 \320\276\321\201\320\275\320\276\320\262\320\275\320\276\320\271 \321\202\320\260\320\261\320\273\320\270\321\206\321\213.</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:"
                        "0px; -qt-block-indent:0; text-indent:0px;\">\320\237\321\200\320\270 \320\262\320\272\320\273\321\216\321\207\320\265\320\275\320\275\320\276\320\271 \321\206\320\262\320\265\321\202\320\276\320\262\320\276\320\271 \321\201\321\205\320\265\320\274\320\265:</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#fff4d7; background-color: #5e5e5e;\">\320\242\320\260\320\272\320\270\320\274 \321\206\320\262\320\265\321\202\320\276\320\274 \320\277\320\276\320\274\320\265\321\207\320\260\321\216\321\202\321\201\321\217 \320\267\320\260\320\277\321\200\320\265\321\211\321\221\320\275\320\275\321\213\320\265 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\321\213.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#d0ffd0; background-color: #5e5e5e;\">\320\242\320\260\320\272\320\270\320\274 \321\206\320"
                        "\262\320\265\321\202\320\276\320\274 \320\277\320\276\320\274\320\265\321\207\320\260\321\216\321\202\321\201\321\217 \321\200\320\260\320\267\321\200\320\265\321\210\321\221\320\275\320\275\321\213\320\265 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\321\213</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#d8d8d8; background-color: #5e5e5e;\">\320\242\320\260\320\272\320\270\320\274 \321\206\320\262\320\265\321\202\320\276\320\274 \320\277\320\276\320\274\320\265\321\207\320\260\321\216\321\202\321\201\321\217 \320\275\320\265\320\271\321\202\321\200\320\260\320\273\321\214\320\275\321\213\320\265 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\321\213</span></p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        m_colors->setShortcut(QApplication::translate("mainwindow", "Alt+C", 0, QApplication::UnicodeUTF8));
        m_qreport->setText(QApplication::translate("mainwindow", "\320\221\321\213\321\201\321\202\321\200\321\213\320\271 \320\276\321\202\321\207\321\221\321\202", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        m_qreport->setStatusTip(QApplication::translate("mainwindow", "\320\241\320\276\320\267\320\264\320\260\321\202\321\214 \320\276\321\202\321\207\321\221\321\202 \320\277\320\276 \320\262\321\213\320\261\321\200\320\260\320\275\320\275\320\276\320\274\321\203 \320\272\320\276\320\274\320\277\321\214\321\216\321\202\320\265\321\200\321\203", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        m_qreport->setShortcut(QApplication::translate("mainwindow", "Ctrl+Q", 0, QApplication::UnicodeUTF8));
        m_browser->setText(QApplication::translate("mainwindow", "\320\237\321\200\320\276\321\201\320\274\320\276\321\202\321\200\321\211\320\270\320\272 \320\276\321\202\321\207\321\221\321\202\320\276\320\262", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        m_browser->setStatusTip(QApplication::translate("mainwindow", "\320\237\321\200\320\276\321\201\320\274\320\276\321\202\321\200\320\265\321\202\321\214 \320\276\321\202\321\207\321\221\321\202\321\213, \321\201\320\276\321\205\321\200\320\260\320\275\321\221\320\275\320\275\321\213\320\265 \320\275\320\260 \320\272\320\276\320\274\320\277\321\214\321\216\321\202\320\265\321\200\320\265", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        m_browser->setShortcut(QApplication::translate("mainwindow", "Ctrl+B", 0, QApplication::UnicodeUTF8));
        m_hidden->setText(QApplication::translate("mainwindow", "\320\241\320\277\320\270\321\201\320\276\320\272 \321\201\320\272\321\200\321\213\321\202\321\213\321\205", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        m_hidden->setStatusTip(QApplication::translate("mainwindow", "\320\240\320\265\320\264\320\260\320\272\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214 \321\201\320\277\320\270\321\201\320\276\320\272 \321\201\320\272\321\200\321\213\321\202\321\213\321\205 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        m_showhidden->setText(QApplication::translate("mainwindow", "\320\237\320\276\320\272\320\260\320\267\321\213\320\262\320\260\321\202\321\214 \321\201\320\272\321\200\321\213\321\202\321\213\320\265", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        m_showhidden->setStatusTip(QApplication::translate("mainwindow", "\320\236\321\202\320\276\320\261\321\200\320\260\320\266\320\260\321\202\321\214/\321\201\320\277\321\200\321\217\321\202\320\260\321\202\321\214 \"\321\201\320\272\321\200\321\213\321\202\321\213\320\265\" \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\321\213", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        m_showhidden->setShortcut(QApplication::translate("mainwindow", "Alt+S", 0, QApplication::UnicodeUTF8));
        m_users->setText(QApplication::translate("mainwindow", "\320\237\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\320\270", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        m_users->setToolTip(QApplication::translate("mainwindow", "\320\240\320\265\320\264\320\260\320\272\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214 \320\277\320\260\321\200\320\276\320\273\320\270 \320\277\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\320\265\320\271", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        m_users->setStatusTip(QApplication::translate("mainwindow", "\320\240\320\265\320\264\320\260\320\272\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214 \320\277\320\260\321\200\320\276\320\273\320\270 \320\277\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\320\265\320\271", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        m_users->setShortcut(QApplication::translate("mainwindow", "Ctrl+U", 0, QApplication::UnicodeUTF8));
        m_help->setText(QApplication::translate("mainwindow", "\320\241\320\276\320\264\320\265\321\200\320\266\320\260\320\275\320\270\320\265", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        m_help->setStatusTip(QApplication::translate("mainwindow", "\320\222\321\213\320\267\320\262\320\260\321\202\321\214 \320\276\320\272\320\275\320\276 \321\201\320\277\321\200\320\260\320\262\320\272\320\270", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        menu->setTitle(QApplication::translate("mainwindow", "\320\244\320\260\320\271\320\273", 0, QApplication::UnicodeUTF8));
        m_edit->setTitle(QApplication::translate("mainwindow", "\320\237\321\200\320\260\320\262\320\272\320\260", 0, QApplication::UnicodeUTF8));
        m_subprogs->setTitle(QApplication::translate("mainwindow", "\320\237\321\200\320\276\320\263\321\200\320\260\320\274\320\274\321\213", 0, QApplication::UnicodeUTF8));
        m_info->setTitle(QApplication::translate("mainwindow", "\320\241\320\277\321\200\320\260\320\262\320\272\320\260", 0, QApplication::UnicodeUTF8));
        m_view->setTitle(QApplication::translate("mainwindow", "\320\222\320\270\320\264", 0, QApplication::UnicodeUTF8));
        m_reports->setTitle(QApplication::translate("mainwindow", "\320\236\321\202\321\207\321\221\321\202\321\213", 0, QApplication::UnicodeUTF8));
        m_settings->setTitle(QApplication::translate("mainwindow", "\320\235\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\270", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        cb_gcomps->setToolTip(QApplication::translate("mainwindow", "\320\223\321\200\321\203\320\277\320\277\321\213 \320\272\320\276\320\274\320\277\321\214\321\216\321\202\320\265\321\200\320\276\320\262", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        cb_gcomps->setWhatsThis(QApplication::translate("mainwindow", "\320\222 \321\215\321\202\320\276\320\274 \321\201\320\277\320\270\321\201\320\272\320\265 \320\277\320\265\321\200\320\265\321\207\320\270\321\201\320\273\320\265\320\275\321\213 \320\263\321\200\321\203\320\277\320\277\321\213 \320\272\320\276\320\274\320\277\321\214\321\216\321\202\320\265\321\200\320\276\320\262", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_TOOLTIP
        t_comps->setToolTip(QApplication::translate("mainwindow", "\320\241\320\277\320\270\321\201\320\276\320\272 \320\272\320\276\320\274\320\277\321\214\321\216\321\202\320\265\321\200\320\276\320\262", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        t_comps->setWhatsThis(QApplication::translate("mainwindow", "\320\255\321\202\320\276 \321\201\320\277\320\270\321\201\320\276\320\272 \320\272\320\276\320\274\320\277\321\214\321\216\321\202\320\265\321\200\320\276\320\262, \320\275\320\260\321\205\320\276\320\264\321\217\321\211\320\270\321\205\321\201\321\217 \320\262 \320\262\321\213\320\261\321\200\320\260\320\275\320\275\320\276\320\271 \320\263\321\200\321\203\320\277\320\277\320\265", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        toolBar->setWindowTitle(QApplication::translate("mainwindow", "toolBar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class mainwindow: public Ui_mainwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
