#ifndef GAME_H
#define GAME_H
#include <QGraphicsView>
#include <QWidget>
#include <QGraphicsScene>
#include <qlist.h>
#include "rect1.h"
#include "Bullet.h"
#include "randomt.h"
#include  <QQueue>
#include <iostream>
#include <string>
#include <QString>
#include <ecuaciones_s.h>


class Game: public QGraphicsView{
public:
    Game(QWidget * parent=0);

    QGraphicsScene * scene;
    rect1* player;
    RandomT* arbol;
    int arreglo[20][10];
    QQueue<int> tamanos;
    QQueue<QString> ecuaciones;
    Ecuaciones_S* sigs[5];
    Ecuaciones_S* score;
    int pnts;




};


#endif // GAME_H
