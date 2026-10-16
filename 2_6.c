#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(int argc,char *argv[]){

  int i,n=0;
  double N,x,y,pi;

  N=atoi(argv[1]);

  srand((unsigned)time(NULL));

  for(i=0;i<N;i++){
    x=-1+(rand()/((double)RAND_MAX+1.0))*(1.0-(-1.0));
    y=-1+(rand()/((double)RAND_MAX+1.0))*(1.0-(-1.0));

    if((x*x+y*y) <= 1){
      n++;
    }
  }

  pi=4*n/N;

  printf("%lf\n",pi);

  return 0;

}