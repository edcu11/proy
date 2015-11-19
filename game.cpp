#include "game.h"
#include <qdebug.h>
#include <qstring.h>

Game::Game(QWidget *parent)
{
    //arreglo[20][10];
    for(int y=0;y<20;y++){
           for(int x=0;x<10;x++){
               arreglo[y][x]=0;
           }
       }

    scene = new QGraphicsScene();
    scene->setSceneRect(0,0,800,600);

    player= new rect1();
    player->setRect(0,0,200,400);
    scene->addItem(player);
    scene->setSceneRect(0,0,800,600);
    player->setBrush(Qt::black);

    do{
    arbol->llenar();
    arbol->resolver();
    arbol->a_char();
        if(arbol->total>0 && arbol->total<5){
            tamanos.append(arbol->total);
            ecuaciones.append(arbol->a);
        }
    }while(tamanos.size()<300);

    int n=tamanos.takeAt(0);

    for(int c=0; c<5;c++){
        sigs[c]=new Ecuaciones_S();
        QString ecua=ecuaciones.first();
        ecuaciones.removeFirst();
        sigs[c]->actualizar(ecua);
        sigs[c]->setPos(220,c*20);
        scene->addItem(sigs[c]);
    }

    score=new Ecuaciones_S();
    pnts=0;

    score->actualizar(QString("Score: ")+QString::number(pnts));
    score->setPos(400,40);
    scene->addItem(score);


    QGraphicsView * view = new QGraphicsView(scene);
    view->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->setFixedSize(800,600);
    view->show();



    Bullet* b=new Bullet(n);
   // lista.append(b);
    scene->addItem(b);
    b->setFlag(QGraphicsItem::ItemIsFocusable);
    b->setFocus();


}

