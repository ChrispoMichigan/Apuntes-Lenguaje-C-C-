#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct nodo{
    int id;
    char nombre[20];
    char marca[20];
    float peso;
    int stock;
    char fecha[20];
    struct nodo *next;
};

typedef struct nodo nodo_t;

void insertar_valor(nodo_t *head, int id, char *nombre, char *marca, float peso, int stock, char *fecha){   
    nodo_t *current = head;
    while (current->next != NULL){
        current = current->next;
    }
    current->next = (nodo_t *) malloc(sizeof(nodo_t));
    current->next->id = id;
    strcpy(current->next->nombre, nombre);
    strcpy(current->next->marca, marca);
    current->next->peso = peso;
    current->next->stock = stock;
    strcpy(current->next->fecha, fecha);
    current->next->next = NULL;

}

void recorrer_lista(nodo_t *head){
    nodo_t *current = head;
    while (current != NULL){
        printf("ID: %d\n", current->id);
        printf("Nombre: %s\n", current->nombre);
        printf("Marca: %s\n", current->marca);
        printf("Peso: %fkg\n", current->peso);
        printf("Stock: %d\n", current->stock);
        printf("Fecha: %s\n", current->fecha);
        printf("------------------------------\n");
        current = current->next;
    }
}

int main(){
    nodo_t *head = NULL;
    head = (nodo_t *) malloc(sizeof(nodo_t));
    if (head == NULL){
        return 1;
    }
    head->id = 100;
    strcpy(head->nombre, "Manzana");
    strcpy(head->marca, "PrimaFlor");
    head->peso = 0.5;
    head->stock = 10;
    strcpy(head->fecha, "2025-04-01");
    head->next = NULL;

    insertar_valor(head, 101, "Pera", "Trops", 0.3, 20, "2025-04-02");
    insertar_valor(head, 102, "Banana", "Fashion", 0.2, 15, "2025-04-03");
    insertar_valor(head, 103, "Naranja", "GrupoLucas", 0.4, 25, "2025-04-04");
    insertar_valor(head, 104, "Uva", "Del Monte", 0.1, 30, "2025-04-05");
    
    recorrer_lista(head);

    // Liberar memoria de la lista
    // Se libera la memoria de cada nodo
    nodo_t *current = head;
    nodo_t *next_node;
    while (current != NULL){
        next_node = current->next;
        free(current);
        current = next_node;
    }
    head = NULL;
    // Liberara cabecera
    free(head);

    /*
    nodo_t *head = NULL;
    head = (nodo_t *) malloc(sizeof(nodo_t));
    if (head == NULL){
        return 1;
    }
    printf("Insertar valor: ");
    scanf("%d", &head->value);
    printf("Valor: %d\n", head->value);

    head->next = (nodo_t *) malloc(sizeof(nodo_t));
    if (head->next == NULL){
        return 1;
    }
    printf("Insertar valor: ");
    scanf("%d", &head->next->value);
    printf("Valor: %d\n", head->next->value);
    */

    return 0;
}