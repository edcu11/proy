#include "rect1.h"
#include <QGraphicsScene>
#include <QKeyEvent>
#include <QDebug>



rect1::rect1()
{

}

void rect1::keyPressEvent(QKeyEvent *event)
{
    if (event->key() == Qt::Key_Left){
        setPos(x()-10,y());
    }
    else if (event->key() == Qt::Key_Right){
        setPos(x()+10,y());
    }
}

void rect1::spawn(int t)
{
    Bullet* b=new Bullet(t);
    scene()->addItem(b);
    b->setFlag(QGraphicsItem::ItemIsFocusable);
    b->setFocus();
}
