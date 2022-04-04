#include<stdio.h>

int arrMax(int arreglo[], int size);

int main(){
    int array[] = {0,2,5,7,15,18,23,26,25,20};
    arrMax(array, 10);
}

int arrMax(int arreglo[], int size){
    int i=0;
    int M = i;
    for (int i=0; i<size; i++){
        if(arreglo[i] > arreglo[M]){
            M = i;
        }
    }
    printf("\n Index del Mayor = %d\n", M);
}