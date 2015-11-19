#include "ecuaciones_s.h"
#include <QFont>

Ecuaciones_S::Ecuaciones_S(QGraphicsItem *parent)
{
    setPlainText(QString(" "));
    setDefaultTextColor(Qt::black);
    setFont(QFont("SansSerif", 12));
}

void Ecuaciones_S::actualizar(QString string)
{
    setPlainText(string);
    valor=string;
   // setDefaultTextColor(Qt::black);
   // setFont(QFont("arial", 12));
}
