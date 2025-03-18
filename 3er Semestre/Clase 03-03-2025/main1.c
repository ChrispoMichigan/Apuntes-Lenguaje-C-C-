#include <stdio.h>

/*
    Este programa crea un apuntador de tipo carácter
*/

int main(){
    char *ap, c;
    c = 'x';
    ap = &c;

    //Imprime el carácter de la localidad a la que apunta
    printf("Caracter: %c\n", *ap);
    //Imprime el código ASCII de la localidad a la que apunta
    printf("Codigo ASCII: %d\n", *ap);
    //Imprime la dirección de memoria de la localidad a la que apunta
    printf("Direccion en memoria: %d\n", ap);
    return 0;
}