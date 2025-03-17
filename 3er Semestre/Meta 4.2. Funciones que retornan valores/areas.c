#include <stdio.h>
#include <math.h>

float areaCirculo(float radio){
    return M_PI * radio * radio;
}

float areaTrapecio(float baseMayor, float baseMenor, float altura){
    return (baseMayor + baseMenor) * altura / 2;
}

float areaHexagono(float lado){
    return (3 * sqrt(3) * lado * lado) / 2;
}

int main(){
    float radio, baseMayor, baseMenor, altura, lado;
    printf("Ingrese el radio del circulo: ");
    scanf("%f", &radio);
    printf("El area del circulo es: %.2f\n", areaCirculo(radio));

    printf("Ingrese la base mayor del trapecio: ");
    scanf("%f", &baseMayor);
    printf("Ingrese la base menor del trapecio: ");
    scanf("%f", &baseMenor);
    printf("Ingrese la altura del trapecio: ");
    scanf("%f", &altura);
    printf("El area del trapecio es: %.2f\n", areaTrapecio(baseMayor, baseMenor, altura));

    printf("Ingrese el lado del hexagono: ");
    scanf("%f", &lado);
    printf("El area del hexagono es: %.2f\n", areaHexagono(lado));

    return 0;
}