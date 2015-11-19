#ifndef BULLET_H
#define BULLET_H

#include <QGraphicsRectItem>
#include <QObject>
#include <QKeyEvent>
#include <QTimer>


class Bullet: public QObject,public QGraphicsRectItem{
    Q_OBJECT
public:
    Bullet(int s);
    int p_y,p_x,tam,tam_g;
    //int (*arreglo)[10];
    QTimer * timer;
   // QList<Bullet*>* lista;
    void full();
    bool check_R();
    bool check_D();
    bool check_L();
    bool check_Fila();
    int  fila_faltante();
    bool perdio();
    void clean_arreglo(int valor_y);
    void act_A(int valor_y,int valor_p);
    void act_L(int valor_y);
    void act_Alturas(Bullet* b);
    void buscar(int valor_y);
    void keyPressEvent(QKeyEvent * event);
    void spawn(int t);

public slots:
    void move();
};

#endif // BULLET_H
