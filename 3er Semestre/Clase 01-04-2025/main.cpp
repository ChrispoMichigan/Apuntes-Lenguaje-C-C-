#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    unsigned int edad:7;  // Campo de bits de 7 bits (valores de 0-127)
    char nombre[20];
    float estatura;
    unsigned int peso:7;  // Campo de bits de 7 bits (valores de 0-127)
}Registro;

void rellenar_registro(Registro *registro){
    int temp;
    
    // Edad (con validación para campo de 4 bits)
    printf("Ingrese la edad (0-127): ");
    scanf("%d", &temp);
    registro->edad = temp; // Automáticamente se trunca a 7 bits
    
    // Nombre
    printf("Ingrese el nombre: ");
    scanf("%s", registro->nombre);
    
    // Estatura
    printf("Ingrese la estatura (m): ");
    scanf("%f", &(registro->estatura));
    
    // Peso (con validación para campo de 7 bits)
    printf("Ingrese el peso (0-127): ");
    scanf("%d", &temp);
    registro->peso = temp; // Automáticamente se trunca a 7 bits
}

void mostrar_registro(Registro *registro) {
    printf("\n--- Datos del Registro ---\n");
    printf("Nombre: %s\n", registro->nombre);
    printf("Edad: %u \n", registro->edad);
    printf("Estatura: %.2f m\n", registro->estatura);
    printf("Peso: %u kg\n", registro->peso);
    printf("------------------------\n");
}

int main(){
    Registro a1;
    
    rellenar_registro(&a1);  
    mostrar_registro(&a1);
    
    return 0;
}