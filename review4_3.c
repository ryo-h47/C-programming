#include<stdio.h>

void comp_exch(int *pa,int *pb){

  int n;

  if(*pa>*pb){
    n=*pa;
    *pa=*pb;
    *pb=n;
  }

}

int main(){

  int a,b,c,d,e;

  scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);

  comp_exch(&a,&b);
  comp_exch(&a,&c);
  comp_exch(&a,&d);
  comp_exch(&a,&e);
  comp_exch(&b,&c);
  comp_exch(&b,&d);
  comp_exch(&b,&e);
  comp_exch(&c,&d);
  comp_exch(&c,&e);
  comp_exch(&d,&e);

  printf("%d %d %d %d %d",a,b,c,d,e);

  return 0;

}