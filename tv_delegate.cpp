#include "tv_delegate.h"

//TV_Delegate::TV_Delegate()
//{
//}

void TV_Delegate::paint(QPainter *painter, const QStyleOptionViewItem &option,
                          const QModelIndex &index) const
{
    QString val;
    //Orange color - deny
    QLinearGradient orangegrad(QPointF(0, 0), QPointF(0, 1));
    orangegrad.setCoordinateMode(QLinearGradient::ObjectBoundingMode);
//    orangegrad.setColorAt(0, QColor(214, 150, 39));
//    orangegrad.setColorAt(0.5, QColor(240, 197, 123));
    orangegrad.setColorAt(0, QColor(255, 244, 215));
    orangegrad.setColorAt(0.5, QColor(255, 243, 234));
    orangegrad.setColorAt(1, QColor(255, 244, 215));
    QLinearGradient orangegrad_a(QPointF(0, 0), QPointF(0, 1));
    orangegrad_a.setCoordinateMode(QLinearGradient::ObjectBoundingMode);
    orangegrad_a.setColorAt(0, QColor(214, 150, 39, 120));
    orangegrad_a.setColorAt(0.5, QColor(240, 197, 123, 120));
    orangegrad_a.setColorAt(1, QColor(214, 150, 39, 120));
    //Green color - accept
    QLinearGradient greengrad(QPointF(0, 0), QPointF(0, 1));
    greengrad.setCoordinateMode(QLinearGradient::ObjectBoundingMode);
//    greengrad.setColorAt(0, QColor(135, 220, 52));
    greengrad.setColorAt(0, QColor(208, 255, 206));
    greengrad.setColorAt(0.5, QColor(231, 255, 229));
//    greengrad.setColorAt(0.5, QColor(198, 244, 152));
    greengrad.setColorAt(1, QColor(208, 255, 206));
    QLinearGradient greengrad_a(QPointF(0, 0), QPointF(0, 1));
    greengrad_a.setCoordinateMode(QLinearGradient::ObjectBoundingMode);
    greengrad_a.setColorAt(0, QColor(135, 220, 52, 170));
    greengrad_a.setColorAt(0.5, QColor(198, 244, 152, 170));
    greengrad_a.setColorAt(1, QColor(135, 220, 52, 170));
    //Grey color - normal
    QLinearGradient greygrad(QPointF(0, 0), QPointF(0, 1));
    greygrad.setCoordinateMode(QLinearGradient::ObjectBoundingMode);
    greygrad.setColorAt(0, QColor(216, 216, 216));
    greygrad.setColorAt(0.5, QColor(243, 243, 243));
    greygrad.setColorAt(1, QColor(216, 216, 216));
    QLinearGradient greygrad_a(QPointF(0, 0), QPointF(0, 1));
    greygrad_a.setCoordinateMode(QLinearGradient::ObjectBoundingMode);
    greygrad_a.setColorAt(0, QColor(216, 216, 216, 100));
    greygrad_a.setColorAt(0.5, QColor(243, 243, 243, 100));
    greygrad_a.setColorAt(1, QColor(216, 216, 216, 100));
    QBrush brush_orange(orangegrad);
    QBrush brush_orange_a(orangegrad_a);
    QBrush brush_green(greengrad);
    QBrush brush_green_a(greengrad_a);
    QBrush brush_grey(greygrad);
    QBrush brush_grey_a(greygrad_a);
    if (qVariantCanConvert<QString>(index.data()))
    {
        val = qVariantValue<QString>(index.data());

    }
//    qDebug() << val;
    QModelIndex blackindex = index.model()->index(index.row(), 1, index.parent());
    QModelIndex whiteindex = index.model()->index(index.row(), 2, index.parent());
    if (option.state & QStyle::State_Selected)
    {
        painter->fillRect(option.rect, brush_grey_a);
        if (index.model()->data(blackindex, Qt::DisplayRole).toString()==cgid)
            painter->fillRect(option.rect, brush_orange_a);
        if (index.model()->data(whiteindex, Qt::DisplayRole).toString()==cgid)
            painter->fillRect(option.rect, brush_green_a);
        painter->drawText(option.rect, Qt::AlignVCenter, val);
    }
    else
    {
        if (!val.isNull() && option.state)
        {
            painter->fillRect(option.rect, brush_grey);
//            if (index.model()->data(testindex, Qt::DisplayRole).toString()
//            qDebug() << index.model()->data(testindex, Qt::DisplayRole).toString();
            if (index.model()->data(blackindex, Qt::DisplayRole).toString()==cgid)
                painter->fillRect(option.rect, brush_orange);
            if (index.model()->data(whiteindex, Qt::DisplayRole).toString()==cgid)
                painter->fillRect(option.rect, brush_green);
            painter->drawText(option.rect, Qt::AlignVCenter, val);
        }
        else
            QItemDelegate::paint(painter, option, index);
    }
}

