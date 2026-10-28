#include<stdio.h>
#include<stdlib.h>

void bubblesort(int *a, int n){
  int i, j, tmp;
  for(i=0; i<n-1; i++){
    for(j=0; j<n-1-i; j++){
      if(a[j] > a[j+1]){
        tmp = a[j];
        a[j] = a[j+1];
        a[j+1] = tmp;
      }
    }
  }
}

int main(int argc,char *argv[]){

  int x,*y,i;

  x=atoi(argv[1]);

  y=(int*)malloc(sizeof(int)*x);
  if(y==NULL){
    printf("Cannot allocate memory");
    return 1;
  }

  srand(10);
  for(i=0;i<x;i++){
    y[i]=rand();
  }

  bubblesort(y, x);

  return 0;
}