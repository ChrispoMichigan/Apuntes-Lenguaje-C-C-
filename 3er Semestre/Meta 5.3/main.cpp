#include <stdio.h>
#include <stdbool.h>

void print(char text[]) {
	printf("Imprimiendo: ");
    printf("%s\n", text);
}

void piramide(int altura) {
    for (int i = 1; i <= altura; i++) {
        for (int j = 1; j <= altura - i; j++) {
            printf(" ");
        }

        for (int k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }

        printf("\n");
    }
}

int main() {
    void(*piramide_p)(int) = &piramide;
    void(*print_p)(char[]) = &print;
    char opc;

    while (true) {
        printf("Seleccione una opcion\n");
        printf("[A] Imprimir Texto\n");
        printf("[B] Formar Piramide\n");
        printf("[C] Salir\n");
        scanf(" %c", &opc);

        if (opc == 'A') {
            char text[100];
            printf("Inserte su texto\n");
            scanf(" %[^\n]", text);
            (*print_p)(text);
            break;
        }

        if (opc == 'B') {
            int altura = 0;
            printf("Inserte la altura de la piramide\n");
            scanf("%d", &altura);
            (*piramide_p)(altura);
            break;
        }

        if (opc == 'C') {
            printf("Saliendo...\n");
            break;
        }

        printf("Opcion incorrecta, vuelva a intentar\n");
    }

    printf("Codigo Terminado\n");
    return 0;
}

