#include<stdio.h>
#include<math.h>

double f(double x){
  double y;
  y=(x*x*x-4*x*x-5*x+15)/(x*x-3*x+3);
  return y;
}

double df(double x){
  double y1;
  y1=(x*x*x*x-6*x*x*x+26*x*x-54*x+30)/((x*x-3*x+3)*(x*x-3*x+3));
  return y1;
}

int main(){
  double x0,h,L,e;
  int i;

  x0=-4.0;

  for(i=0;i<3;i++){
    h=0.00001;
    L=(f(x0+h)-f(x0))/h;
    e=fabs(L-df(x0));

    printf("x0=%lf => %lf\n", x0, L);
    printf("Absolute Error=%lf\n", e);

    x0+=4.0;
  }

  return 0;
}