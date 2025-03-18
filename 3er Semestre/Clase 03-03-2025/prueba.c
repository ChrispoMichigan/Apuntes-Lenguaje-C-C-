#include <stdio.h>

int main(){
    int dato = 2;
    int *direccion = &dato;
    printf("Dato 1: %d", *direccion);
    
    return 0;
}