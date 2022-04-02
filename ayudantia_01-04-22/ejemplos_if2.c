#include <stdio.h>

int main(){
    /*Ahora veremos un error que puede pasarles y tiene que ver
     * con el rango de las variables. Con rango me refiero al espacio
     * logico donde existen.*/
    int a;
    /*Empezaremos con una suma simple que se efectuara solo si a es negativo*/
    printf("Ingrese el valor para a: \n");
    scanf("%d", &a);
    if(a < 0){
        int b = 100;
    }
    printf("La variable ingresada es: %d", a+b);
    /*¿Por que no compila? ¿Como puedo arreglarlo? Tiene que ver con el rango
     * en el que fue declarada la variable, todo lo que declaremos dentro
     * de los ifs o for o whiles, o dentro de una funcion en si, solo va a
     * existir mientras la funcion se este ejecutando, es decir que solo
     * va a existir dentro del if en este caso.
     * 
     * Intenta mover el printf dentro del if y ve que sucede.*/
    return 0;
}