#include <stdio.h>
#include <stdlib.h>

struct data{
    int value;
    struct data *next;
};

typedef struct data node;

void insertar_data(node *head, int value_node){
    node *current = head;
    while(current->next != NULL){
       current = current->next;
    }
    current->next = (node *)malloc(sizeof(node));
    current->next->value = value_node;
    current->next->next = NULL;
    printf("Valor insertado: %d\n", current->value);
}

void imprimir_data(node *head){
    node *current = head;
    while(current != NULL){
        printf("--------\n");
        printf("%d\n", current->value);
        current = current->next;
    }
}

void buscar_valor(node *head, int value){
    int i = 0;
    node *current = head;
    while (current != NULL){
        if(current->value == value){
            printf("Valor [%d]encontrado en la posicion %d\n", value, i+1);
        }
        i++;
        current = current->next;
    }
}

int main(){
    node *head = NULL;
    head = (node *)malloc(sizeof(node));
    if (head == NULL) {
        return 1;
    }

    head->value = 1;
    head->next = NULL;

    insertar_data(head, 2);
    insertar_data(head, 3);

    buscar_valor(head, 3);

    imprimir_data(head);


    return 0;
}