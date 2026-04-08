#include<stdio.h>
#include<stdlib.h>

int main(int argc,char *argv[]){

  int i,n;

  for(i=1;i<argc;i++){
    n=atoi(argv[i]);
    printf("%o %d %x\n",n,n,n);
  }

  return 0;

}