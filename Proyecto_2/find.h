
int arrFind(int arrage[], int size, int data){
    int F = -1;
    for(int i=0; i<size; i++){
        if(data == arrage[i]){
            F = i;
        }
    }

    return F;
}