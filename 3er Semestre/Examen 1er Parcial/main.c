#include <stdio.h>
#include <stdbool.h>

int M1[3][3]= {
    {1,2,3},
    {4,5,6},
    {7,8,9}
};

int M2[3][3]= {
    {-9,-8,-7},
    {-6,-5,-4},
    {-3,-2,-1}
};

int result[3][3];

void mostrarResult(){
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("%d\t",result[i][j]); 
        } 
        printf("\n");
    }
}

void sumaMatriz(){
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            result[i][j] = M1[i][j] + M2[i][j];
        } 
    }
    printf("Se han sumado las matrices\n");
    mostrarResult();
}



int main(){
    int opc;
    while(true){
        printf("Menu de opciones\n");
        printf("[1] Suma matrices\n");
        printf("[2] Salir\n");
        scanf("%d", &opc);
        if(opc > 0 && opc < 3){
            break;
        }
        printf("Opcion invalida, vuelve a insertar\n");
    }
    switch (opc){
    case 1:
        sumaMatriz();
        break;       
    case 2:
        printf("Saliendo...\n");
        break;
    default:
        break;
    }
    printf("Codigo Terminado\n");
    return 0;
}