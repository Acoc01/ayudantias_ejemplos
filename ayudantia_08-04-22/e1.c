#include <stdio.h>
/*Un programa que recibe un numero (n), debemos imprimir los n numeros naturales
 y luego calcular la suma e imprimirla junto con el promedio.*/
int main(){
	int n;
	int total=0;
	scanf("%d",&n);
	/*Aumenta i hasta llegar a n
	 *El for calcula la suma de los n numeros naturales*/
	for (int i = 1; i <= n; ++i)
	{
		printf("%d ",i );
		total=total + i;
	}
	printf("Total: %d\n", total);
	printf("Promedio: %d\n", (total/n));
	return 0;
}