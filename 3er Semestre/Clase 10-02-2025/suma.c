#include <stdio.h>

int main(){
    printf("Suma de numeros naturales hasta el 20 que sean multiplos de 3\n");
    int suma = 0;
    for (int i = 1; i < 20; i++){
        if (i % 3 == 0){
            printf("%d + ", i);
            suma = suma + i;
        }    
    }
    printf("\nLa suma es: %d\n", suma);
    
    return 0;
}