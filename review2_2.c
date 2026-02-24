#include<stdio.h>

int min(int a,int b){

  if(a<=b){
    return a;
  }else{
    return b;
  }

}

int main(){

  int x,y,z,m,n;

  scanf("%d %d %d",&x,&y,&z);

  m=min(x,y);
  n=min(m,z);

  printf("%d\n",n);

}