#ifndef DBEDITDIALOG_H
#define DBEDITDIALOG_H

#include <QtGui/QDialog>
#include <QAbstractButton>
#include <QMessageBox>

#include "dbsettingsini.h"
#include "../dbsdialog.h"
#include "styles.h"

namespace Ui {
    class dbeditdialog;
}

class dbeditdialog : public QDialog {
    Q_OBJECT
    Q_DISABLE_COPY(dbeditdialog)
public:
    explicit dbeditdialog(QWidget *parent = 0);
    virtual ~dbeditdialog();
    void edit_db(QString name);
    bool editing;
    QString orname;

protected:
    virtual void changeEvent(QEvent *e);

private:
    Ui::dbeditdialog *m_ui;

private slots:
    void on_c_savepass_clicked();
    void on_b_okcancel_clicked(QAbstractButton* button);
    void on_b_okcancel_accepted();
    void on_c_savepass_toggled(bool checked);
};

#endif // DBEDITDIALOG_H
