#include "dbsdialog.h"
#include "ui_dbsdialog.h"
#include <QTest>

QString tables;
QString identificator;

dbsdialog::dbsdialog(QWidget *parent)
    : QDialog(parent), ui(new Ui::dbsdialog)
{

    ui->setupUi(this);
    getstyles(this->ui->cb_styles);
    this->ui->cb_styles->setCurrentIndex(this->ui->cb_styles->findText(getstyle()));
    setstyle(getstyle(), this);
    logo.setObjectName(QString::fromUtf8("logo"));
    logo.setMinimumSize(QSize(24, 0));
    logo.setMaximumSize(QSize(100, 100));
    ui->verticalLayout->insertWidget(2, &logo);
    dbsettingsini settings;
    settings.update_list(this->ui->l_db);
}

dbsdialog::~dbsdialog()
{
    delete ui;
}

bool dbsdialog::checkserv()
{
    if (this->ui->l_db->currentIndex().isValid())
    {
        return true;
    }
    else
    {
        QMessageBox error(QMessageBox::Warning, tr("Ошибка"), tr("Выберите сервер из списка"), QMessageBox::Ok, this);
        error.exec();
        return false;
    }
}

//Добавление сервера
void dbsdialog::on_b_add_clicked()
{
    dbeditdialog DbEditDialog;
    DbEditDialog.editing=false;
    DbEditDialog.setWindowTitle(tr("Добавить сервер"));
    DbEditDialog.exec();
    dbsettingsini settings;
    settings.update_list(this->ui->l_db);
}

//Редактирование сервер
void dbsdialog::on_b_edit_clicked()
{
    if (this->ui->l_db->currentIndex().isValid())
    {
        dbeditdialog DbEditDialog;
        DbEditDialog.editing=true;
        DbEditDialog.setWindowTitle(tr("Редактировать сервер"));
        DbEditDialog.edit_db(this->ui->l_db->currentItem()->text());
        dbsettingsini settings;
        settings.update_list(this->ui->l_db);
    }
    else
    {
        QMessageBox error(QMessageBox::Warning, tr("Ошибка"), tr("Выберите сервер из списка"), QMessageBox::Ok, this);
        error.exec();
    }
}

//Удаление сервера
void dbsdialog::on_b_del_clicked()
{
    if (checkserv()==true)
    {
        QMessageBox confirm_del(QMessageBox::Warning, tr("Внимание"), tr("Вы уверены, что хотите удалить сервер '%1' из списка?").arg(this->ui->l_db->currentItem()->text()), QMessageBox::Ok | QMessageBox::Cancel, this);
        int answer=confirm_del.exec();
        if (answer==QMessageBox::Ok)
        {
            dbsettingsini settings;
            settings.del_db(&this->ui->l_db->currentItem()->text());
            settings.update_list(this->ui->l_db);
        }
    }
}

void dbsdialog::on_l_db_doubleClicked(QModelIndex index)
{
    this->on_b_edit_clicked();
}

//Выход
void dbsdialog::on_b_cancel_clicked()
{
    this->close();
}

//Подключение
void dbsdialog::on_b_connect_clicked()
{
    if (checkserv()==true)
    {
        bool savepass, ok;
        dbsettingsini settings;

        QString namee, host, db, user, pass, name, ident;
        name=this->ui->l_db->currentItem()->text();
        settings.getdb(&name, &namee, &host, &db, &user, &pass, &ident, &savepass);
        ok=true;
        if (savepass==false)
        {
            pass = QInputDialog::getText(this, tr("Введите пароль"), tr("Пароль:"), QLineEdit::Password, "", &ok);
        }
        if (ok)
        {
            QPixmap splash_pix(":/images/splash.png");
            QSplashScreen *splash = new QSplashScreen(splash_pix);
            splash->show();
            splash->showMessage(tr("Подключение к базе данных"), Qt::AlignBottom | Qt::AlignRight, QColor("white"));
            this->hide();
            QTest::qWait(10);
            identificator=ident;
            if (conencttodb(&host, &db, &user, &pass, &ident))
            {
                this->close();
                selectuserdialog SelectUserDialog;
                splash->hide();
                SelectUserDialog.exec();
            }
            else
            {
                QMessageBox message(QMessageBox::Warning, tr("Ошибка!"), tr("Не удалось подключиться к серверу '%1'").arg(name), QMessageBox::Ok, this);
                message.exec();
                splash->hide();
                this->show();
                //this->setEnabled(true);
            }
        }
    }
}

void dbsdialog::on_cb_styles_activated(QString )
{
    setstyle(this->ui->cb_styles->currentText(), this);
}

void dbsdialog::on_b_installdb_clicked()
{
    if (checkserv()==true)
    {
        bool savepass, ok;
        dbsettingsini settings;

        QString namee, host, db, user, pass, name, ident;
        name=this->ui->l_db->currentItem()->text();
        settings.getdb(&name, &namee, &host, &db, &user, &pass, &ident, &savepass);
        ok=true;
        if (savepass==false)
        {
            pass = QInputDialog::getText(this, tr("Введите пароль"), tr("Пароль:"), QLineEdit::Password, "", &ok);
        }
        if (ok)
        {
            if (conencttodb(&host, &db, &user, &pass, &ident))
            {
                QMessageBox *message;
                QSqlQuery query("SHOW TABLES;");
                if (query.size()==tables.toInt())
                {
                    message=new QMessageBox(QMessageBox::Warning, tr("Внимание"), tr("Внимание, количество таблиц в базе данных '%1' соответствует норме. При нажатии кнопки 'Ok' вся информация в данной БД будет удалена и таблицы будут пересозданы.<br>Вы уверены?").arg(name), QMessageBox::Ok | QMessageBox::Cancel, this);

                }
                else
                {
                    message=new QMessageBox(QMessageBox::Warning, tr("Внимание"), tr("Внимание, количество таблиц в базе данных '%1' не соответствует норме, возможно база повреждена. Настоятельно рекомендуется её переустановить. Внимание: все данные будут удалены! <br>Вы уверены?").arg(name), QMessageBox::Ok | QMessageBox::Cancel, this);
                }
                if (message->exec()==QMessageBox::Ok)
                {
                    reinstalldb();
                }
            }
            else
            {
                QMessageBox message(QMessageBox::Warning, tr("Ошибка!"), tr("Не удалось подключиться к серверу '%1'").arg(name), QMessageBox::Ok, this);
                message.exec();
            }
        }
    }
}

void dbsdialog::reinstalldb()
{
    QSqlQuery load_dump;
    QFile dump_file(apppath+"dump.sql");
    if ( dump_file.open(QIODevice::ReadOnly) )
    {
        QTextStream textStream(&dump_file);
        load_dump.exec(textStream.readAll());
//        qDebug() << load_dump.lastQuery();
    }
}
