#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct nodo{
    int value;
    struct nodo *right;
    struct nodo *left;
};

typedef struct nodo nodo_t;

void insert_nodo_valor(nodo_t *head, int value_insert){
    nodo_t *current = head;
    printf("Valor en memoria de head: %x \n", current);
    
    printf("Value en head: %d \n", current -> value);

}


int main(){
    nodo_t *head = NULL;
    head = (nodo_t*)malloc(sizeof(nodo_t));

    head -> value = 0;
    head -> right = NULL; 
    head -> left = NULL;

    insert_nodo_valor(head, 2);



    return 0;
}