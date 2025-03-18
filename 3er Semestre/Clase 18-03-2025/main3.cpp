#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
}books;

void printBook(books);

int main(){
    //Declarar la estructura
    //Evitar el uso de struct
    books book1, book2;
    
    //Asignar datos a la estructuras
    strcpy(book1.title, "C Programming");
    strcpy(book1.author, "Nuha Ali");
    strcpy(book1.subject, "C Programming Tutorial");
    book1.book_id = 6495407;

    strcpy(book2.title, "Telecom Billing");
    strcpy(book2.author, "Zara Ali");
    strcpy(book2.subject, "Telecom Billing Tutorial");
    book2.book_id = 6495700;

    //Mostrar datos
    printBook(book1);
    printf("\n");

    printBook(book2);
    printf("\n");
    
    
    return 0;
}

void printBook(books book){

    printf("Book title: %s\n", book.title);
    printf("Book author: %s\n", book.author);
    printf("Book subject: %s\n", book.subject);
    printf("Book id: %d\n", book.book_id);
    
}
