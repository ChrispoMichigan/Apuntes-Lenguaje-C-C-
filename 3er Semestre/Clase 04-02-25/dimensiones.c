#include <stdio.h>

int main(){
    float a, b, c, d;
    printf("Introduce el valor del ancho del primer rectangulo: ");
    scanf("%f", &a);
    printf("Introduce el valor del alto del primer rectangulo: ");
    scanf("%f", &b);
    printf("Introduce el valor del ancho del segundo rectangulo: ");
    scanf("%f", &c);
    printf("Introduce el valor del alto del segundo rectangulo: ");
    scanf("%f", &d);

    if (a*b > c*d) {
        printf("El primer rectangulo es mas grande que el segundo\n");
        printf("Area del primer rectangulo: %f\n", a*b);
        printf("Area del segundo rectangulo: %f\n", c*d);
    } else if (a*b < c*d) {
        printf("El segundo rectangulo es mas grande que el primero\n");
        printf("Area del primer rectangulo: %f\n", a*b);
        printf("Area del segundo rectangulo: %f\n", c*d);
    } else {
        printf("Ambos rectangulos son del mismo area\n");
        printf("Area de rectangulos individuales: %f\n", a*b);
    }
    return 0;
}