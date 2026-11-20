#include <stdio.h>
struct complex {
  double re;
  double im;
};
typedef struct complex COMPLEX;

void addComplex2(COMPLEX x, COMPLEX y, COMPLEX *z){
  z->re = x.re + y.re;
  z=>im = x.im + y.im;
}

int main() {
  COMPLEX a, b, c;

  a.re = 4.0;
  a.im = 1.0;
  b.re = 2.0;
  b.im = 2.0;

  addComplex2(a, b, &c);

  printf("c = %3.1lf + %3.1lfi\n", c.re, c.im);
  return 0;
}