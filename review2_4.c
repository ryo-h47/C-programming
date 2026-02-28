#include<stdio.h>

int fibonacci(int n){

  int i,f[n];

  f[0]=0;
  f[1]=1;
  f[2]=1;

  for(i=3;i<=n;i++){
    f[i]=f[i-1]+f[i-2];
  }

  return f[n];

}

int factorial(int n){

  int i,m=1;

  for(i=1;i<=n;i++){
    m*=i;
  }

  return m;

}

int main(){

  int n,fn,facn;

  scanf("%d",&n);

  fn=fibonacci(n);
  facn=factorial(n);

  printf("%d ",fn);
  printf("%d\n",facn);

  return 0;

}