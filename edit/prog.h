#ifndef PROG_H
#define PROG_H

class prog
{
public:
    prog();
    QString name,
    publisher,
    version;
  prog( QString iName = "", QString iPub = "", QString iVers = "" );
  prog( const QDomElement &e );

  QDomElement createXMLNode( QDomDocument &d );
};

#endif // PROG_H
