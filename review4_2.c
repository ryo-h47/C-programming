#include<stdio.h>

void sum_diff(int x,int y,int *ps,int *pd){

  *ps=x+y;
  *pd=x-y;

}

int main(){

  int a,b,s,d;

  scanf("%d %d",&a,&b);

  sum_diff(a,b,&s,&d);

  printf("sum %7d\n",s);
  printf("diff %7d\n",d);

  return 0;

}