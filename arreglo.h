#ifndef ARREGLO_H
#define ARREGLO_H
class Bullet;
#include "Bullet.h"


class Arreglo
{
public:
    Arreglo();
    int array[20][10];
    void full(Bullet* b);
    void print();


};

#endif // ARREGLO_H
