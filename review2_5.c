#include<stdio.h>

int factorial(int n){

  int i,m=1;

  for(i=1;i<=n;i++){
    m*=i;
  }

  return m;

}

int main(){

  int n,r,x,y,z,a;

  scanf("%d %d",&n,&r);

  x=factorial(n);
  y=factorial(r);
  z=factorial(n-r);

  a=x/(y*z);

  printf("%d\n",a);

  return 0;

}