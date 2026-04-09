#include<stdio.h>
#include<stdlib.h>

int main(int argc,char *argv[]){

  int n,i,b;

  n=atoi(argv[1]);
  i=atoi(argv[2]);

  if(((n>>i)&1)==0){
    b=0;
  }else{
    b=1;
  }

  printf("%d",b);

  return 0;

}