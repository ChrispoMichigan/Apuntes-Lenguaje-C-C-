#include <stdlib.h>
#include <stdio.h>

void matriz_2d(){
    int n, m, c;
    printf("Seleccione el alto y largo de la matriz MxM\n");
    printf("Seleccione N: ");
    scanf("%d", &n);
    printf("Seleccione M: ");
    scanf("%d", &m);

    double **datos = (double **)malloc(n * sizeof(double*));
    for(int i = 0; i < n; i++){
        datos[i] = (double*)malloc(m * sizeof(double));
    }
    c = 1;
    for (int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            printf("%d. Matriz[%d][%d], espacio en memoria %x\n", c, i, j, &datos[i][j]);
            c++;
        }
    }

    for(int i = 0; i < n; i++){
        free(datos[i]);
    }
    free(datos);
}

void matriz_3d(){
    int n, m, l, c;
    printf("Seleccione el alto y largo de la matriz MxMxL\n");
    printf("Seleccione N: ");
    scanf("%d", &n);
    printf("Seleccione M: ");
    scanf("%d", &m);
    printf("Seleccione L: ");
    scanf("%d", &l);

    double ***datos = (double ***)malloc(n * sizeof(double**));
    for(int i = 0; i < n; i++){
        datos[i] = (double**)malloc(m * sizeof(double*));
        for(int j = 0; j < m; j++){
            datos[i][j] = (double*)malloc(l * sizeof(double));
        }
    }
    c = 1;
    for (int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            for(int k = 0; k < l; k++){
                printf("%d. Matriz[%d][%d][%d], espacio en memoria %x\n", c, i, j, k, &datos[i][j][k]);
                c++;
            }
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            free(datos[i][j]);
        }
        free(datos[i]);
    }
    free(datos);
}


int main(){
    //Generara matriz 2 dimensiones
    matriz_2d();
    //Genera matriz 3 dimensiones
    matriz_3d();

    return 0;
}