#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct nodo{
    int value;
    struct nodo *next;
};

typedef struct nodo nodo_t;

/*
nodo_t *head = NULL;
head = (nodo_t *) malloc(sizeof(nodo_t));

if (head == NULL){
    return 1;
}

head->value = 1;
head->next = (nodo_t *) malloc(sizeof(nodo_t));
head->next->value = 2;
head->next->next = NULL;
*/

void print_list(nodo_t *head){
    nodo_t *current = head;
    while (current != NULL){
        printf("%d\n", current->value);
        current = current->next;
    }
}

void push(nodo_t *head, int val){
    nodo_t *current = head;
    while (current->next != NULL){
        current = current->next;
    }
    current->next = (nodo_t *) malloc(sizeof(nodo_t));
    current->next->value = val;
    current->next->next = NULL;
}

int pop(nodo_t **head){
    int retval = -1;
    nodo_t *next_node = NULL;
    if (*head == NULL){
        return -1;
    }

    next_node = (*head)->next;
    retval = (*head)->value;
    free(*head);
    *head = next_node;
    return retval;
}

int remove_by_value(nodo_t **head, int val){
    nodo_t *current = *head;
    nodo_t *prev = NULL;

    while (current != NULL && current->value != val){
        prev = current;
        current = current->next;
    }

    if (current == NULL){
        return -1; // Value not found
    }

    if (prev == NULL){
        *head = current->next; // Remove head
    } else {
        prev->next = current->next; // Remove middle or last node
    }

    free(current);
    return 0; // Success
}

int main(){
    nodo_t * test_list = (nodo_t *) malloc(sizeof(nodo_t));
    test_list->value = 1;
    test_list->next = (nodo_t *) malloc(sizeof(nodo_t));
    test_list->next->value = 2;
    test_list->next->next = (nodo_t *) malloc(sizeof(nodo_t));
    test_list->next->next->value = 3;
    test_list->next->next->next = (nodo_t *) malloc(sizeof(nodo_t));
    test_list->next->next->next->value = 4;

    
    printf("Cacahuates\n");
    return 0;
}