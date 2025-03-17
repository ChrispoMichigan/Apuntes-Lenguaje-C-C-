#include <stdio.h>
#include <math.h>

float hipotenusa(float a, float b){
    return sqrt(a*a + b*b);
}

int main(){
    float a, b, c;
    printf("Calculo da hipotenusa de um triangulo retangulo\n");
    printf("Digite o valor del cateto a: ");
    scanf("%f", &a);
    printf("Digite o valor del cateto b: ");
    scanf("%f", &b);
    printf("A hipotenusa del triangulo retangulo es: %.2f\n", hipotenusa(a, b));

    return 0;
}