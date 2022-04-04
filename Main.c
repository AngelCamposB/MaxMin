#include <stdio.h>

#include "Max.h"
#include "min.h"

int main(){
    int Arreglo[] = {-7,15,18,20,26,25,20};

    int M = arrMax(Arreglo, 7);
    int m = min(7, Arreglo);

    printf("Arreglo = {%d,%d,%d,%d,%d,%d,%d}\n", Arreglo[0],Arreglo[1],Arreglo[2],Arreglo[3],Arreglo[4],Arreglo[5],Arreglo[6]);
    printf("Indice del Mayor: %d\n", M);
    printf("Indice del menor: %d\n", m);

}