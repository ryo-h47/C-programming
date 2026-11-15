#include<stdio.h>
#include<stdlib.h>
#include<math.h>

double f(double x){
  double y;
  y=4/(x*x+4);
  return y;
}

int main(int argc, char *argv[]){

  int n,i;
  double a,b,S,x0,x1,d;
  a=-2;
  b=2;

  if(argv[1]==NULL){
    n=10;
  }else{
    n=atoi(argv[1]);
  }
  x0=a;
  d=(b-a)/n;
  S=0;
  for(i=0;i<=n-1;i++){
    x1=x0+d;
    S+=d*(f(x0)+f(x1))/2;
    x0=x1;
  }
  printf("S = %.10lf\n",S);
  return 0;
}