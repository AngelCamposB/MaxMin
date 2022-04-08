void sort (int arreglo[],int longitud_arreglo){
    int valor_1;
    int valor_2;
    int i = 0;
    while (i < longitud_arreglo){
        valor_1 = arreglo[i];
        valor_2 = arreglo[i+1];
        if (valor_1 > valor_2){
            ///printf("Bucle %d: ",i);
            arreglo[i] = valor_2;
            arreglo[i+1] = valor_1;
            i = 0;
            ///printf("{");
            ///for (int i = 0; i < longitud_arreglo; i++) printf("%d ",arreglo[i]);
            ///printf("}\n");
        }else{
            i++;
            ///printf("Bucle %d: ",i);
            ///printf("{");
            ///for (int i = 0; i < longitud_arreglo; i++) printf("%d ",arreglo[i]);
            ///printf("}\n");
        }
    }    
    printf("El arreglo ordenado es {");
    for (int i = 0; i < longitud_arreglo; i++) printf("%d ",arreglo[i]);
    printf("}\n");
}