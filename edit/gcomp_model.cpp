#include "gcomp_model.h"

gcomp_model::gcomp_model()
{

}

void gcomp_model::init(QString *prefix, QListView *lview)
{
    this->t_prefix=*prefix;
    this->lview=lview;
    this->setQuery("SELECT id, name FROM "+t_prefix+"gcomps");
    this->lview->setModel(this);
    this->lview->setModelColumn(1);
}

void gcomp_model::init(QString *prefix, QComboBox *cbview)
{
    this->t_prefix=*prefix;
    this->cbview=cbview;
    this->setQuery("SELECT id, name FROM "+t_prefix+"gcomps");
    this->cbview->setModel(this);
    this->cbview->setModelColumn(1);
}

void gcomp_model::refresh()
{
    this->setQuery("SELECT id, name FROM "+t_prefix+"gcomps");
}
