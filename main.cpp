#include <QApplication>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <game.h>

Game* game;
int main(int argc, char *argv[]){

    QApplication a(argc, argv);


    {
    /*int array[20][10];

    for(int y=0;y<20;y++){
           for(int x=0;x<10;x++){
               array[y][x]=0;
           }
       }

    QList<Bullet*>lista;


    QGraphicsScene * scene = new QGraphicsScene();
    scene->setSceneRect(0,0,600,800);

    rect1* player = new rect1(array,&lista);
    player->setRect(0,0,200,400);

    scene->addItem(player);

    QGraphicsView * view = new QGraphicsView(scene);
    view->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

    // show the view
    view->show();
    view->setFixedSize(800,600);
    scene->setSceneRect(0,0,800,600);

   // RandomT* arbol=new RandomT();

     do{
    arbol->llenar();
    arbol->resolver();
        if(arbol->total>0 && arbol->total<10){
            n_valores.append(arbol->total);
            qDebug()<<arbol->total;
        }
    }while();
*/

    //player->spawn(rand() % 10 + 1);
    }

    game=new Game();


    return a.exec();
}
