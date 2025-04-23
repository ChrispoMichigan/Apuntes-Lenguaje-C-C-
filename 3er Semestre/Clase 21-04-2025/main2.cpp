#include <stdio.h>
#include <stdlib.h> 

int main() {
    FILE *fptr;
    // Declara un puntero a un archivo que se usará para acceder al archivo

    char filename[100], c;
    // Declara un array de caracteres para almacenar el nombre del archivo (hasta 100 caracteres)
    // Declara una variable de tipo carácter para leer cada carácter del archivo

    printf("Enter the filename to open \n");
    // Muestra un mensaje pidiendo al usuario que introduzca el nombre del archivo

    scanf("%s", filename);
    // Lee el nombre del archivo desde la entrada estándar (teclado) y lo almacena en la variable filename

    // Open file
    fptr = fopen(filename, "r");
    // Abre el archivo especificado por el usuario en modo lectura ("r") y asigna su descriptor a fptr
    
    if (fptr == NULL) {
    // Verifica si el archivo no pudo abrirse (lo que resultaría en un puntero NULL)
        
        printf("Cannot open file \n");
        // Muestra un mensaje de error si el archivo no puede abrirse
        
        exit(0);
        // Termina la ejecución del programa con código 0
    }
    
    // Read contents from file
    c = fgetc(fptr);
    // Lee el primer carácter del archivo
    
    while (c != EOF) {
    // Continúa leyendo hasta que se alcance el final del archivo (EOF - End Of File)
        
        printf("%c", c);
        // Imprime el carácter leído en la consola
        
        c = fgetc(fptr);
        // Lee el siguiente carácter del archivo
    }
    
    fclose(fptr);
    // Cierra el archivo para liberar recursos del sistema
    
    return 0;
}

// This program demonstrates how to open a file in C, read its contents, and print them to the console.YOU NEED INTRODUCCE NAME OF FILE.TXT  