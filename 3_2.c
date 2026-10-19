#include<stdio.h>

void printArray(int *a, int n){
  int i;
  for(i=0; i<n; i++){
    printf("%2d\n", a[i]);
  }
}

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

  FILE *fp;
  int i,n,a[10];

  fp=fopen(argv[1],"r");
  if(fp == NULL){
    printf("File open error\n");
    return 1;
  }

  for(i=0;i<10;i++){
    fscanf(fp,"%d",&n); 
    a[i]=n;
  }

  fclose(fp);

  bubblesort(a, 10);
  printArray(a, 10);
  return 0;
}