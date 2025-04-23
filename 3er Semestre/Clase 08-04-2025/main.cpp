#include <stdio.h>
#include <stdlib.h>

int main() {
    // Open two files to be merged
    FILE *fp1 = fopen("file1.txt", "r");
    // Abre el primer archivo "file1.txt" en modo lectura ("r") y asigna su descriptor a fp1
    
    FILE *fp2 = fopen("file2.txt", "r");
    // Abre el segundo archivo "file2.txt" en modo lectura ("r") y asigna su descriptor a fp2

    // Open file to store the result
    FILE *fp3 = fopen("file3.txt", "w");
    // Abre el archivo "file3.txt" en modo escritura ("w") donde se guardará el resultado
    
    char c;
    // Declara una variable de tipo carácter que se utilizará para leer caracteres de los archivos

    if (fp1 == NULL || fp2 == NULL || fp3 == NULL) {
    // Verifica si alguno de los archivos no pudo abrirse (lo que resultaría en punteros NULL)
        puts("Could not open files");
        // Muestra un mensaje de error si algún archivo no pudo abrirse
        
        exit(0);
        // Termina la ejecución del programa con código 0
    }

    // Copy contents of first file to file3.txt
    while ((c = fgetc(fp1)) != EOF){
    // Lee caracteres uno por uno del primer archivo hasta llegar al final del archivo (EOF)
        fputc(c, fp3);
        // Escribe cada carácter leído en el archivo de destino (file3.txt)
    }

    // Copy contents of second file to file3.txt
    while ((c = fgetc(fp2)) != EOF){
    // Lee caracteres uno por uno del segundo archivo hasta llegar al final del archivo (EOF)
        fputc(c, fp3);
        // Añade cada carácter leído al final del archivo de destino (file3.txt)
    }

    printf("Merged file1.txt and file2.txt into file3.txt");
    // Imprime un mensaje indicando que los archivos se han fusionado correctamente

    fclose(fp1);
    // Cierra el primer archivo para liberar recursos del sistema
    
    fclose(fp2);
    // Cierra el segundo archivo para liberar recursos del sistema
    
    fclose(fp3);
    // Cierra el archivo de destino para liberar recursos del sistema
    
    return 0;
}