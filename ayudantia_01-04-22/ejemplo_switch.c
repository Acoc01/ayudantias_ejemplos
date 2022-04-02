#include <stdio.h>

int main(){
    /*Veremos un error que puede suceder cuando no utilizamos bien
     * la estructura de un switch case, recuerden que no se admiten
     * operaciones booleanas (Logicas) en los casos de un switch case*/
    int a;
    printf("Ingrese el valor de a: \n");
    scanf("%d", &a);
    switch(a){
        case 1: 
            printf("Hola");
        case 2:
            printf("Hola que");
        case 3:
            printf("Hola que tal")
    }
    /*¿Cual es el error? ¿Como puedo hacer que imprima algo si a > 3?*/
    return 0;
}