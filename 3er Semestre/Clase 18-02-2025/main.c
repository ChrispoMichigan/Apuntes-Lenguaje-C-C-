#include <stdio.h>

#define POS 20
float datos[POS] = {0};

void guardar();
float mediana();
void burbuja();
void mostrar_datos();
float media();
void buscar_dato();

int main(){
    guardar();
    printf("\nDatos originales:\n");
    mostrar_datos();
    
    burbuja();
    printf("\nDatos ordenados:\n");
    mostrar_datos();

    printf("\nLa media es: %.2f\n", media(datos));
    printf("\nLa mediana es: %.2f\n", mediana());

    buscar_dato();

    return 0;
}

void guardar(){
    for(int i = 0; i < POS; i++){
        printf("Ingrese el valor [%d]: ", i+1);
        while(scanf("%f", &datos[i]) != 1){
            printf("Entrada invalida. Ingrese un número: ");
            while(getchar() != '\n'); // Limpia el buffer
        }
    }
}

void mostrar_datos(){
    for(int i = 0; i < POS; i++){
        printf("Valor [%d]: %.2f\n", i+1, datos[i]);
    }
}

void burbuja(){
    for(int i = 0; i < POS - 1; i++){
        for(int j = 0; j < POS - i - 1; j++){
            if(datos[j] > datos[j+1]){
                float temp = datos[j];
                datos[j] = datos[j+1];
                datos[j+1] = temp;
            }
        }
    }
}

float mediana(){
    if(POS % 2 == 0){
        return (datos[POS/2 - 1] + datos[POS/2]) / 2;
    }else{
        return datos[POS/2];
    }
}

float media(float datos[20]){
    float suma = 0;
    for (int i = 0; i < 20; i++){
        suma += datos[i];
    } 
    return suma/20;
}

void buscar_dato(){
    float dato;
    int cantidad = 0;
    printf("Ingrese el dato a buscar: ");
    scanf("%f", &dato);
    for(int i = 0; i < POS; i++){
        if(datos[i] == dato){
            cantidad++;
            printf("El dato se encuentra en la posicion: %d\n", i+1);
        }
    }
    printf("El dato se encuentra %d veces\n", cantidad);
}