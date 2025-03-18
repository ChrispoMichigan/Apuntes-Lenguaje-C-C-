#include <stdio.h>
#include <math.h>

int main(){
    float a, b, c;
    printf("Introduce el valor de x^2: ");
    scanf("%f", &a);
    printf("Introduce el valor de x^1: ");
    scanf("%f", &b);
    printf("Introduce el valor de x^0: ");
    scanf("%f", &c);
    if((b*b - 4*a*c) < 0){
        printf("No hay soluciones reales\n");
        return 0;
    }
    float raiz = sqrt(b*b - 4*a*c) / (2*a);
    float x1 = (-b + raiz) / (2*a);
    float x2 = (-b - raiz) / (2*a);
    printf("Las soluciones son: %f y %f\n", x1, x2);
    return 0;
}