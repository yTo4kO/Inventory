#ifndef HELPBROWSER_H
#define HELPBROWSER_H

#include <QtGui/QDialog>

#include "styles.h"

namespace Ui {
    class HelpBrowser;
}

class HelpBrowser : public QDialog {
    Q_OBJECT
    Q_DISABLE_COPY(HelpBrowser)
public:
    explicit HelpBrowser(const QString &page,
              QWidget *parent = 0);
    virtual ~HelpBrowser();
    void showPage(const QString &page);
protected:
    virtual void changeEvent(QEvent *e);

private:
    Ui::HelpBrowser *m_ui;

private slots:
    void on_tb_exit_clicked();
    void on_tb_home_clicked();
    void on_tb_back_clicked();
    void updateCaption();
};

#endif // HELPBROWSER_H
