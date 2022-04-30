#include <stdio.h>

int main(){
    int f1,c1,f2,c2;
    do{
        scanf("%d %d %d %d", &f1, &c1, &f2, &c2);
    }while(f1 <= 0 || f2 <= 0 || c1 <= 0 || c2 <= 0 || f1 > f2 || c1 > c2);
    int mat1[f1][c1];
    int mat2[f2][c2];
    for(int i = 0; i < f1; ++i){
        for(int j = 0; j < c1; ++j){
            scanf("%d",&mat1[i][j]);
        }
    }

    for(int i = 0; i < f2; ++i){
        for(int j = 0; j < c2; ++j){
            scanf("%d",&mat2[i][j]);
        }
    }

    int es_submatriz = 0;
    for(int i = 0; i < (f2-f1)+1; ++i){
        for(int j = 0; j < (c2-c1)+1; ++j){
            es_submatriz = 1; //Asumimos que es verdadero
            for(int k = 0; k < f1; ++k){
                for(int l = 0; l < c1; ++l){
                    if(mat1[k][l] != mat2[i+k][j+l]){
                        es_submatriz = 0;
                        break;
                    }
                }
                if(!es_submatriz) break;
            }
            if(es_submatriz)break;
        }if(es_submatriz)break;
    }
    if(es_submatriz){
        printf("matriz1 es submatriz de matriz2\n");
    }else{
        printf("matriz1 no es submatriz de matriz2\n");
    }
    return 0;
}
