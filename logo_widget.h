#ifndef LOGO_WIDGET_H
#define LOGO_WIDGET_H
//#include <QComboBox>
#include <QWidget>

class logo_widget : public QWidget
{
    Q_OBJECT

public:
    logo_widget(QWidget *parent = 0);
    //~logo_widget();
    void paintEvent(QPaintEvent*);

};

 #endif
