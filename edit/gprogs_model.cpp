#include "gprogs_model.h"

gprogs_model::gprogs_model()
{

}

void gprogs_model::init(QString *prefix, QListView *lview)
{
    this->t_prefix=*prefix;
    this->lview=lview;
    this->setQuery("SELECT id, name FROM "+t_prefix+"gprogs");
    this->lview->setModel(this);
    this->lview->setModelColumn(1);
}

void gprogs_model::init(QString *prefix, QComboBox *cbview)
{
    this->t_prefix=*prefix;
    this->cbview=cbview;
    this->setQuery("SELECT id, name FROM "+t_prefix+"gprogs");
    this->cbview->setModel(this);
    this->cbview->setModelColumn(1);
}

void gprogs_model::refresh()
{
    this->setQuery("SELECT id, name FROM "+t_prefix+"gprogs");
}
