#ifndef BROWSER_H
#define BROWSER_H

#include <QtGui/QDialog>
#include <QTreeWidget>
#include <QButtonGroup>
#include <QDebug>
#include <QMessageBox>
#include <QPrinter>
#include <QPrintDialog>

#include "../styles.h"
#include "../user.h"
#include "reportstreewidget.h"

namespace Ui {
    class browser;
}

class browser : public QDialog {
    Q_OBJECT
    Q_DISABLE_COPY(browser)
public:
    explicit browser(QWidget *parent = 0);
    virtual ~browser();

protected:
    virtual void changeEvent(QEvent *e);

private:
    Ui::browser *m_ui;
    ReportsTreeWidget tr_comps;
    QString reportfile;

private slots:
    void on_b_help_clicked();
    void on_b_print_clicked();
    void on_b_fcancel_clicked();
    void on_b_fapply_clicked();
    void on_rb_byname_toggled(bool checked);
    void on_rb_bydate_toggled(bool checked);
    void on_b_quit_clicked();
    void on_tr_comps_clicked(QModelIndex index);
};

#endif // BROWSER_H
