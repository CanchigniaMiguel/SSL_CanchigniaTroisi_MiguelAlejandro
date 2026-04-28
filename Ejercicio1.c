#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct Inner{ /*Inner se usa por convencion para definir la estructura de dentro*/
    char *c[10];
};

struct Outer{
    struct Inner b; /*Outer se usa por convencion para definir la estructura de fuera, que contiene a las demás*/
};

int main() {
    
    struct Outer a;

    int i = 0;
    
    char *p = a.b.c[i]; /*Array de punteros a char*/

}