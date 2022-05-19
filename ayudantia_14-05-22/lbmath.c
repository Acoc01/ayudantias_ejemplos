#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  // double exp(double x);
  printf("euler elevado a x: %lf \n", exp(5));
  // double ldexp(double x, int exponente);
  printf("x multiplicado por 2 elevado a y: %lf\n", ldexp(3, 5));
  // double log(double x);
  printf("logaritmo natural de x: %lf\n", log(5));
  // double log10(double x);
  printf("logaritmo de base 10 de x: %lf\n", log10(5));
  // double pow(double x, double y);
  printf("x elevado a y: %lf\n", pow(2, 5));
  // double sqrt(double x);
  printf("raiz cuadrada de x: %lf\n", sqrt(4));
  // double fabs(double x);
  printf("valor absoluto de x: %lf\n", fabs(-10.0));

  return 0;
}
