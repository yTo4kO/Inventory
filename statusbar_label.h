#ifndef STATUSBAR_LABEL_H
#define STATUSBAR_LABEL_H

#include <QWidget>
#include <QPainter>
#include <QDebug>

class StatusBar_Label : public QWidget
{
    Q_OBJECT
public:
    StatusBar_Label(QWidget *parent = 0);
    void paintEvent(QPaintEvent*);
};

#endif // STATUSBAR_LABEL_H
