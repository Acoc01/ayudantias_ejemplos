#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int a = 65;
  long b = 300000000;
  long long c = 3000000000;
  char d = 'd';
  float e = 0.001;
  double f = 0.000000001;
  printf("int: %d\n", a);
  printf("long: %li\n", b);
  printf("long long: %lli\n", c);
  printf("char: %c\n", d);
  printf("float: %f\n", e);
  printf("double: %lf\n", f);
  a = -65;
  b = -300000000;
  c = -30000000000;
  e = -0.001;
  f = -0.000000001;

  printf("int: %u\n", a);
  printf("long: %lu\n", b);
  printf("long long: %llu\n", c);
  printf("float: %i\n", e);
  printf("double: %Lf\n", f);

  printf("int: %u\n", (unsigned int)a);
  printf("long: %lu\n", (unsigned long)b);
  printf("long long: %llu\n", (unsigned long long)c);
  printf("float: %i\n", (int)e);
  printf("double: %li\n", (long)f);

  return 0;
}
