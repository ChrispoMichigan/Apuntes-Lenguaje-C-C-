#include <stdio.h>
#include <stdbool.h>

float multiplicacion(float a, float b){
    printf("Ingrese el primer numero: ");
    scanf("%f", &a);
    printf("Ingrese el segundo numero: ");
    scanf("%f", &b);
    return a * b;
}

float suma(float a, float b){
    printf("Ingrese el primer numero: ");
    scanf("%f", &a);
    printf("Ingrese el segundo numero: ");
    scanf("%f", &b);
    return a + b;
}

float resta(float a, float b){
    printf("Ingrese el primer numero: ");
    scanf("%f", &a);
    printf("Ingrese el segundo numero: ");
    scanf("%f", &b);
    return a - b;
}

float division(float a, float b){
    printf("Ingrese el primer numero: ");
    scanf("%f", &a);
    printf("Ingrese el segundo numero: ");
    scanf("%f", &b);
    return a / b;
}

int main() {
    int opt = 0;
    while(true){
        printf("1. Multiplicacion\n");
        printf("2. Suma\n");
        printf("3. Resta\n");
        printf("4. Division\n");
        printf("5. Salir\n");
        printf("Ingrese una opcion: ");
        scanf("%d", &opt);

        switch (opt){
        case 1:
            printf("El resultado es: %.2f\n", multiplicacion(0, 0));
            break;
        case 2:
            printf("El resultado es: %.2f\n", suma(0, 0));
            break;
        case 3:
            printf("El resultado es: %.2f\n", resta(0, 0));
            break;
        case 4:
            printf("El resultado es: %.2f\n", division(0, 0));
            break;
        default:
            printf("Saliendo...\n");
            break;
        }

        break;
    }
    return 0;
}