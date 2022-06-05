#include <stdio.h>
#include <string.h>

int main(){
    char s1[100];
    //scanf("%[^\n]",s1);
    int cont = 0;
    for(int i = 0; i < strlen(s1); ++i){
        if(s1[i] == ' ')cont++;
    }
    char s2[100], j = 0;
    while(scanf("%s",s1) != EOF){
        printf("%ld\n",strlen(s1));
        strcat(s2,s1);
        //s2[strlen(s1)] = ' ';
        j+=strlen(s1);
    }
    s2[j] = '\0';
    printf("%s",s2);
   /* char aux[100];
    strcat(aux,strtok(s1," \n"));
    printf("%s\n",s1);
    for(int i = 0; i < cont; ++i){
        strcat(aux,strtok(NULL," \n"));
    }
    printf("%s\n",aux);*/
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