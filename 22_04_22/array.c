#include <stdio.h>

int main(){
  int n;
  scanf("%d",&n);
  int arr[n];
  for(int i = 0; i < n; ++i)arr[i]=i+1;
  //Ingresar el elemento a buscar
  int ask;
  scanf("%d",&ask);
  //Imprimimos el arreglo original
  for(int i = 0; i < n; ++i)printf("%d ",arr[i]);
  printf("\n");
  //Ahora lo buscaremos dentro del arreglo
  int existe = 0,pos;
  //Si existe el numero guardamos la posicion e indicamos que existe
  for(int i = 0; i < n; ++i){
    if(arr[i] == ask){
      pos = i;
      existe = 1;
      break;
    }
  }
  //Si existe, vemos si es el ultimo elemento, si es el ultimo elemento
  //entonces simplemente reducimos el n en 1.
  if(existe){
    if(pos == n-1) n--;
    //En caso contrario vamos moviendo los elementos desde
    //el final hacia la izquierda una posicion
    //hasta sobre-escribir el elemento que se queria eliminar
    //luego se resta en 1 el tamanio
    if(pos < n-1){
      int aux = arr[n-1];
      for(int i = n-1; i >= pos+1; --i){
        int swp;
        swp = aux;
        aux = arr[i-1];
        arr[i-1] = swp;
      }
      n--;
    }
  }
  for(int i = 0; i < n; ++i)printf("%d ",arr[i]);
  printf("\n");
  return 0;
}
