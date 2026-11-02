#include <stdio.h>
struct complex {
  double re;
  double im;
};
typedef struct complex COMPLEX;

COMPLEX subComplex(COMPLEX x, COMPLEX y){
  COMPLEX z;
  z.re = x.re - y.re;
  z.im = x.im - y.im;
  return z;
}

int main() {
  COMPLEX a, b, c;

  a.re = 4.0;
  a.im = 1.0;
  b.re = 2.0;
  b.im = 2.0;
  c = subComplex(a,b);
  printf("a = %3.1lf + %3.1lfi\n", a.re, a.im);
  printf("b = %3.1lf + %3.1lfi\n", b.re, b.im);
  printf("a-b = %3.1lf + (%3.1lf)i\n", c.re, c.im);
  return 0;
}