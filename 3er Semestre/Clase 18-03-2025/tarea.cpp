//Structura de la fruta en un supermercado
#include <stdio.h>
#include <string.h>

typedef struct{
    char nombre[30];
    char marca[30];
    float peso;
    int stock;
    char fecha[30];

}fruta;

int main(){
    fruta fruta1;
    strcpy(fruta1.nombre, "Manzana");
    strcpy(fruta1.marca, "Golden");
    fruta1.peso = 1.5;
    fruta1.stock = 100;
    strcpy(fruta1.fecha, "2021-10-10");

    printf("Nombre: %s\n", fruta1.nombre);
    printf("Marca: %s\n", fruta1.marca);
    printf("Peso: %.2f\n", fruta1.peso);
    printf("Stock: %d\n", fruta1.stock);
    printf("Fecha: %s\n", fruta1.fecha);

    return 0;
}
