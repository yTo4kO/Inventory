#include "printtableview.h"

PrintTableView::PrintTableView()
{
}

void PrintTableView::printTable(QPainter* painter, QTableView *view)
{
QPixmap pixmap;
pixmap.grabWidget(view);
pixmap.save("1.png");
/*const int rows = model()->rowCount();
const int columns = model()->columnCount();

double totalWidth = 0.0;
double totalPageHeight = 0.0;
double totalHeight = 0.0;
for (int c = 0; c < columns; ++c)
{
totalWidth += columnWidth(c);
}

for (int p = 0; p < 45; ++p)
{
totalPageHeight += rowHeight(p);
}

for (int r = 0; r<rows; ++r)
{
totalHeight += rowHeight(r);
}

const double xscale = area.width() / totalWidth;
const double yscale = area.height() / totalHeight;
const double pscale = area.height() / totalPageHeight;

painter->scale(xscale, yscale);
painter->translate(area.x() + xscale, area.y() + pscale);
painter->save();

bool ok;
int x=0;

for (int r = 0; r < rows; ++r) {
++x;
for (int c = 0; c < columns; ++c) {
QModelIndex idx = model()->index(r,c);
QStyleOptionViewItem option = viewOptions();
option.rect = visualRect(idx);
itemDelegate()->paint(painter, option, idx);
}
if (x == 45)
{
ok = printer->newPage();
x = 0;
painter->restore();
}
}*/
}


QStyleOptionViewItem PrintTableView::viewOptions() const
{
QStyleOptionViewItem option = QAbstractItemView::viewOptions();
return option;
}
