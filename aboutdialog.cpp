#include "aboutdialog.h"
#include "ui_aboutdialog.h"

AboutDialog::AboutDialog(QWidget *parent) :
    QDialog(parent),
    m_ui(new Ui::AboutDialog)
{
    m_ui->setupUi(this);
    //*logo
    logo.setObjectName(QString::fromUtf8("logo"));
    logo.setMinimumSize(QSize(24, 0));
    logo.setMaximumSize(QSize(100, 100));
    logo.setGeometry(10, 5, 100, 100);
    logo.setParent(this);
    logo.setVisible(true);

    QUrl url;
    url="./GPL2";
    m_ui->license->setSource(url);
}

AboutDialog::~AboutDialog()
{
    delete m_ui;
}

void AboutDialog::changeEvent(QEvent *e)
{
    QDialog::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        m_ui->retranslateUi(this);
        break;
    default:
        break;
    }
}
