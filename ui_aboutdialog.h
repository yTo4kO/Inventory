/********************************************************************************
** Form generated from reading UI file 'aboutdialog.ui'
**
** Created: Fri Mar 19 23:54:14 2010
**      by: Qt User Interface Compiler version 4.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTDIALOG_H
#define UI_ABOUTDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_AboutDialog
{
public:
    QTextBrowser *license;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QDialog *AboutDialog)
    {
        if (AboutDialog->objectName().isEmpty())
            AboutDialog->setObjectName(QString::fromUtf8("AboutDialog"));
        AboutDialog->resize(350, 340);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(AboutDialog->sizePolicy().hasHeightForWidth());
        AboutDialog->setSizePolicy(sizePolicy);
        AboutDialog->setMinimumSize(QSize(350, 340));
        AboutDialog->setMaximumSize(QSize(350, 340));
        license = new QTextBrowser(AboutDialog);
        license->setObjectName(QString::fromUtf8("license"));
        license->setGeometry(QRect(5, 135, 341, 201));
        license->setSearchPaths(QStringList());
        label = new QLabel(AboutDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 110, 101, 16));
        QFont font;
        font.setPointSize(12);
        font.setBold(false);
        font.setWeight(50);
        font.setKerning(true);
        font.setStyleStrategy(QFont::PreferAntialias);
        label->setFont(font);
        label->setTextFormat(Qt::AutoText);
        label->setWordWrap(false);
        label_2 = new QLabel(AboutDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(120, 5, 221, 121));
        label_2->setTextFormat(Qt::AutoText);
        label_2->setScaledContents(false);
        label_2->setWordWrap(true);

        retranslateUi(AboutDialog);

        QMetaObject::connectSlotsByName(AboutDialog);
    } // setupUi

    void retranslateUi(QDialog *AboutDialog)
    {
        AboutDialog->setWindowTitle(QApplication::translate("AboutDialog", "\320\236 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\320\265", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("AboutDialog", "Inentory++", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("AboutDialog", "\320\237\321\200\320\276\320\263\321\200\320\260\320\274\320\274\320\260 \321\201\320\276\320\267\320\264\320\260\320\275\320\260 \321\201\321\202\321\203\320\264\320\265\320\275\321\202\320\276\320\274 4-\320\263\320\276 \320\272\321\203\321\200\321\201\320\260 \320\232\321\200\320\260\321\201\320\275\320\276\321\217\321\200\321\201\320\272\320\276\320\263\320\276 \320\242\320\265\321\205\320\275\320\270\320\272\321\203\320\274\320\260 \320\230\320\275\321\204\320\276\321\200\320\274\320\260\321\202\320\270\320\272\320\270 \320\270 \320\222\321\213\321\207\320\270\321\201\320\273\320\270\321\202\320\265\320\273\321\214\320\275\320\276\320\271 \320\242\320\265\321\205\320\275\320\270\320\272\320\270 \320\232\320\260\320\273\320\260\321\210\320\275\320\270\320\272\320\276\320\262\321\213\320\274 \320\255\320\264\321\203\320\260\321\200\320\264\320\276\320\274. \320\237\321\200\320\276\320\263\321\200\320\260\320\274\320\274\320\260 \320\277\321\200\320\265\320\264\320\275\320\260\320\267\320\275\320\260\321\207"
                        "\320\265\320\275\320\260 \320\264\320\273\321\217 \320\270\320\275\320\262\320\265\320\275\321\202\320\260\321\200\320\270\320\267\320\260\321\206\320\270\320\270 \320\237\320\236, \321\203\321\201\321\202\320\260\320\275\320\276\320\262\320\273\320\265\320\275\320\276\320\263\320\276 \320\275\320\260 \320\237\320\232. \320\236\320\275\320\260 \320\261\321\203\320\264\320\265\321\202 \321\201\320\273\321\203\320\266\320\270\321\202\321\214 \320\222\320\260\320\274 \320\262\320\265\321\200\320\276\320\271 \320\270 \320\277\321\200\320\260\320\262\320\264\320\276\320\271 \320\275\320\260 \320\277\321\200\320\276\321\202\321\217\320\266\320\265\320\275\320\270\320\270 \320\274\320\275\320\276\320\263\320\270\321\205 \321\202\321\213\321\201\321\217\321\207\320\270\320\273\320\265\321\202\320\270\320\271.", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class AboutDialog: public Ui_AboutDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTDIALOG_H
