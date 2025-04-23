#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fptr1, *fptr2;
    // Declara dos punteros a archivos - uno para el archivo origen y otro para el archivo destino
    
    char filename[100], c;
    // Declara un array para almacenar nombres de archivos (hasta 100 caracteres) y una variable para caracteres

    printf("Enter the filename to open for reading \n");
    // Solicita al usuario que introduzca el nombre del archivo origen
    
    scanf("%s", filename);
    // Lee el nombre del archivo origen desde la entrada estándar

    // Open one file for reading
    fptr1 = fopen(filename, "r");
    // Abre el archivo origen en modo lectura ("r")
    
    if (fptr1 == NULL) {
    // Verifica si el archivo no pudo abrirse
        
        printf("Cannot open file \n");
        // Muestra un mensaje de error
        
        exit(0);
        // Termina la ejecución del programa
    }

    printf("Enter the filename to open for writing \n");
    // Solicita al usuario que introduzca el nombre del archivo destino
    
    scanf("%s", filename);
    // Lee el nombre del archivo destino desde la entrada estándar

    // Open another file for writing
    fptr2 = fopen(filename, "w");
    // Abre el archivo destino en modo escritura ("w")
    
    if (fptr2 == NULL){
    // Verifica si el archivo no pudo abrirse
        
        printf("Cannot open file %s \n", filename);
        // Muestra un mensaje de error que incluye el nombre del archivo
        
        exit(0);
        // Termina la ejecución del programa
    }
    
    // Read contents from first file
    c = fgetc(fptr1);
    // Lee el primer carácter del archivo origen
    
    while (c != EOF) {
    // Continúa hasta alcanzar el final del archivo origen (EOF - End Of File)
        
        fputc(c, fptr2);
        // Escribe el carácter leído en el archivo destino
        
        c = fgetc(fptr1);
        // Lee el siguiente carácter del archivo origen
    }

    printf("Contents copied to %s\n", filename);
    // Muestra un mensaje de éxito con el nombre del archivo destino

    fclose(fptr1);
    // Cierra el archivo origen para liberar recursos
    
    fclose(fptr2);
    // Cierra el archivo destino para liberar recursos
    
    return 0;
}