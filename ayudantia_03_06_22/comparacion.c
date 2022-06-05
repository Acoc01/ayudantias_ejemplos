#include <stdio.h>
#include <string.h>

int main(){
	char s1[100];
	scanf("%[^\n]",s1);
	char c = getchar();
	Hola 
	Mundo\n
	HolaMundo

	char s2[100];
	//scanf("%[^\n]",s2);
	strcpy(s2,s1);
	if(!strcmp(s1,s2)){
		printf("Son iguales\n");
	}else{
		printf("Son distintos\n");
	}

	/*int tam1 = strlen(s1);
	int tam2 = strlen(s2);
	int flag = 1;

	for(int i = 0; i < tam1; ++i){
		if(tam1 != tam2){
			break;
		}
		if(s1[i] != s2[i]){
			flag = 0;
			break;
		} 
	}

	if(flag){
		printf("Son iguales\n");
	}else{
		printf("Son distintos\n");
	}*/


	return 0;
}