#include <stdio.h> 

int funcion(int argumento); 

int main(int argc, char *argv[]){ 
    int variableLocal = 33; 
    int resultadoDeLlamada; 
    printf("\n\nVisualizacion de direcciones\n================================\n\n"); 
    printf("\nLa direccion de variableLocal es : %u\n", &variableLocal); 
    printf("La direccion de resultadoDeLlamada es %u\n", &resultadoDeLlamada); 
    printf("La direccion de main es : %u\n", &main); 
    printf("La direccion de funcion es : %u\n", &funcion); 
    resultadoDeLlamada = funcion(variableLocal); 
    printf("\n\nvariableLocal vale %d y resultadoDeLlamada vale %d\n", variableLocal, resultadoDeLlamada); 
    return 0; 
}

int funcion(int argumento) { 
    int resultado; 
    resultado = argumento * 3; 
    printf("La direccion de argumento es : %u\n", &argumento); 
    printf("La direccion de resultado es : %u\n", &resultado); 
    return resultado; 
}