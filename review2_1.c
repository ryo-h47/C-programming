#include<stdio.h>
#include<math.h>

int main(){

  double x,y,a,b,c,d,e;

  scanf("%lf %lf",&x,&y);

  a=sqrt(x);
  b=pow(x,y);
  c=sin(x);
  d=log10(x);
  e=log(x);

  printf("%.5lf ",a);
  printf("%.5e ",b);
  printf("%.5lf ",c);
  printf("%.5lf ",d);
  printf("%.5lf\n",e);

  return 0;

}