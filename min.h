int min(int long_list, int list[]){
    int value;
    int valuemin = list[0];
    for (int index = 0; index < long_list; index = index + 1){
        value = list[index];
        if (value < valuemin) valuemin=value;
    }
    int index;
    for (int i = 0; i < long_list; i++){
        value = list[i];
        if (value == valuemin){
            index = i;
            break;
        }
    }
    return index;
}