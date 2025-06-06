#include <stdio.h>

/*
    Este programa crea un apuntador de tipo entero
    y modifica la información a través del mismo.
*/

int main(){
    short a = 5, b = 10;
    short *apEnt;
    apEnt = &a;

    //Imprime el valor entero de a
    printf("a = %i\n", a);
    b = *apEnt; // b = 5
    //Imprime el valor de lo que apunta apEnt
    printf("b = %i //*apEnt\n", b);
    b = *apEnt + 1; // b = 6
    //Imprime el valor de lo que apunta apEnt + 1
    printf("b = %i //*apEnt + 1\n", b);
    *apEnt = 0; //a = 0
    //Le asigna el valor de 0 a la variable al que apunta apEnt
    printf("a = %i //*aptEdn = 0\n", a);

    return 0;
}