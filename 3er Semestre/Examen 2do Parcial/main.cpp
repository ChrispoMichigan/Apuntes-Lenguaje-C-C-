#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int id_c = 0;

struct data{
    int id;
    bool status;
    char lab[100];
    char modelo[100];
    int year;
    char ip[20];
    char gateway[20];
    char os[20];
    struct data *next;
    
};

typedef struct data Equipo;

// Función para crear un nuevo equipo
void add_team(Equipo *head, int id, bool status, char *lab, char *modelo, int year, char *ip, char *gateway, char *os) {
    Equipo *new_team = head;
    Equipo *temp = (Equipo *)malloc(sizeof(Equipo));
    if (temp == NULL) {
        printf("Error al asignar memoria.\n");
        return;
    }

    if (new_team == NULL) {
        head = temp;
    } else {
        while (new_team->next != NULL) {
            new_team = new_team->next;
        }
        new_team->next = temp;
    }

    temp->id = id_c;
    id_c++;
    temp->status = status;
    strcpy(temp->lab, lab);
    strcpy(temp->modelo, modelo);
    temp->year = year;
    strcpy(temp->ip, ip);
    strcpy(temp->gateway, gateway);
    strcpy(temp->os, os);
    temp->next = NULL;
    
}

void formulario(Equipo *head) {
    int id;
    bool status;
    char lab[100];
    char modelo[100];   
    int year;
    char ip[20];
    char gateway[20];
    char os[20];

    printf("Ingrese el estado del equipo (1 para activo, 0 para inactivo): ");
    scanf("%d", &status);
    printf("Ingrese el laboratorio: ");
    scanf("%s", lab);
    printf("Ingrese el modelo: ");
    scanf("%s", modelo);
    printf("Ingrese el year: ");
    scanf("%d", &year);
    printf("Ingrese la IP: ");
    scanf("%s", ip);
    printf("Ingrese la puerta de enlace: ");
    scanf("%s", gateway);
    printf("Ingrese el sistema operativo: ");
    scanf("%s", os);

    add_team(head, id, status, lab, modelo, year, ip, gateway, os);
    printf("Equipo agregado exitosamente.\n");
    system("pause");
}

void mostrar_lista(Equipo *head) {
    system("cls");
    printf("Lista de equipos:\n");
    Equipo *current = head;
    while (current != NULL) {
        printf("ID: %d\n", current->id);
        printf("Status: %s\n", current->status ? "Activo" : "Inactivo");
        printf("Laboratorio: %s\n", current->lab);
        printf("Modelo: %s\n", current->modelo);
        printf("Year: %d\n", current->year);
        printf("IP: %s\n", current->ip);
        printf("Gateway: %s\n", current->gateway);
        printf("OS: %s\n", current->os);
        printf("\n");
        current = current->next;
    }
    system("pause");
}


void modificar_status(Equipo *head) {
    system("cls");
    int id;
    bool status;

    printf("Ingrese el ID del equipo a modificar: ");
    scanf("%d", &id);
    Equipo *current = head;
    while (current != NULL) {
        if (current->id == id) {
            current->status = status;
            printf("Ingrese el nuevo estado del equipo (1 para activo, 0 para inactivo): ");
            scanf("%d", &status);
            current->status = status;
            printf("Estado del equipo con ID %d modificado exitosamente.\n", id);
            printf("Nuevo estado: %s\n", current->status ? "Activo" : "Inactivo");
            system("pause");
            return;
        }
        current = current->next;
    }
    printf("Equipo con ID %d no encontrado.\n", id);
    system("pause");

}

void busqueda_os(Equipo *head) {
    system("cls");
    char os[20];
    printf("Ingrese el sistema operativo a buscar: ");
    scanf("%s", os);
    Equipo *current = head;
    bool found = false;
    while (current != NULL) {
        if (strcmp(current->os, os) == 0) {
            printf("ID: %d\n", current->id);
            printf("Status: %s\n", current->status ? "Activo" : "Inactivo");
            printf("Laboratorio: %s\n", current->lab);
            printf("Modelo: %s\n", current->modelo);
            printf("Year: %d\n", current->year);
            printf("IP: %s\n", current->ip);
            printf("Gateway: %s\n", current->gateway);
            printf("\n");
            found = true;
        }
        current = current->next;
    }
    if (!found) {
        printf("No se encontraron equipos con el sistema operativo %s.\n", os);
    }
    system("pause");
}

int main(){
    // Crear un arreglo de equipos
    Equipo *head = NULL;
    head = (Equipo *)malloc(sizeof(Equipo));
    if (head == NULL) {
        printf("Error al asignar memoria.\n");
        return 1;
    }
    head->next = NULL;

    while(true){
        system("cls");
        printf("Selecciones una opcion: \n");
        printf("1. Ver los equipos\n");
        printf("2. Add Equipo\n");
        printf("3. Modificar status de un equipo\n");
        printf("4. Busqueda por OS\n");
        printf("5. Salir\n");
        int option;
        scanf("%d", &option);
        switch(option){
            case 1:
                printf("Ver los equipos\n");
                if (head == NULL) {
                    printf("No hay equipos registrados.\n");
                    system("pause");
                } else {
                    mostrar_lista(head);
                }
                break;
            case 2:
                printf("Add Equipo\n");
                formulario(head);
                break;
            case 3:
                printf("Modificar status de un equipo\n");
                modificar_status(head);
                break;
            case 4:
                printf("Busqueda por OS\n");
                busqueda_os(head);
                break;
            case 5:
                printf("Saliendo...\n");
                break;
            default:
                printf("Opcion no valida\n");
        }
        if (option == 5) {
            break;
        }
    }

    // Liberar la memoria asignada a la lista enlazada
    Equipo *current = head;
    while (current != NULL) {
        Equipo *temp = current;
        current = current->next;
        free(temp);
    }
    head = NULL;
    free(head);
    

    return 0;
}