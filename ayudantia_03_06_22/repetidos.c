#include <stdio.h>
#include <string.h>

int main(){
    char s1[100];
    scanf("%[^\n]",s1);
    int cont = 0;
    for(int i = 0; i < strlen(s1); ++i){
        if(s1[i] == ' ')cont++;
    }

    char aux[100];
    strcat(aux,strtok(s1," \n");
    for(int i = 0; i < cont; ++i){
        strcat(aux,strtok(NULL," \n"));
    }
    printf("%s\n",aux);
    return 0;
    /*
     * int j = 0;
     * for(int i = 0; i < strlen(s1);++i){
     *      if(s1[i] != ' '){
     *          aux[j] = s1[i];
     *          j++;
     *      }
     * }
     **/
}
