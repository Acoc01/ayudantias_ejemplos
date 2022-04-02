#include <stdio.h>

int main(){
    /* Ahora veremos un ejemplo que tiene que ver con formas distintas de
     * escribir los if.
     * Digamos que queremos imprimir si un numero es positivo o negativo.
     * Para hacerlo utilizaremos un if.*/
    int a;
    printf("Ingrese el valor de a: \n");
    scanf("%d", &a); /*Recordar no agregar texto dentro de los scanf >:c*/
    if(a < 0);
    {
        printf("Negativo");
    }else printf("Positivo");
    /*Re-ordena el codigo del if para que funcione de manera correcta.
     * Recordar que existe una manera de escribir ifs y else cortos.
     * ¿Como los escribo y cuantas operaciones puedo hacer?.
     * ¿Funciona el else? ¿Por que?.*/
    return 0;
}