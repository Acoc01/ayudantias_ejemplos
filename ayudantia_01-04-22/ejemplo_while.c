#include <stdio.h>

int main(){
    /*El ciclo while es el nucleo de un ciclo for, pero puede ser mas potente
    * que un ciclo for, pero por ahora veremos un ejemplo de como escribir el
    * mismo ciclo for de antes pero utilizando un ciclo while */
    int i = 0;
    /*El ciclo ejecuta lo que esta dentro de los corchetes mientras la
    * condicion dentro de los parentesis sea verdadera*/
    while(i < 10){
        printf("El valor de i en la iteracion %d es: %d\n", i, i);
    }
    printf("El valor de i al terminar la ultima iteracion es: %d\n", i);
    /*¿Como hago un ciclo infinito? Si usan linux se cancela la ejecucion con ctrl+c o
    * cerrando la ventana*/
    return 0;
}