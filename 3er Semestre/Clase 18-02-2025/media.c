#include <stdio.h>

float media();


int main(){
    float datos[20] = {2, 3 ,4 ,5 ,6 ,7 ,8 ,9 ,10 ,11 ,12 ,13 ,14 ,15 ,16 ,17 , 18, 19, 20, 21};
    printf("La media es: %f", media(datos));
    return 0;
}

float media(float datos[20]){
    float suma = 0;
    for (int i = 0; i < 20; i++){
        suma += datos[i];
    } 
    return suma/20;
}