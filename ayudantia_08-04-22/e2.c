#include <stdio.h>
/*Un programa que reciba dos numeros, esos dos numeros positivos.
 * representan un intervalo, es decir si n1 = 1, n2 = 5
 * [1,5]
 * Calcular la suma de los numeros impares que pertenezcan
 * al intervalo
 * 
 * Ejemplo: n1=1, n2=5, Resultado = 1+3+5 = 9.*/
int main(){
	int n1,n2,total = 0;
	scanf("%d %d",&n1, &n2);
	for (int i = n1; i <= n2; ++i)
	{
		if(i % 2 != 0){
			total += i;
		}
	}
	printf("%d\n", total);
	return 0;
}