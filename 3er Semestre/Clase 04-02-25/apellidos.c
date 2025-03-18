#include <stdio.h>
#include <ctype.h>

int main() {
    char primer_apellido[20];
    printf("INSERTE SU PRIMER APELLIDO: ");
    scanf("%s", primer_apellido);

    char segundo_apellido[20];
    printf("INSERTE SU SEGUNDO APELLIDO: ");
    scanf("%s", segundo_apellido);

    printf("Tus apellidos son: %s %s\n", primer_apellido, segundo_apellido);
    for(int i = 0; i < 20; i++) {
        primer_apellido[i] = tolower(primer_apellido[i]);
        segundo_apellido[i] = tolower(segundo_apellido[i]);

    }

    char abecedario[27] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 
                'n', 'ñ', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 
                'y', 'z'};
    int pos = 0;
    for(int i = 0; i < 20; i++) {
        if(primer_apellido[i] != segundo_apellido[i]) {
            pos = i;
            break;
        }
    }
    for(int i = 0; i < 27; i++) {
        if(primer_apellido[pos] == abecedario[i]) {
            printf("El primer apellido %s es mayor que %s en el abecedario\n", primer_apellido, segundo_apellido);
            break;
        } else if(segundo_apellido[pos] == abecedario[i]) {
            printf("El segundo apellido %s es mayor que %s en el abecedario\n", segundo_apellido, primer_apellido);
            break;
        }
    }
    return 0;
}