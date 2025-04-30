#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

typedef struct {
    int id;
    char producto[15];
    int precio;
}Compra;

void borrarCompra() {
    FILE *fp, *temp;
    Compra compra;
    char filemame[20] = "compras.txt";
    char tempFile[20] = "temp.txt";
    bool encontrado = false;
    
    fp = fopen(filemame, "rb");
    if (fp == NULL) {
        printf("El archivo no existe\n");
        system("pause");
        return;
    }
    
    temp = fopen(tempFile, "wb");
    if (temp == NULL) {
        printf("Error al crear archivo temporal\n");
        fclose(fp);
        system("pause");
        return;
    }
    
    int id;
    printf("Ingrese el ID de la compra a borrar: ");
    scanf("%d", &id);
    
    while (fread(&compra, sizeof(Compra), 1, fp)) {
        if (compra.id == id) {
            encontrado = true;
            printf("Compra encontrada y eliminada:\n");
            printf("ID: %05d, Producto: %s, Precio: %d\n", compra.id, compra.producto, compra.precio);
        } else {
            fwrite(&compra, sizeof(Compra), 1, temp);
        }
    }
    
    fclose(fp);
    fclose(temp);
    
    if (encontrado) {
        remove(filemame);
        rename(tempFile, filemame);
        printf("Registro eliminado correctamente\n");
    } else {
        remove(tempFile);
        printf("Compra no encontrada\n");
    }
    
    system("pause");
}

bool buscarDuplicado(char productoBuscado[15]) {
    FILE *fp;
    Compra compra;
    char filemame[20] = "compras.txt";
    fp = fopen(filemame, "rb");
    if (fp == NULL){
        printf("El archivo no existe\n");
        return false;
    }
    while (fread(&compra, sizeof(Compra), 1, fp)) {
        if (strcmp(compra.producto, productoBuscado) == 0) {
            fclose(fp);
            return true;
        }
    }
    fclose(fp);
    return false;
}

int generarID(){
    int id = 0;
    FILE *fp;
    Compra compra;
    char filemame[20] = "compras.txt";
    fp = fopen(filemame, "rb");
    if (fp == NULL){
        printf("El archivo no existe\n");
        return 0;
    }
    while (fread(&compra, sizeof(Compra), 1, fp)) {
        if (compra.id > id) {
            id = compra.id;
        }
    }
    fclose(fp);
    return id + 1;
}

void agregarCompra() {
    FILE *fp;
    Compra compra;
    char filemame[20] = "compras.txt";
    
   fp = fopen(filemame, "ab");
    if (fp == NULL) {
        printf("Error al abrir el archivo\n");
        system("pause");
        return;
    }
    printf("ID generado: %05d\n", generarID());
    compra.id = generarID();
    printf("Ingrese el nombre del producto: ");
    char productoBuscado[15];
    scanf("%s", productoBuscado);
    if (buscarDuplicado(productoBuscado)) {
        printf("El producto ya existe\n");
        fclose(fp);
        system("pause");
        return;
    }
    strcpy(compra.producto, productoBuscado);
    printf("Ingrese el precio del producto: ");
    scanf("%d", &compra.precio);

    fwrite(&compra, sizeof(Compra), 1, fp);
    fclose(fp);
    system("pause");
}

void mostrarCompras() {
    FILE *fp;
    Compra compra;
    char filemame[20] = "compras.txt";
    
    fp = fopen(filemame, "rb");
    if (fp == NULL) {
        printf("El archivo no existe\n");
        system("pause");
        return;
    }
    
    while (fread(&compra, sizeof(Compra), 1, fp)) {
        printf("-----------------------------------------------\n");
        printf("ID: %05d, Producto: %s, Precio: %d\n", compra.id, compra.producto, compra.precio);
    }
    printf("-----------------------------------------------\n");
    fclose(fp);
    system("pause");
}

void buscarCompra(){
    FILE *fp;
    Compra compra;
    char filemame[20] = "compras.txt";
    fp = fopen(filemame, "rb");
    if (fp == NULL){
        printf("El archivo no existe\n");
        system("pause");
        return;
    }
    int id;
    printf("Ingrese el ID de la compra a buscar: ");
    scanf("%d", &id);
    fseek(fp, 0, SEEK_SET);
    while (fread(&compra, sizeof(Compra), 1, fp)) {
        if (compra.id == id) {
            printf("ID: %05d, Producto: %s, Precio: %d\n", compra.id, compra.producto, compra.precio);
            fclose(fp);
            system("pause");
            return;
        }
    }
    printf("Compra no encontrada\n");
    fclose(fp);
    system("pause");
}

int main(){
    FILE *fp;
    Compra compra;
    char filemame[20] = "compras.txt";

    fp = fopen(filemame, "r");
    if (fp == NULL){
        printf("El archivo no existe desea crear uno \n");
        printf("1. Si\n");
        printf("2. No\n");
        int op;
        scanf("%d", &op);
        if (op == 1){
            fp = fopen(filemame, "wb");
            if (fp == NULL){
                printf("No se pudo crear el archivo\n");
                return 1;
            }
        } else {
            printf("Saliendo del programa...\n");
            return 0;
        }
    }
    fclose(fp);

    while (true) {
        system("cls");
        printf("Menu de opciones\n");
        printf("1. Agregar compra\n");
        printf("2. Mostrar compras\n");
        printf("3. Buscar compra\n");
        printf("4. Borrar compra\n");
        printf("5. Salir\n");
        int op;
        scanf("%d", &op);
        switch (op) {
            case 1:
                agregarCompra();
                break;
            case 2:
                mostrarCompras();
                break;
            case 3:
                buscarCompra();
                break;
            case 4:
                borrarCompra();
                break;
            case 5:
                return 0;
            default:
                printf("Opción no válida\n");
                system("pause");
        }
    }

    return 0;
}