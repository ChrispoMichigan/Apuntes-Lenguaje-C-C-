#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{ 
    unsigned int a:4;
    unsigned int b:2;
    unsigned int c:4;
    unsigned int d:2;
    unsigned int e:4;
    unsigned int f:2;
    unsigned int g:4;
    unsigned int h:2;
    unsigned int i:4;
    unsigned int j:2;
}CampoBit;

typedef struct{
    unsigned int edad:4;
    char nombre[20];
    float estatura;
    unsigned int peso:4;
}Registro;

void rellenar_registro(Registro *registro){

    int temp;
    printf("Ingrese la edad: ");
    scanf("%d", &temp);
    registro->edad = temp;
    // printf("Ingrese el nombre: ");
    // char nombre_2[20];
    // scanf("%s", nombre_2);
    // strcpy(registro->nombre, nombre_2);
    // printf("Ingrese la estatura: ");
    // scanf("%f", registro->estatura);
    // printf("Ingrese el peso: ");
    // scanf("%d", registro->peso);
}

int main(){
    Registro a1;
    rellenar_registro(&a1);  
    // char a[20];
    // strcpy(a, "100");
    // printf("Char: %s\n", a);
    // printf("Tamaño de short: %d\n", sizeof(a));
    printf("Tamaño de registro: %d\n", sizeof(CampoBit));

    
    

    return 0;
}