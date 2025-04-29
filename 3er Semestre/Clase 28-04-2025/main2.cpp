#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int id[30];
    char producto[15];
    int precio;
}Compra;

int main()
{
 FILE *fptr;
 Alumno grupo;

char filemame[100], c;
int i=0;

printf("Enter the file name to open: \n");
scanf("%s", filemame);

fplr = fopen(filemame, "wb");
if (fptr == NULL)
{
    printf("Error opening file \n");
    exit(0);
}

printf("Enter last name : \n");
scanf("%s", grupo.apellido);
while (strcmp("#", grupo.apellido)!=0)
{
    scanf("%s", grupo.nombre);
    scanf("%d", &grupo.edad);
    scanf("%f", &grupo.altura);
    printf("%d \n", ++i );
    fwrite(&grupo, sizeof(Alumno), 1, fptr);
    printf("Enter last name : \n");
    scanf("%s", grupo.apellido);
}

fclose(fptr);
return 0;
}