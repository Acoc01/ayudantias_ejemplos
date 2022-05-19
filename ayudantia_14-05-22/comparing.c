#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  double a;
  int b, c;
  scanf("%d %d", &b, &c);
  a = (double)b / c;
  printf("double a: %lf\n", a);
  double a2;
  scanf("%d %d", &b, &c);
  a2 = (double)b / c;
  printf("double a2: %lf\n", a2);
  double error = 1e-6;
  if (fabs(a-a2) <= error)
    printf("Son iguales\n");
  else
    printf("Son distintos\n");
  return 0;
}
