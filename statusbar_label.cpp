#include "statusbar_label.h"

StatusBar_Label::StatusBar_Label(QWidget *parent) : QWidget(parent)
{
}

void StatusBar_Label::paintEvent(QPaintEvent*) {
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
