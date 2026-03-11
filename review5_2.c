#include<stdio.h>
#include<stdlib.h>

int main(int argc,char *argv[]){

  int n,i=0,sum=0;

  while(argv[i]){
    n=atoi(argv[i]);
    sum+=n;
    i++;
  }

  printf("%d\n",sum);

  return 0;

}