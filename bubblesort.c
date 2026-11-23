#include<stdio.h>
#define N 10

int a[N] = {10,4,1,45,31,7,3,99,2,8};

void printArray(int *a, int n){
  int i;
  for(i=0; i<n; i++) printf("%2d ", a[i]);
  printf("\n");
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

int main(){
  printArray(a, N);
  bubblesort(a, N);
  printArray(a, N);
  return 0;
}