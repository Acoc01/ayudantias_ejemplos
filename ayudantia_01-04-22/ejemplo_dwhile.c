#include <stdio.h>

int main(){
    /*Ahora veremos el ciclo do while, funciona exactamente igual que un ciclo
    * while pero con la diferencia de que ejecutara al menos una vez lo que esta
    * dentro de los corchetes*/
    /*Escribire el ejemplo de la "calculadora" a continuacion*/
    int a,flag = 1;
    printf("Ingrese el valor de a: \n");
    scanf("%d", &a);
    do{
        printf("Seleccione una operacion:\n");
        printf("1. Sumar a + b\n");
        printf("2. Restar a - b\n");
        printf("3. Salir.\n")
        int b = 50;
        switch(a){
            case 1: printf("El resultado es: %d\n", a+b);
                    break;
            case 2: printf("El resultado es: %d\n", a-b);
                    break;
            case 3: flag = 0;
                    break;
            default: printf("Ingrese una operacion valida\n");
                    break;
        }

    }while(flag != 0);
    /*Si pueden intenten jugar con esto a ver si pueden hacer una calculadora mas completa*/
    /*Recuerden que CUALQUIER duda pueden preguntarme, da igual el dia o la hora, respondere*/
    return 0;
}