#include<stdio.h>

int main(){

  char c;
  int n,i;

  scanf("%c %d",&c,&n);

  printf("%d\n",c);

  for(i=0;i<n;i++){
    printf("%c",c);
    c++;
  }

  printf("\n");

  return 0;

}