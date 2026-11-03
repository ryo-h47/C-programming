#include <stdio.h>
#include<math.h>

struct complex {
  double re;
  double im;
};
typedef struct complex COMPLEX;

COMPLEX divComplex(COMPLEX x, COMPLEX y){
  COMPLEX z;
  z.re = (x.re*y.re + x.im*y.im)/(pow(y.re,2)+pow(y.im,2));
  z.im = (x.im*y.re - x.re*y.im)/(pow(y.re,2)+pow(y.im,2));
  return z;
}

void printComplex(COMPLEX x, COMPLEX y, COMPLEX z){

  if((pow(y.re,2)+pow(y.im,2)) != 0){
    printf("%c = %lf + (%lf)i\n",x, x.re, x.im);
    printf("y = %lf + (%lf)i\n" , y.re, y.im);
    printf("x/y = %lf + (%lf)i\n", z.re, z.im);
  }else{
    printf("x = %lf + (%lf)i\n", x.re, x.im);
    printf("y = %lf + (%lf)i\n" , y.re, y.im);
    fprintf(stderr,"division by zero\n");
    printf("x/y = %lf + (%lf)i\n", x.re, x.im);
  }
}

int main() {
  COMPLEX a, b, c;

  a.re = 3.4;
  a.im = -2.3;
  b.re = -1.2;
  b.im = -0.5;
  c = divComplex(a,b);
  printComplex(a,b,c);

  printf("\n");
  b.re = 0.0;
  b.im = 0.0;

  c = divComplex(a,b);
  printComplex(a,b,c);

  return 0;
}