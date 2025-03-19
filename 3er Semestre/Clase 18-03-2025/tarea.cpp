//Estructura de la fruta en un supermercado
#include <stdio.h>
#include <string.h>

typedef struct{
    char nombre[30];
    char marca[30];
    float peso;
    int stock;
    char fecha[30];

}fruta;

void printFruta(fruta);
void mostrarInventario(fruta[], int);

int main(){
    // Array de frutas
    fruta inventario[5];
    
    // Inicializar frutas
    strcpy(inventario[0].nombre, "Manzana");
    strcpy(inventario[0].marca, "Golden");
    inventario[0].peso = 1.5;
    inventario[0].stock = 100;
    strcpy(inventario[0].fecha, "2025-03-10");
    
    strcpy(inventario[1].nombre, "Pera");
    strcpy(inventario[1].marca, "Conference");
    inventario[1].peso = 0.8;
    inventario[1].stock = 50;
    strcpy(inventario[1].fecha, "2025-03-12");
    
    strcpy(inventario[2].nombre, "Plátano");
    strcpy(inventario[2].marca, "Canarias");
    inventario[2].peso = 0.2;
    inventario[2].stock = 200;
    strcpy(inventario[2].fecha, "2025-02-08");
    
    // Mostrar todas las frutas
    mostrarInventario(inventario, 3);
    
    return 0;
}

void printFruta(fruta fruta){
    printf("Nombre de la fruta: %s\n", fruta.nombre);
    printf("Marca de la fruta: %s\n", fruta.marca);
    printf("Peso de la fruta: %.2f kg\n", fruta.peso);
    printf("Stock de la fruta: %d\n", fruta.stock);
    printf("Fecha de la fruta: %s\n", fruta.fecha);
    printf("\n");
}

void mostrarInventario(fruta inventario[], int cantidad){
    printf("===== INVENTARIO DE FRUTAS =====\n\n");
    for(int i = 0; i < cantidad; i++){
        printf("Fruta #%d:\n", i+1);
        printFruta(inventario[i]);
    }
}