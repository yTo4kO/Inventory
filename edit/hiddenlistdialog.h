#ifndef HIDDENLISTDIALOG_H
#define HIDDENLISTDIALOG_H

#include <QtGui/QDialog>
#include <QAbstractButton>
#include <QSqlQueryModel>
#include <QMessageBox>

#include "../styles.h"
#include "prog_model.h"
#include "../connect.h"
namespace Ui {
    class HiddenListDialog;
}

class HiddenListDialog : public QDialog {
    Q_OBJECT
    Q_DISABLE_COPY(HiddenListDialog)
public:
    explicit HiddenListDialog(QWidget *parent = 0);
    virtual ~HiddenListDialog();

protected:
    virtual void changeEvent(QEvent *e);

private:
    Ui::HiddenListDialog *m_ui;
    prog_model unhprogsmodel;
    prog_model hprogsmodel;
    QString pid;

private slots:
    void on_b_unhide_clicked();
    void on_b_hide_clicked();
    void on_buttonBox_clicked(QAbstractButton* button);
};

#endif // HIDDENLISTDIALOG_H
