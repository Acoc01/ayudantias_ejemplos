#include <stdio.h>

int main(){
    int i = 0;
    /*El ciclo for, es un ciclo que necesita tres cosas para funcionar:
     * Una variable iteradora, o iniciadora sobre la cual iterar, en este caso
     * llamamos a esa variable 'i' de 'iterator'.
     * Tambien necestiamos una condicion que debe ser verdadera mientras dure el ciclo
     * Por ejemplo ¿Que pasaria si nuestra condicion es i < 10 e iniciamos i = 10 antes?
     * Y finalmente necesitamos indicar cuanto vamos a ir aumentando nuestro iterador,
     * lo mas comun es aumentarlo de uno en uno, por eso '++i' <=> 'i+=1' <=> 'i = i + 1'.
     * ¿Que pasaria si hacemos 'i*=2' en vez de '++i' o 'i++'?*/
    for(i; i < 10; ++i){
        printf("El valor de i en la iteracion %d es : %d\n", i, i);
    }
    printf("El valor final de i es: %d\n",i);//¿Por que es 10?

    /*¿Cuantas veces se imprimio el mensaje? ¿Podemos decir que se imprimio 10 veces?
     *¿Que pasa si ahora cambiamos el 10 por una variable n que leamos por input?
     *¿En ese caso podriamos decir que el for va desde i = 0 hasta i = n?
     *¿Se repite entonces n veces?*/
    return 0;
}