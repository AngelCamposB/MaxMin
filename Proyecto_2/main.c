
#include <stdio.h>
#include "find.h"
#include "print.h"
#include "sort.h"

int main(){
    int arreglo[] = {9, 5, 1, -7, -5, -3};
    int long_arreglo = 6;
    int valor_buscar = -3;
    arrPrint(arreglo,long_arreglo);
    printf("El indice del valor a buscar (%d) es %d\n",valor_buscar,arrFind(arreglo,long_arreglo,valor_buscar));
    sort(arreglo,long_arreglo);
    return 0;
}