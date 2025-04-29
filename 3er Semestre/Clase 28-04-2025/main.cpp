#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char apellido[30];
    char nombre[15];
    int edad;
    float altura;
} Alumno;

int main()
{
    FILE *fptr;
    Alumno grupo;
    char filename[100], c;
    int i = 0;

    printf("Enter the filename to read \n");
    scanf("%s", filename);

    fptr = fopen(filename, "rb");
    if (fptr == NULL)
    {
        printf("Cannot open to read the file \n");
        exit(0);
    }

    printf("Enter position : \n");
    scanf("%d", &i);
    fseek(fptr, (i-1)*(sizeof(Alumno)), 0);
    fread(&grupo, sizeof(grupo), 1, fptr);

    printf("Apellido: %s\n", grupo.apellido);
    printf("Nombre: %s\n", grupo.nombre);
    printf("Edad: %d\n", grupo.edad);
    printf("Altura: %f\n", grupo.altura);

    fclose(fptr);
    return 0;
}