#include "usersdialog.h"
#include "ui_usersdialog.h"

UsersDialog::UsersDialog(QWidget *parent) :
    QDialog(parent),
    m_ui(new Ui::UsersDialog)
{
    m_ui->setupUi(this);
    this->setWindowFlags(Qt::Widget);
    setstyle(getstyle(), this);
    QSqlQuery q_listusers("SELECT * FROM "+t_prefix+"users");
    while (q_listusers.next())
    {
        this->m_ui->cb_users->addItem(q_listusers.value(1).toString());
    }
}

UsersDialog::~UsersDialog()
{
    delete m_ui;
}

void UsersDialog::changeEvent(QEvent *e)
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

void UsersDialog::on_b_quit_clicked()
{
    this->close();
}

void UsersDialog::on_b_apply_clicked()
{
    if (!m_ui->e_newpass->text().isEmpty() && !m_ui->e_oldpass->text().isEmpty() && !m_ui->e_rnewpass->text().isEmpty())
    {
        QString user, oldpass;
        user=this->m_ui->cb_users->currentText();
        oldpass=this->m_ui->e_oldpass->text();
        QByteArray ba_pass(oldpass.toAscii().data());
        QByteArray oldmd5password = QCryptographicHash::hash(ba_pass, QCryptographicHash::Md5);
        QSqlQuery checkuser("SELECT id, user, password FROM "+t_prefix+"users WHERE user='"+user+"' AND password='"+oldmd5password.toHex()+"'");
        if (checkuser.size()>0)
        {
            QString userid;
            checkuser.first();
            userid=checkuser.value(0).toString();
//            qDebug() << md5password.toHex();
            if (m_ui->e_newpass->text()==m_ui->e_rnewpass->text())
            {
                QString newpass;
                newpass=m_ui->e_newpass->text();
                QByteArray new_ba_pass(newpass.toAscii().data());
                QByteArray newmd5password = QCryptographicHash::hash(new_ba_pass, QCryptographicHash::Md5);
                QSqlQuery setpass("UPDATE "+t_prefix+"users SET password='"+newmd5password.toHex()+"' WHERE id='"+userid+"'");
                m_ui->e_newpass->clear(); m_ui->e_oldpass->clear(); m_ui->e_rnewpass->clear();
                QMessageBox message(QMessageBox::Information, tr("Смена пароля"), tr("Пароль для пользователя '%1' был успешно изменён").arg(user), QMessageBox::Ok, this);
                message.exec();
            }
            else
            {
                QMessageBox message(QMessageBox::Warning, tr("Ошибка"), tr("Проверьте правильность ввода нового пароля в обоих полях"), QMessageBox::Ok, this);
                message.exec();
            }
        }
        else
        {
            QMessageBox message(QMessageBox::Warning, tr("Ошибка"), tr("Вы ввели неправильный старый пароль"), QMessageBox::Ok, this);
            message.exec();
        }
    }
    else
    {
        QMessageBox message(QMessageBox::Warning, tr("Ошибка"), tr("Вы не заполнили одно из полей"), QMessageBox::Ok, this);
        message.exec();
    }
}
