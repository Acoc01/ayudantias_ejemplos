#include <stdio.h>
#include <string.h>

char toMayus(char c){
	char aux;
	//printf("%c",c);
	if(c >= 'a' && c <= 'z'){
		c -= 32;
		aux = c;
	}
	//printf("%c",aux);
	return aux;
}

int main(){
	/*char c= 'a';
	printf("%d\n",c);
	int arr[124];

	for(int i = 0; i < 124; ++i){
		arr[i] = 0;
	}
	arr['a']++;
	printf("%d\n",arr['a']);*/

	char s1[100];
	scanf("%s",s1);//Leer string
	int arr[92];
	for(int i = 0; i < 92; ++i){
		arr[i] = 0;
	}
	int tam = strlen(s1);
	for(int i = 0; i < tam; ++i){
		char aux2 = toMayus(s1[i]);
		if(s1[i] >= 'a' && s1[i] <= 'z'){

			s1[i] = aux2;
		}	
	}
	printf("%s\n",s1);

	for(int i = 0; i < tam; ++i){
		int pos = s1[i];
		arr[pos]++;
	}

	for(int i = 65; i < 91; ++i){
		printf("%c: %d\n",i, arr[i]);
	}






	/*printf("%s\n",s1);	
	int i;
	for(i = 0; i < 100; ++i){
		if(s1[i] == '\0')break;
	}
	printf("%d\n",i);
	int tam = strlen(s1);
	printf("%d\n", tam);*/

	return 0;
}