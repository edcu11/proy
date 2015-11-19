#ifndef RECT1_H
#define RECT1_H
#include <qobject.h>
#include <QGraphicsRectItem>
#include "Bullet.h"


class rect1: public QObject, public QGraphicsRectItem
{
     Q_OBJECT
public:
    rect1();
   // int (*arreglo)[10];
   // QList<Bullet*>* lista;
    void keyPressEvent(QKeyEvent * event);
    void spawn(int t);
};

#endif // RECT_H
