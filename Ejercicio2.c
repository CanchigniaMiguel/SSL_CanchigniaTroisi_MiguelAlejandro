#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct  A1{
    const double i;
};

int main() {
    
    int x = 3; /*Valor l es x, el de la izquierda (left), el valor r es 3, el de la derecha (right)*/

    struct A1 a = {.i = 3.14};
    
    const double x = a.i;

}