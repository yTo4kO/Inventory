#ifndef TV_DELEGATE_H
#define TV_DELEGATE_H

#include <QItemDelegate>
#include <QPainter>
#include <QDebug>
#include <QLinearGradient>
#include <QBrush>
#include <QRgb>

class TV_Delegate : public QItemDelegate

{
    Q_OBJECT
public:
//    TV_Delegate();
    TV_Delegate(QWidget *parent = 0, QString cgid=0) : QItemDelegate(parent) { this->cgid=cgid; }
    void paint(QPainter *painter, const QStyleOptionViewItem &option,
                const QModelIndex &index) const;
    QString cgid;
};

#endif // TV_DELEGATE_H
