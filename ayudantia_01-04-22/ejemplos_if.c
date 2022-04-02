#include <stdio.h>

int main(){

    /*El primer ejemplo es para referirse a los operadores logicos
     * si lo que queremos es realizar una comparacion en un rango
     * como verificar que 0 < a < b debemos realizar lo siguiente*/
    int a,b;
    printf("Ingrese a y b, respectivamente: \n");
    scanf("%d %d", &a, &b);
    if((a > 0) && (a < b)){
        printf("Se cumple que 0 < a < b");
    }
    /*¿Por que no funcionaria poner 0 < a < b dentro del if?*/
    /*¿Como puedo hacer para que me indique el programa si a es menor
     * que 0 o mayor que b?
     * ¿Que sucede si escribo un or logico en vez del and logico en el if?*/
    return 0;
}