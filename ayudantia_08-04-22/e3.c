#include <stdio.h>
/*Reciba un numero entero e imprima el siguiente patrón:
 * 
 * n = 4
 *
 *###*###   
 *##* *##   
 *#* * *#
 ** * * *
 *---------
 * Filas: 
 * Espacios:*/
int main(){
	int espacios,filas,numeros=1;
	scanf("%d",&filas);
	espacios = filas-1;
	for (int i = 0; i <= filas; ++i)
	{
		for (int j = espacios; j >= 0  ; --j)
		{
			printf(" ");
		}
		for(int k = 1; k <= i; ++k){
			printf("%d ",numeros++);
		}
		for (int j = espacios; j >= 0  ; --j)
		{
			printf(" ");
		}
		printf("*\n");
		espacios--;
	}
	return 0;
}