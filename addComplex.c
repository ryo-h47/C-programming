#include <stdio.h>
struct complex {
  double re;
  double im;
};
typedef struct complex COMPLEX;

COMPLEX addComplex(COMPLEX x, COMPLEX y){
  COMPLEX z;
  z.re = x.re + y.re;
  z.im = x.im + y.im;
  return z;
}

int main() {
  COMPLEX a, b, c;

  a.re = 4.0;
  a.im = 1.0;
  b.re = 2.0;
  b.im = 2.0;
  c = addComplex(a,b);
  printf("c = %3.1lf + %3.1lfi\n", c.re, c.im);
  return 0;
}