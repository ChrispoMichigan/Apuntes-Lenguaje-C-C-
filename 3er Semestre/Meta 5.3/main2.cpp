#include <stdio.h>
#include <string.h>

int compararCadenas(const char *cadena1, const char *cadena2) {
    return strcmp(cadena1, cadena2);
}

char *encontrarCaracter(const char *cadena, char caracter) {
    return strchr(cadena, caracter);
}

char *buscarSubcadena(const char *subcadena, const char *cadena) {
    return strstr(cadena, subcadena);
}

int main() {
    char cadena1[100], cadena2[100];
    char caracter;

    printf("Introduce la primera cadena: ");
    scanf("%s", cadena1);
    printf("Introduce la segunda cadena: ");
    scanf("%s", cadena2);
    int resultado = compararCadenas(cadena1, cadena2);
    if (resultado == 0) {
        printf("Las cadenas son iguales.\n");
    } else {
        printf("Las cadenas no son iguales. Diferencia: %d\n", resultado);
    }

    printf("Introduce una cadena para buscar un caracter: ");
    scanf("%s", cadena1);
    printf("Introduce el caracter a buscar: ");
    scanf(" %c", &caracter);
    char *posicion = encontrarCaracter(cadena1, caracter);
    if (posicion) {
        printf("El caracter '%c' se encontro en la posicion: %ld\n", caracter, posicion - cadena1 + 1);
    } else {
        printf("El caracter '%c' no se encontro en la cadena.\n", caracter);
    }

    printf("Introduce la cadena principal: ");
    scanf("%s", cadena1);
    printf("Introduce la subcadena a buscar: ");
    scanf("%s", cadena2);
    char *subcadenaPos = buscarSubcadena(cadena2, cadena1);
    if (subcadenaPos) {
        printf("La subcadena se encontro en la posicion: %ld\n", subcadenaPos - cadena1 + 1);
    } else {
        printf("La subcadena no se encontro.\n");
    }

    return 0;
}


