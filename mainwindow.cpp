#include "mainwindow.h"
#include "ui_mainwindow.h"

mainwindow::mainwindow(QWidget *parent) :
    QMainWindow(parent),
    m_ui(new Ui::mainwindow)
{
    m_ui->setupUi(this);
    setstyle(getstyle(), this);
    gcompmodel.init(&t_prefix, m_ui->cb_gcomps);
    this->on_cb_gcomps_activated(0);
    progmodel.init(&t_prefix, m_ui->t_progs);
    progmodel.pub=true;
    progmodel.vers=true;
    updatemodel.init(&t_prefix, m_ui->t_progs);
    updatemodel.pub=true;
    osmodel.init(&t_prefix, &t_compinfo);
    t_compinfo.setEditTriggers(QAbstractItemView::NoEditTriggers);
//    updatemodel.vers=true;
//    m_ui->dockWidgetContents_5->
    tr_info.setParent(this->m_ui->dockWidgetContents_5);
    tr_info.setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    tr_info.setMinimumSize(0, 0);
    tr_info.setMaximumSize(160, 9999);
    tr_info.setHeaderHidden(true);
    m_ui->verticalLayout_3->addWidget(&tr_info);
    tr_info.connect(&tr_info, SIGNAL(clicked(QModelIndex)), this, SLOT(on_tr_info_clicked2(QModelIndex)));
//    tr_info.setGeometry(this->m_ui->dockWidgetContents_5->geometry());
//    tr_info
//    this->m_ui->dockWidgetContents_5->setGeometry(m_ui->dockWidgetContents_5->x(), m_ui->dockWidgetContents_5->y(), 500, 300);
//    tr_info.connect(&tr_info, SIGNAL(clicked(Q)
//    tr_info.connect(tr_info, SIGNAL(c
    m_ui->m_gcomps->setEnabled(admin);
    /*QTreeWidgetItem *topitemos = new QTreeWidgetItem(m_ui->tr_info);
    topitemos->setText(0, tr("Операционная система"));
    QTreeWidgetItem *topitemprogs = new QTreeWidgetItem(m_ui->tr_info);
    topitemprogs->setTex+t(0, tr("Программы"));
    QTreeWidgetItem *topitemprogsall= new QTreeWidgetItem;
    topitemprogsall->setText(0, tr("Все"));
    topitemprogs->addChild(topitemprogsall);*/
  /*  QTreeWidgetItem gprogs_list;
    for (int i=0; i<5; i++)
    {
        gprogs_list.setText(0, "5");
        qDebug() << gprogs_list.text(0);
        m_ui->tr_info->addTopLevelItem(&gprogs_list);
    }*/

   /* СМОТРЕТЬ ЗДЕСЬ!!
QList<QTreeWidgetItem *> items;
    for (int i = 0; i < 10; ++i)
    items.append(new QTreeWidgetItem((QTreeWidget*)0, QStringList(QString("item: %1").arg(i))));
    m_ui->tr_info->insertTopLevelItems(0, items);*/

    //ToolBar

    //Print Button
    tb_print.setIcon(QIcon(":/images/buttons/printer.png"));
    tb_print.setText(tr("Быстрый отчёт"));
    tb_print.setToolTip(tr("Быстрый отчёт"));
    m_ui->toolBar->addWidget(&tb_print);
    tb_print.setEnabled(false);
    tb_print.connect(&tb_print, SIGNAL(clicked()), this, SLOT(on_tb_print_clicked()));
    //Report browser Button
    tb_rbrowser.setIcon(QIcon(":/images/buttons/reportbrowser.png"));
    tb_rbrowser.setText(tr("Просмотрщик отчётов"));
    tb_rbrowser.setToolTip(tr("Просмотрщик отчётов"));
    m_ui->toolBar->addWidget(&tb_rbrowser);
    tb_rbrowser.connect(&tb_rbrowser, SIGNAL(clicked()), this, SLOT(on_m_browser_triggered()));
    m_ui->toolBar->addSeparator();
    //Refresh Button
    tb_refresh.setIcon(QIcon(":/images/buttons/refresh.png"));
    tb_refresh.setText(tr("Обновить список"));
    tb_refresh.setToolTip(tr("Обновить список"));
    m_ui->toolBar->addWidget(&tb_refresh);
    tb_refresh.setEnabled(false);
    tb_refresh.connect(&tb_refresh, SIGNAL(clicked()), this, SLOT(on_tb_refresh_clicked()));

    m_ui->m_qreport->setEnabled(false);
    apr_row=1;
    os_row=0;

    /*m_ui->l_os->setVisible(false);
    m_ui->l_sp->setVisible(false);*/
/*    oslabel = new QLabel(this->centralWidget());
    oslabel->setText(  tr("Операционная система:"));
    oslabel->setGeometry(this->centralWidget()->rect().x()+30, this->centralWidget()->rect().y()+15, oslabel->text().length()*7, 10);
    oslabel->setVisible(false);
    splabel = new QLabel(this->centralWidget());
    splabel->setText(  tr("Service Pack:"));
    splabel->setGeometry(this->centralWidget()->rect().x()+30, this->centralWidget()->rect().y()+40, splabel->text().length()*7, 10);
    splabel->setVisible(false);
    verslabel= new QLabel(this->centralWidget());
    verslabel->setText(  tr("Версия:"));
    verslabel->setGeometry(this->centralWidget()->rect().x()+30, this->centralWidget()->rect().y()+65, verslabel->text().length()*7, 10);
    verslabel->setVisible(false);
    userlabel= new QLabel(this->centralWidget());
    userlabel->setText(  tr("Пользователь:"));
    userlabel->setGeometry(this->centralWidget()->rect().x()+30, this->centralWidget()->rect().y()+90, userlabel->text().length()*7, 10);
    userlabel->setVisible(false);
    orglabel= new QLabel(this->centralWidget());
    orglabel->setText(  tr("Организация:"));
    orglabel->setGeometry(this->centralWidget()->rect().x()+30, this->centralWidget()->rect().y()+115, orglabel->text().length()*7, 10);
    orglabel->setVisible(false);
    pathlabel= new QLabel(this->centralWidget());
    pathlabel->setText(  tr("Путь:"));
    pathlabel->setGeometry(this->centralWidget()->rect().x()+30, this->centralWidget()->rect().y()+140, pathlabel->text().length()*7, 10);
    pathlabel->setVisible(false);
    
    oslabelval = new QLabel(this->centralWidget());
    oslabelval->setGeometry(this->centralWidget()->width()+150, this->centralWidget()->rect().y()+15, 150, 10);
    oslabelval->setVisible(false);

    splabelval = new QLabel(this->centralWidget());
    splabelval->setGeometry(this->centralWidget()->width()+150, this->centralWidget()->rect().y()+40, 150, 10);
    splabelval->setVisible(false);

    verslabelval= new QLabel(this->centralWidget());
    verslabelval->setGeometry(this->centralWidget()->width()+150, this->centralWidget()->rect().y()+65, 150, 10);
    verslabelval->setVisible(false);

    userlabelval= new QLabel(this->centralWidget());
    userlabelval->setGeometry(this->centralWidget()->width()+150, this->centralWidget()->rect().y()+90, 150, 10);
    userlabelval->setVisible(false);

    orglabelval= new QLabel(this->centralWidget());
    orglabelval->setGeometry(this->centralWidget()->width()+150, this->centralWidget()->rect().y()+115, 150, 10);
    orglabelval->setVisible(false);

    pathlabelval= new QLabel(this->centralWidget());
    pathlabelval->setGeometry(this->centralWidget()->width()+150, this->centralWidget()->rect().y()+140, 150, 10);
    pathlabelval->setVisible(false);*/
    m_ui->m_users->setEnabled(admin);
    m_ui->m_subprogs->setEnabled(admin);
}

mainwindow::~mainwindow()
{
    delete m_ui;
}

void mainwindow::changeEvent(QEvent *e)
{
    QMainWindow::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        m_ui->retranslateUi(this);
        break;
    default:
        break;
    }
}

void mainwindow::on_m_gcomps_triggered()
{
    int curind;
    curind=m_ui->cb_gcomps->currentIndex();
    gcomps_dialog.exec();
    gcompmodel.refresh();
    m_ui->cb_gcomps->setCurrentIndex(curind);
    while (m_ui->cb_gcomps->currentIndex()==-1)
    {
        curind--;
        m_ui->cb_gcomps->setCurrentIndex(curind);
    }
    this->on_cb_gcomps_activated(curind);
}

void mainwindow::on_cb_gcomps_activated(int index)
{
    gid=gcompmodel.record(index).field(0).value().toString();
    compmodel.init(&t_prefix, m_ui->t_comps);
    compmodel.select(gid);
    cid="";
//    on_tr_info_clicked2(tr_info.currentIndex());
//    this->on_tr_info_clicked2(tr_info.currentIndex());
    tr_info.setEnabled(false);
}

void mainwindow::on_t_comps_clicked(QModelIndex index)
{
    cid=index.sibling(index.row(), 0).data().toString();
    if (!cid.isEmpty())
    {
        tr_info.setEnabled(true);
//        tr_info.setCurrentIndex(tr_info.currentIndex());
        this->on_tr_info_clicked2(tr_info.model()->index(0, 0));
//        this->on_m_colors_triggered();
        progmodel.selectmwcount(cid, gid, &al_count, &bl_count, &wl_count);
        //m_ui->statusbar->font().AllLowercase;
//        qDebug() << bl_count;
        m_ui->statusbar->showMessage(tr("Кол-во установленных программ: ")+al_count+tr("; Кол-во запрещённых программ: ")+bl_count+tr("; Кол-во разрешённых программ: ")+wl_count);
    }
//    progmodel.select(cid, 0);
}

void mainwindow::on_tr_info_clicked2(QModelIndex index)
{
    QStringList list;
    list=tr_info.getCodeItem(index);
    m_ui->m_qreport->setEnabled(false);
    tb_print.setEnabled(false);
    tb_refresh.setEnabled(false);
//    qDebug() << gid;
    m_ui->t_progs->setVisible(true);
    t_compinfo.setVisible(false);
    if (QString("%1").arg(list.value(1)).isEmpty() && list.value(0)=="os")
    {
        m_ui->verticalLayout->addWidget(&t_compinfo);
        m_ui->t_progs->setVisible(false);
        t_compinfo.setVisible(true);
        osmodel.showinfo(cid);
//        m_ui->m_qreport->setEnabled(true);
//        tb_print.setEnabled(true);
//        tb_refresh.setEnabled(true);
    }
    if (QString("%1").arg(list.value(1)).isEmpty() && list.value(0)=="progs")
    {
        progmodel.selectmw(cid, "apr", m_ui->m_showhidden->isChecked(), gid);
        m_ui->m_qreport->setEnabled(true);
        tb_print.setEnabled(true);
        tb_refresh.setEnabled(true);
    }

    if (!QString("%1").arg(list.value(1)).isEmpty() && list.value(0)=="progs")
    {
        progmodel.selectmw(cid, list[1], m_ui->m_showhidden->isChecked(), gid);
        m_ui->m_qreport->setEnabled(true);
        tb_print.setEnabled(true);
        tb_refresh.setEnabled(true);
    }
    if (QString("%1").arg(list.value(1)).isEmpty() && list.value(0)=="updates")
    {
        updatemodel.select(cid, "aupd");
        m_ui->m_qreport->setEnabled(true);
        tb_print.setEnabled(true);
        tb_refresh.setEnabled(true);
    }
    if (!QString("%1").arg(list.value(1)).isEmpty() && list.value(0)=="updates")
    {
        updatemodel.select(cid, list.value(1));
        m_ui->m_qreport->setEnabled(true);
        tb_print.setEnabled(true);
        tb_refresh.setEnabled(true);
    }
}

void mainwindow::on_tr_info_clicked(QModelIndex index)
{
  /*  m_ui->m_qreport->setEnabled(false);
    tb_print.setEnabled(false);

    if (index.parent().row()==apr_row && index.parent().parent().row()==-1)
    {
        progmodel.selectmw(cid, 0, m_ui->m_showhidden->isChecked());
        if (progmodel.rowCount()>0)
        {
            tb_print.setEnabled(true);
            m_ui->m_qreport->setEnabled(true);
        }
        if (!m_ui->t_progs->isVisible()) m_ui->t_progs->setVisible(true);
        oslabel->setVisible(false);
        splabel->setVisible(false);
        verslabel->setVisible(false);
        userlabel->setVisible(false);
        orglabel->setVisible(false);
        pathlabel->setVisible(false);
        oslabelval->setVisible(false);
        splabelval->setVisible(false);
        verslabelval->setVisible(false);
        userlabelval->setVisible(false);
        orglabelval->setVisible(false);
        pathlabelval->setVisible(false);
    }
    if (index.row()==os_row && index.parent().row()==-1)
    {
        QSqlQuery selquery;
        selquery.exec("SELECT os, sp, version, user, organization, path FROM "+t_prefix+"comps WHERE id='"+this->cid+"'");
        selquery.first();
        oslabelval->setText(selquery.value(0).toString());
        splabelval->setText(selquery.value(1).toString());
        verslabelval->setText(selquery.value(2).toString());
        userlabelval->setText(selquery.value(3).toString());
        orglabelval->setText(selquery.value(4).toString());
        pathlabelval->setText(selquery.value(5).toString().replace(":", ":\\"));

        oslabel->setVisible(true);
        splabel->setVisible(true);
        verslabel->setVisible(true);
        userlabel->setVisible(true);
        orglabel->setVisible(true);
        pathlabel->setVisible(true);
        oslabelval->setVisible(true);
        splabelval->setVisible(true);
        verslabelval->setVisible(true);
        userlabelval->setVisible(true);
        orglabelval->setVisible(true);
        pathlabelval->setVisible(true);



        if (m_ui->t_progs->isVisible()) m_ui->t_progs->setVisible(false);
        //qDebug() << "ИНФА ОБ ОС";
    }
    prev_row=index.row();*/
}

void mainwindow::on_tb_print_clicked()
{
    QSqlQuery selquery;
    selquery.exec("SELECT lastupdate FROM "+t_prefix+"comps WHERE id='"+this->cid+"'");
    selquery.first();
    QString file;
    file=mkhtmlreport(&compmodel.record(m_ui->t_comps->currentIndex().row()).field(1).value().toString(),
                 &gcompmodel.record(m_ui->cb_gcomps->currentIndex()).field(1).value().toString(),
                 QDateTime::fromTime_t(selquery.value(0).toInt()).toString("hh:mm:ss dd.MM.yyyy"),
                 &progmodel);
    if (file!="-1")
    {
        PrintDialog printdialog;
        printdialog.showreport(&file, &compmodel.record(m_ui->t_comps->currentIndex().row()).field(1).value().toString());
    }
    else
    {
        QMessageBox error(QMessageBox::Warning, tr("Ошибка"), tr("При генерации отчёта произошла ошибка."), QMessageBox::Ok, this);
        error.exec();
    }
}

void mainwindow::on_tb_refresh_clicked()
{
    on_tr_info_clicked2(tr_info.currentIndex());
}

void mainwindow::savexml()
{
   /* QSqlQuery selquery;
    selquery.exec("SELECT lastupdate FROM "+t_prefix+"comps WHERE id='"+this->cid+"'");
    selquery.first();
    //qDebug() << selquery.value(0).toString();
    QDomDocument doc;
    QDomElement computer = doc.createElement("computer");
    QDomElement name = doc.createElement("name");
    QDomElement group = doc.createElement("group");
    QDomElement update = doc.createElement("lastupdate");
    QDomElement program;
    QDomElement pname;
    QDomElement pversion;
    QDomElement ppublisher;
    QDomText compname = doc.createTextNode(compmodel.record(m_ui->t_comps->currentIndex().row()).field(1).value().toString());
    QDomText groupname = doc.createTextNode(gcompmodel.record(m_ui->cb_gcomps->currentIndex()).field(1).value().toString());
    QDomText updatedatetime = doc.createTextNode(QDateTime::fromTime_t(selquery.value(0).toInt()).toString("hh:mm:ss dd.MM.yyyy"));
    QDomText pname_text;
    QDomText pversion_text;
    QDomText ppublisher_text;

    doc.appendChild(computer);
    computer.appendChild(name);
    computer.appendChild(group);
    computer.appendChild(update);
    name.appendChild(compname);
    group.appendChild(groupname);
    update.appendChild(updatedatetime);
    for (int i=0; i<progmodel.rowCount(); i++)
    {
        program=doc.createElement("program");
        pname=doc.createElement("name");
        pversion=doc.createElement("version");
        ppublisher=doc.createElement("publisher");
        pname_text=doc.createTextNode(progmodel.record(i).value(1).toString());
        pversion_text=doc.createTextNode(progmodel.record(i).value(2).toString());
        ppublisher_text=doc.createTextNode(progmodel.record(i).value(3).toString());
        pname.appendChild(pname_text);
        pversion.appendChild(pversion_text);
        ppublisher.appendChild(ppublisher_text);
        program.appendChild(pname);
        program.appendChild(pversion);
        program.appendChild(ppublisher);
        
        computer.appendChild(program);
    }
   QFile File("new.xml");
   if ( File.open( QIODevice::ReadWrite ) )
   {
      QTextStream TextStream(&File);
      TextStream << doc.toString() ;
      File.close();
   }
   else
   {
        QMessageBox error(QMessageBox::Warning, tr("Ошибка!"), tr("Не удалось сохранить отчёт"), QMessageBox::Ok, this);
        error.exec();
   }
    //qDebug() << doc.toString();
    //doc.save(out, 4);
    QDomDocument *doc = new QDomDocument("MyXML");

    QDomProcessingInstruction instr = doc->createProcessingInstruction("xml","version=\"1.0\" encoding=\"UTF-8\"");
    doc->appendChild(instr);

    QDomElement root = doc->createElement( "COMPUTER" );
    root.setAttribute("NAME", compmodel.record(m_ui->t_comps->currentIndex().row()).field(1).value().toString());
    root.setAttribute("GROUP", gcompmodel.record(m_ui->cb_gcomps->currentIndex()).field(1).value().toString());
    doc->appendChild( root );

    QDomElement node = doc->createElement( "NAME" );
    root.appendChild( node );*/

     /*QDomElement tag = doc->createElement("ACTION");
     node.appendChild( tag );
    */
     //QDomText t = doc->createTextNode( getInptTxt() );
     //tag.appendChild( t );

    //QString xml = doc->toString();
    //return xml;*/
}

void mainwindow::on_t_comps_activated(QModelIndex index)
{
//    if (index.)

}

void mainwindow::on_m_exit_triggered()
{
    this->close();
}

void mainwindow::on_action_11_triggered()
{
    AboutDialog aboutdialog(this);
    aboutdialog.exec();
}

void mainwindow::on_m_gprogs_triggered()
{
    gprogs_dialog.exec();
    tr_info.refresh();
}

void mainwindow::on_action_7_triggered()
{

}

void mainwindow::on_m_wlist_triggered()
{
    ListsDialog listsdialog(0, 1);
    listsdialog.exec();
}

void mainwindow::on_m_blist_triggered()
{
    ListsDialog listsdialog(0, 2);
    listsdialog.exec();
}

void mainwindow::on_m_colors_triggered()
{
    if (m_ui->m_colors->isChecked())
    {
        m_ui->t_progs->setItemDelegate(new TV_Delegate(0, gid));
    }
    else
    {
        m_ui->t_progs->setItemDelegate(new Blank_Delegate);
    }
}

void mainwindow::on_m_qreport_triggered()
{
    on_tb_print_clicked();
}

void mainwindow::on_m_browser_triggered()
{
    browser_dialog = new browser;
    browser_dialog->exec();
}

void mainwindow::on_m_hidden_triggered()
{
    hiddenlist_dialog = new HiddenListDialog;
    hiddenlist_dialog->exec();
}

void mainwindow::on_m_showhidden_triggered()
{
    on_tb_refresh_clicked();
}

void mainwindow::on_m_users_triggered()
{
    users_dialog=new UsersDialog;
    users_dialog->exec();
}

void mainwindow::on_m_help_triggered()
{
    help_dialog = new HelpBrowser("index.html");
    help_dialog->exec();
}
