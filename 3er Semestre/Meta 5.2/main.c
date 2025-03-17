#include <stdio.h>
#include <stdlib.h>
int main(){
    int n, m;
    printf("Seleccione el alto y largo de la matriz NxM:\n");
    printf("Selecciones N: ");
    scanf("%d", &n);
    printf("Selecciones M: ");
    scanf("%d", &m);

    double **datos = (double **)malloc(n * sizeof(double*));
    for(int i = 0; i < n; i++) {
        datos[i] = (double *)malloc(m * sizeof(double)); 
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            printf("Matriz[%d][%d], espacio en memoria: %x\n", i, j, &datos[i][j]);
        }
    }

    for(int i = 0; i < n; i++) {
        free(datos[i]);  
    }
    free(datos);
  
    return 0;
}