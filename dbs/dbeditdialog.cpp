#include "dbeditdialog.h"
#include "ui_dbeditdialog.h"

dbeditdialog::dbeditdialog(QWidget *parent) :
    QDialog(parent),
    m_ui(new Ui::dbeditdialog)
{
    m_ui->setupUi(this);
    setstyle(getstyle(), this);
}

dbeditdialog::~dbeditdialog()
{
    delete m_ui;
}

void dbeditdialog::changeEvent(QEvent *e)
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

void dbeditdialog::edit_db(QString name)
{

    bool savepass;
    dbsettingsini settings;
    QString namee, host, db, user, pass, ident;
    settings.getdb(&name, &namee, &host, &db, &user, &pass, &ident, &savepass);
    this->m_ui->e_name->setText(namee);
    this->orname=namee;
    this->m_ui->e_host->setText(host);
    m_ui->e_ident->setText(ident);
    this->m_ui->e_db->setText(db);
    this->m_ui->e_user->setText(user);
    this->m_ui->e_pass->setText(pass);
    this->m_ui->c_savepass->setChecked(savepass);
    this->exec();
}

void dbeditdialog::on_c_savepass_toggled(bool checked)
{
        this->m_ui->e_pass->setEnabled(checked);
        this->m_ui->e_pass->clear();
}

void dbeditdialog::on_b_okcancel_accepted()
{

}

void dbeditdialog::on_b_okcancel_clicked(QAbstractButton* button)
{
    if (button->text()=="OK")
    {
        int res;
        dbsettingsini settings;
        //if (this->editing==false)
        //{
            this->setWindowTitle(tr("Добавить север"));
            res=settings.setdb(&this->orname, &m_ui->e_name->text(), &m_ui->e_host->text(), &m_ui->e_db->text(), &m_ui->e_user->text(), &m_ui->e_pass->text(), &m_ui->e_ident->text(), m_ui->c_savepass->isChecked(),  this->editing);
            QString errortext;
            if (res!=-1 && res!=5 && res!=0)
            {
                switch (res)
                {
                    case 1: errortext=tr("Код ошибки %1: Вы не ввели название сервера"); break;
                    case 2: errortext=tr("Код ошибки %1: Вы не ввели адрес сервера"); break;
                    case 3: errortext=tr("Код ошибки %1: Вы не ввели базу данных"); break;
                    case 4: errortext=tr("Код ошибки %1: Вы не ввели пользователя"); break;
                    case 6: errortext=tr("Код ошибки %1: Сервер с таким названием уже существует"); break;
                }
                QMessageBox error(QMessageBox::Warning, tr("Ошибка"), errortext.arg(res), QMessageBox::Ok, this);
                error.exec();
            }
            else if(res==5 && this->m_ui->c_savepass->isChecked()==true)
            {
                QMessageBox error(QMessageBox::Warning, tr("Внимание"), tr("Вы не ввели пароль"), QMessageBox::Ok, this);
                error.exec();
                this->close();
            }
            else if(res==0)
            {
                QMessageBox error(QMessageBox::Warning, tr("Внимание"), tr("Вы не ввели идентификатор. Он будет сгенерирован автоматически"), QMessageBox::Ok, this);
                error.exec();
                this->close();
            }
            else this->close();

        //}
        /*else
        {

        }*/
    }
    else this->close();
}

void dbeditdialog::on_c_savepass_clicked()
{

}
