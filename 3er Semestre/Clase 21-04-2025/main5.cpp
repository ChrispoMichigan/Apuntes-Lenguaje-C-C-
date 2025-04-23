#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int main() {
    FILE *file1, *file2;
    const char filename[9] = "file.txt";
    char c;
    const int lb = 5;
    int i = 0;

    file1 = fopen(filename, "w");

    if (file1 == NULL) {
        printf("No se puedo abrir el archivo \n");
        exit(0);
    } else {
        printf("El archivo se abrio correctamente \n");
    }
    printf("Inserta un caracter\n");
    printf("Para terminar inserta 0 \n");
    while (true) {
        scanf("%c", &c);
        if (c == '0') {
            break;
        }
        fputc(c, file1);
        i++;
        if (i == lb) {
            fputc('\n', file1);
            i = 0;
        }
        
        printf("Inserta otro caracter\n");
        c = getchar();
    }

    fclose(file1);
    file1 = fopen(filename, "r");
    if (file1 == NULL) {
        printf("No se puedo abrir el archivo \n");
        exit(0);
    } 
    printf("El contenido del archivo es: \n");
    c = fgetc(file1);
    while (c != EOF) {
        printf("%c", c);
        c = fgetc(file1);
    }
    fclose(file1);
    
    file1 = fopen("file.txt", "r");
    file2 = fopen("file2.txt", "w");
    if (file2 == NULL) {
        printf("No se puedo abrir el archivo \n");
        exit(0);
    }

    printf("\nEl contenido del archivo se copio a file2.txt \n");
    c = fgetc(file1);
    while (c != EOF) {
        fputc(c, file2);
        c = fgetc(file1);
    }

    fclose(file2);
    fclose(file1);

    return 0;
}