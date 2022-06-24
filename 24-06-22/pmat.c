#include <stdio.h>
#include <stdlib.h>

void print(int *arr, int m, int n){
	for(int i = 0; i < m; ++i){
		for(int j = 0; j < n; ++j){
			printf("%d ",*arr+i*n+j);
		}
		printf("\n");
	}
	/* (0,0) = arr+0*3 + 0 = 0
	   (0,1) = arr+0*3 + 1 = 4 // arr+1 = arr(0bytes) + 1(1*4bytes)
	   (0,2) = arr+0*3 + 2 = 8
	   ------------------------
	   (1,0) = arr+1*3 + 0 = 12
	   (1,1) = arr+1*3 + 1 = 18*/
}


int main(void){

	int arr[3][3]; // arr = {{1,2,3},{4,5,6}};
	/*[1][2][3]
	  [4][5][6]
       0  4  8  12 16 20
	  [1][2][3][][][][4][5][6] arr+i*/
	int aux = 0;
	for(int i = 0; i < 3; ++i){
		for(int j = 0; j < 3; ++j){
			aux++;
			arr[i][j] = aux;
		}
	}
	print((int*)arr, 3, 3);
	return 0;
}