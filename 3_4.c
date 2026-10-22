#include<stdio.h>

void bubblesort(int *a, int n,int *k,int *l){
  int i, j,x=0, y=0, tmp;
  for(i=0; i<n-1; i++){
    for(j=0; j<n-1-i; j++){
      x++;

      if(a[j] > a[j+1]){
        tmp = a[j];
        a[j] = a[j+1];
        a[j+1] = tmp;
        y++;
      }
    }
  }

  *k=x;
  *l=y;
}

int main(int argc,char *argv[]){

  FILE *fp;
  int i=0,k,l,n,a[10000];

  fp=fopen(argv[1],"r");
  if(fp == NULL){
    printf("File open error\n");
    return 1;
  }

  while((fscanf(fp,"%d",&n)) == 1){
    a[i]=n;
    i++;
  }

  fclose(fp);

  bubblesort(a, i,&k,&l);
  
  printf("Compare: %d\n",k);
  printf("Swap: %d\n",l);
  return 0;
}