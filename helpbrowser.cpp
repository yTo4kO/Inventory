#include "helpbrowser.h"
#include "ui_helpbrowser.h"

HelpBrowser::HelpBrowser(const QString &page,
              QWidget *parent) :
    QDialog(parent),
    m_ui(new Ui::HelpBrowser)
{
    m_ui->setupUi(this);
    setAttribute(Qt::WA_DeleteOnClose, true);
    this->setWindowFlags(Qt::Widget);
    setstyle(getstyle(), this);
    m_ui->help_browser->setSearchPaths((QStringList)"help/");
    m_ui->help_browser->setSource(page);
    connect(m_ui->help_browser, SIGNAL(sourceChanged(QUrl)), this, SLOT(updateCaption()));
    updateCaption();
}

HelpBrowser::~HelpBrowser()
{
    delete m_ui;
}

void HelpBrowser::changeEvent(QEvent *e)
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

void HelpBrowser::showPage(const QString &page)
{

}

void HelpBrowser::updateCaption()
{
    this->setWindowTitle(tr("Справка: %1").arg(m_ui->help_browser->documentTitle()));
}

void HelpBrowser::on_tb_back_clicked()
{
    m_ui->help_browser->backward();
}

void HelpBrowser::on_tb_home_clicked()
{
    QString page="index.html";
    m_ui->help_browser->setSource(page);
}

void HelpBrowser::on_tb_exit_clicked()
{
    this->close();
}
