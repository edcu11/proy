#ifndef RANDOMT_H
#define RANDOMT_H

#include <nodo.h>
#include <stdlib.h>

class RandomT
{
public:
    RandomT();
    char a[11];
    int total;
    char operadores();
    void llenar();
    void resolver();
    int suma(char ope,int valor1, int valor2);
    void a_char();



};

#endif // RANDOMT_H
