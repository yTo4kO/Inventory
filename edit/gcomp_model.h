#ifndef GCOMP_MODEL_H
#define GCOMP_MODEL_H

#include <QSqlQueryModel>
#include <QListView>
#include <QComboBox>

class gcomp_model : public QSqlQueryModel
{
public:
    gcomp_model();
    void init(QString *prefix, QListView *view);
    void init(QString *prefix, QComboBox *view);

public slots:
    void refresh();

private:
    QString t_prefix;
    QListView *lview;
    QComboBox *cbview;
};

#endif // GCOMP_MODEL_H
