#include <stdio.h>

int main(){
  int f1,f2,c1,c2;
  scanf("%d %d %d %d",&f1,&c1,&f2,&c2);
  int mat1[f1][c1], mat2[f2][c2];
  printf("Mat1:\n");
  for(int i = 0; i < f1; ++i){
    for(int j = 0; j < c1; ++j){
      int aux;
      scanf("%d",&aux);
      mat1[i][j] = aux;
    }
  }
  printf("Mat2:\n");
  for(int i = 0; i < f2; ++i){
    for(int j = 0; j < c2; ++j){
      int aux;
      scanf("%d",&aux);
      mat2[i][j] = aux;
    }
  }

  //Verificar si son iguales
  int igual = 1;
  if(f1 == f2 && c1 == c2){    
    for(int i = 0; i < f1; ++i){
      for(int j = 0; j < c1; ++j){
        if(mat1[i][j]!=mat2[i][j]){
          igual = 0;
          break;
        }
      }
    }
  }else{
    printf("No son iguales\n");
  }

  if(igual){
    printf("Son iguales\n");
  }else{
    printf"No son iguales\n");
  }
  return 0;
}
