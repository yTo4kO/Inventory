#include "logo_widget.h"
//#include <QtGui>
#include <QWidget>
#include <QPainter>

logo_widget::logo_widget(QWidget *parent) : QWidget(parent)
{

}

void logo_widget::paintEvent(QPaintEvent*) {
    QPainter painter(this);
    QString img;
#if defined(Q_OS_LINUX)
{
    img="linux";
}
#endif
#if defined(Q_OS_WIN32)
{
    img="windows";
}
#endif
    QPixmap image(":/images/"+img+".png");
    painter.drawPixmap(0,0,image);
}
