#include <stdio.h>
#include <stdbool.h>

int main() {
    int opcion = 0;
    do{
        printf("Conversor de unidades de temperatura\n");
        printf("1. Celsius a Fahrenheit\n");
        printf("2. Fahrenheit a Celsius\n");
        printf("3. Salir\n");
        scanf("%d", &opcion);
    }while(opcion < 1 || opcion > 3 );
    float temperatura = 0;
    if (opcion == 1){
        printf("Celsius a Fahrenheit\n");
        printf("Inserte temperatura en Celsius: ");
        scanf("%f", &temperatura);
        printf("La temperatura en Fahrenheit es: %.2f\n", temperatura * 9/5 + 32);

    }
    if (opcion == 2){
        printf("Fahrenheit a Celsius\n");
        printf("Inserte temperatura en Fahrenheit: ");
        scanf("%f", &temperatura);
        printf("La temperatura en Celsius es: %.2f\n", (temperatura - 32) * 5/9);
    }

    printf("Fin del programa\n");
    return 0;
}