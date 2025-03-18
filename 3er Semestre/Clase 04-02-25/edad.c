#include <stdio.h>

int main() {
    int edad;
    printf("INSERTE SU EDAD: ");
    scanf("%d", &edad);
    printf(edad >= 18 ? "Eres mayor de edad\n" : "Eres menor de edad\n");
    return 0;
}
