#include <stdio.h>
#include <stdlib.h>

int main() {
  int flag = 1;
  do {
    printf("Ingrese un numero para escoger una opcion\n");
    printf("0: Salir\n");
    printf("1: Escribir nuevo archivo\n");
    printf("2: Leer un archivo\n");
    int op;
    scanf("%d", &op);
    if (op == 0)
      flag = 0;
    if (op == 1) {
      FILE *fp;
      char name[101];
      printf("Ingrese nombre del nuevo archivo\n");
      scanf("%s", name);
      getchar();
      fp = fopen(name, "w");
      printf("Ingrese el texto a guardar\n");
      char text[100];
      scanf("%[^\n]", text);
      fwrite(text, 1, 100, fp);
      fclose(fp);
      printf("Archivo escrito con exito\n\n");
    }
    if (op == 2) {
      FILE *fp;
      char name[101];
      printf("Ingrese el nombre del archivo a leer\n");
      scanf("%s", name);
      getchar();
      fp = fopen(name, "r");
      int size;
      fseek(fp, 0, SEEK_END);
      size = ftell(fp);
      rewind(fp);
      printf("El contenido del archivo es: \n");
      char *buffer = malloc(size);
      if (fgets(buffer, size, fp) != NULL) {
        printf("%s\n\n", buffer);
      } else {
        printf("Error al obtener contenido del archivo\n");
      }
      free(buffer);
    }

  } while (flag);
  return 0;
}
