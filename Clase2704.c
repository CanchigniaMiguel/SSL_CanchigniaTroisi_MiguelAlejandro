#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    printf("Tipos de datos \n");

    printf("char  Está es ASCII, si le doy un valor de dos numeros, depende de como lo declaro va a salir el ASCII o el numero, ej: \n");
    char c = 65;
    printf("c = %c\n", c); /*Utilizo %c para que me lo muestre como caracter*/
    printf("c = %d\n", c); /*Utilizo &d para que me lo muestre de otra forma, hay varias letras*/
    
    int m=17;
    int n=20;
    printf("El print tiene funciones curiosas, por ejemplo puedo poner %d y después %d pero le doy valores a esas variables al final, en orden \n", m , n );
    
    printf("Variantes en los tipos de datos de numeros, float (Decimal, precision simple), double (Decimal, precisión doble) \n");
    printf("Para los booleanos usamos 1 y 0 \n");

    printf("No hay variables de tipo string, lo resolvemos con variables de tipo char* \n");
    char* nombredeunachicabonita="Luz \n";
    printf(nombredeunachicabonita);

    printf("Se pueden guardar valores booleanos en los int, mira: \n");
    int r1= (5 < 3); /* 0 */
    int r2= (5 < 3); /* 1 */
    /*
    _Bool t=1;
    _Bool s=0;
    _Bool y=47; Para todo valor !=1 y !=0, se toma el valor de 1 */
    
    printf("El comando #define y despues un nombre por ej. MAX seguido de un valor como 100, el preprocesador busca todos los MAX del código y los reemplaza por 100, no tiene tipo ni ocupa espacio en memoria \n");
    printf("El comando const y despues definir una variable normalmente por ej. const int MESESDELAÑO=12 eso si es una variable real, con tipo y espacio en memoria, que no puede ser modificada \n");
    printf("Al declarar una variable static dentro de una función, es como si se la hubiera declarado fuera, osea si la modificaste una vez, a pesar de que despues la incializes en 0, va a seguir teniendo el valor ya modificado \n");

    printf("Puedo declarar nuevos tipos de variables");
    typedef struct Punto {
        int edad;
        char* nombre;
    } Punto;
    Punto Venec = {17, "Juaneco"};

    printf("Para definir arrays necesito el tipo de dato, el nombre y el tamaño máximo entre corchetes [], el tamaño tiene que ser una constante \n");
    int cajones [10] = {10,20,30,40,50,60,70,80,90,100};
    printf("Puedo hacer un array de caracteres, meterlos como palabras, pero el ultimo espacio del array será el \0, porque las cadenas siempre terminan con eso \n");
    char saludo [6]="Holas";
    printf("Los arrays siempre tienen tamaño fijo, pero hay una forma artificial de que el tamaño incremente, y es con el comando malloc, que practicamente crea un nuevo array mas grande y pasa los datos actuales allí \n");
    printf("La varibale que declaro como nombre de un array, es un punto que apunta  ala dirección del primer elemento \n");
    int a [10];
    int *p =a;
    
    a[0]=1;
    *p=1;
    *a=1;
    printf("Esas tres líneas anteriores hacen lo mismo, ya que son punteros \n");
    printf("Para moverme entre las celdas del array puedo hacer así: \n");
    *(p + 5)=1;
    printf("Aquí puse el 1 en el quinto espacio del array, no tengo que hacer sizeof porque el tamaño de las celdas es int, porque está declarado \n");

    printf("Si se modifica el valor de una variable dentro de una función, para que ese valor no se pierda al salir de esa función, en C++ lo pasaba por referencia y hacía &a, pero ahora en C tengo que pasarlo a la función como puntero \n");
    int h=5;
    void inc(int *punteroh){
        *punteroh = *punteroh + 1;
    }
    void prueba(int h){
        inc(&h);
        printf("h = %d \n", h);
    }
    printf("Si estoy trabajando con un puntero, lo declaro con * y el nombre, en funciones, si modifico solo el nombre, es modificar a donde apunta, si lo modifico con *nombre, modifico el contenido del lugar al que apunta \n");


    printf("Comienzo con los nodos, un tipo de dato que contiene otro tipo de dato y un puntero que apunta a otro nodo \n");
    typedef struct Nodo{
        int number;
        Nodo* siguiente;
    }Nodo;

    return 0;
}