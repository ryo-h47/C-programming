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
  double x,new_x,h,L;
  double a[3]={-2.0,1.5,5.0};
  int i,j=1;

  x=-1.0;

  for(i=0;i<3;i++){
    x=a[i];
    while(1){
      h=0.00001;
      L=(f(x+h)-f(x))/h;

      new_x=x-f(x)/L;
      printf("%d:x=%.10lf, new_x=%.10lf\n", j++, x, new_x);
      if(fabs(new_x-x)/fabs(x) < EPS) break;
      if(j>MAX){
        fprintf(stderr,"not converged!\n");
        exit(1);
      }
      x=new_x;
    }
    printf("x=%.10lf\n",new_x);
    printf("f(x)=%.10lf\n",f(new_x));
  
    j=1;
    printf("\n");
  }

    return 0;
}