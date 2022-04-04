int arrMax(int arreglo[], int size){
    int i=0;
    int M = i;
    for (int i=0; i<size; i++){
        if(arreglo[i] > arreglo[M]){
            M = i;
        }
    }
    return M;
}