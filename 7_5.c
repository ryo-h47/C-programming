#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define MAX 100
#define EPS 1.0e-5

double f(double x){
  double y;
  y=(x*x*x-4*x*x-5*x+15)/(x*x-3*x+3);
  return y;
}

int main(){
  double x,h,L;
  double c[3]={-2.0,1.5,5.0},new_x[3];
  int i,j=1;

  x=-1.0;

  for(i=0;i<3;i++){
    x=c[i];
    while(1){
      h=0.00001;
      L=(f(x+h)-f(x))/h;

      new_x[i]=x-f(x)/L;
      if(fabs(new_x[i]-x)/fabs(x) < EPS) break;
      if(j>MAX){
        fprintf(stderr,"not converged!\n");
        exit(1);
      }
      x=new_x[i];
    }

  }

  double a,b,S,x0,x1,n,d;
  int k;

  a=new_x[0];
  b=new_x[1];
  n=10000;
  x0=a;
  d=(b-a)/n;
  S=0;

  for(k=0;k<=n-1;k++){
    x1=x0+d;
    S+=d*(f(x0)+f(x1))/2;
    x0=x1;
  }

  a=new_x[1];
  b=new_x[2];
  x0=a;
  d=(b-a)/n;

  for(k=0;k<=n-1;k++){
    x1=x0+d;
    S-=d*(f(x0)+f(x1))/2;
    x0=x1;
  }

  printf("S = %.10lf\n",S);
  return 0;
}