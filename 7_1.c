#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define MAX 100
#define EPS 1.0e-5

double f(double x){
  return 1/x-17;
}

double df(double x){
  return -1/(x*x);
}

int main(){
  int i=1;
  double x, new_x;
  x=0.05;
  while(1){
    new_x=x-f(x)/df(x);
    printf("%d:x=%.10lf, new_x=%.10lf\n", i++, x, new_x);
    if(fabs(new_x-x)/fabs(x) < EPS) break;
    if(i>MAX){
      fprintf(stderr,"not converged!\n");
      exit(1);
    }
    x=new_x;
  }
  printf("x = %.10lf\n",new_x);
  return 0;
}