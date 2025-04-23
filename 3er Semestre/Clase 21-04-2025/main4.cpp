#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file1;
    char filename[100], c;
    int i = 0, e = 0;

    printf("Inserta el nombre del archivo a abrir \n");
    scanf("%s", filename);

    file1 = fopen(filename, "r");

    if (file1 == NULL) {
        printf("No se puedo abrir el archivo \n");
        exit(0);
    } else {
        printf("El archivo se abrio correctamente \n");
    }
    
    c = fgetc(file1);

    while (c != EOF) {
        printf("%c", c);
        c = fgetc(file1);
        i++;
        if (c == ' ') {
            e++;
        }
    }

    printf("\nEl archivo tiene %d caracteres \n", i);
    printf("El archivo tiene %d espacios \n", e);
    fclose(file1);

    return 0;
}