#include <stdio.h>
#include <stdbool.h>


void buble(int data[],int size){
    int i = 0;
    bool ordenado = false;
    while((i < size) && (ordenado == false)){
        i += 1;
        ordenado = true;
        for(int j = 0; j < size -1; j++){
            if(data[j] > data[j+1]){
                ordenado = false;
                int aux = data[j];
                data[j] = data[j+1];
                data[j+1] = aux;
            }
        }
    }

    
    
}

int main(){
    int data[] = {6,2,1,3,3,1,1,2};
    int size = sizeof(data)/sizeof(data[0]);
    buble(data, size);
    for(int i = 0; i < size; i++){
        printf("[%d]", data[i]);
    }
    return 0;
}

