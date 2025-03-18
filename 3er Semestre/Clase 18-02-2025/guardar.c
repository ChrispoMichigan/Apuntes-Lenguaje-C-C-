#include <stdio.h>

void guardar();
float media();

float datos[20] = {0};

int main(){
    guardar();
    printf("La media es: %f", media(datos));
    return 0;
}

void guardar(){
    for(int i = 0; i < 20; i++){
        printf("Ingrese un el valor [%d]: ", i+1);
        scanf("%f", &datos[i]);
    }
    for (int e = 0; e < 20; e++){
       printf("El valor [%d] es: %.2f\n", e+1, datos[e]);
    }
}

float media(float datos[20]){
    float suma = 0;
    for (int i = 0; i < 20; i++){
        suma += datos[i];
    } 
    return suma/20;
}