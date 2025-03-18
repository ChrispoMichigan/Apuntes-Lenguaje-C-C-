#include <stdio.h>

int main(){
    short arr[5], *apArr;
    apArr = &arr[0];
    //Imprime la dirección de memoria del arreglo en la posición [0]
    printf("Direccion del arreglo en la posicion[0]: %x\n", &arr[0]);
    //Imprime la dirección de memoria del arreglo
    //(el nombre dle arreglo es el apuntador)
    printf("Direccion del arreglo: %x\n", &arr);
    //Imprime la dirección de memoria del apuntador apArr
    printf("Direccion del apuntador: %x\n", apArr);

    return 0;
}