#include "selectuserdialog.h"
#include "ui_selectuserdialog.h"

QString t_prefix;
bool admin;

selectuserdialog::selectuserdialog(QWidget *parent) :
    QDialog(parent),
    m_ui(new Ui::selectuserdialog)
{
    m_ui->setupUi(this);
    setstyle(getstyle(), this);
    QSqlQuery q_listusers("SELECT * FROM "+t_prefix+"users");
    while (q_listusers.next())
    {
        this->m_ui->cb_user->addItem(q_listusers.value(1).toString());
    }
}

selectuserdialog::~selectuserdialog()
{
    delete m_ui;
}

void selectuserdialog::changeEvent(QEvent *e)
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

void selectuserdialog::on_buttonBox_clicked(QAbstractButton* button)
{
    if (button->text()=="OK")
    {
        //Вход пользователя
        QString user, pass;
        user=this->m_ui->cb_user->currentText();
        pass=this->m_ui->e_pass->text();
        QByteArray ba_pass(pass.toAscii().data());
        QByteArray md5password = QCryptographicHash::hash(ba_pass, QCryptographicHash::Md5);
        QSqlQuery checkuser("SELECT user, password, admin FROM "+t_prefix+"users WHERE user='"+user+"' AND password='"+md5password.toHex()+"'");
        if (checkuser.size()>0)
        {
            checkuser.first();
            admin=checkuser.value(2).toBool();

            //qDebug() << md5password.toHex();
            this->close();
            mainwindow *MainWindow=new mainwindow();
            MainWindow->show();
        }
        else
        {
            QMessageBox message(QMessageBox::Warning, tr("Ошибка авторизации"), tr("Ошибка при входе"), QMessageBox::Ok, this);
            message.exec();
        }
    }
    else
    {
        this->close();
    }
}
