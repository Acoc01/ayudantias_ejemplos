#include <stdio.h>

int main (int argc, char *argv[])
{
  int n1,n2,m1,m2;
  do {
    scanf("%d %d %d %d",&n1, &m1, &n2, &m2);
  } while(n1 > n2 || m1 > m2 || n1 < 0 || m1 < 0 || n2 < 0 || m2 < 0);
  
  int mat1[n1][m1], mat2[n2][m2];

  for (int i = 0; i < n1; i++) {
   for (int j = 0; j < m1; j++) {
     scanf("%d", &mat1[i][j]);
     
   } 
  }

  for (int i = 0; i < n2; i++) {
   for (int j = 0; j < m2; j++) {
     scanf("%d", &mat2[i][j]);
     
   } 
  }

  int es_submat = 0;

  for (int i = 0; i <= (n2-n1); i++) {
    for(int j = 0; j <= (m2-m1); j++){
      es_submat = 1; //(i,j)

      for (int k = 0; k < n1; k++) {
       for (int l = 0; l < m1; l++) {
        if(mat1[k][l] != mat2[i+k][j+l]){
          es_submat = 0;
          break;
        }
       }if(!es_submat)break; 
      }
      if(es_submat)break;
    }   
    if(es_submat)break; 
  }

  if(es_submat){
   printf("Matriz 1 es sub matriz de Matriz 2\n"); 
  }else{
    printf("Matriz 1 no es sub matriz de Matriz 2\n");
  }


  return 0;
}
