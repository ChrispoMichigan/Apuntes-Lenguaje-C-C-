#include <stdio.h>
#include <stdbool.h>

int main() {
    
    char cadena[100] = {0};
    int e = 0;
    while(true){
        printf("Inserte caracter: ");
        printf("Utilice un . para salir\n");
        scanf(" %c", &cadena[e]);
        printf("Caracter insertado: %c\n", cadena[e]);
        printf("Caracteres totales [%d]: ", e+1);
        printf("%s", cadena);
        printf("\n");
        if (cadena[e] == '.'){
            break;
        }
        e++;
    }
    
    printf("Fin del programa\n");
    return 0;
}