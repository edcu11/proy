#ifndef ECUACIONES_S_H
#define ECUACIONES_S_H

#include <QGraphicsTextItem>
#include <QString>

class Ecuaciones_S: public QGraphicsTextItem
{
public:
    Ecuaciones_S(QGraphicsItem * parent=0);
    QString valor;
    void actualizar(QString string);
};

#endif // ECUACIONES_S_H
