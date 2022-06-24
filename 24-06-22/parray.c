#include <stdio.h>
#include <stdlib.h>

void leer_arr(int *arr, int tam);

int main(void){
    printf("Ingrese numero de elementos\n");
    int n;
    scanf("%d",&n);
    int arr[n];
    leer_arr(arr,n);
    printf("Elementos: \n");
    for(int i = 0; i < n; ++i){
        printf("%d ",*arr+i);
    }
    printf("\n");
    return 0;
}

void leer_arr(int *arr, int tam){
    printf("Ingrese numeros a almacenar\n");
    for(int i = 0; i < tam; ++i){
        scanf("%d",arr+i);
    }
}