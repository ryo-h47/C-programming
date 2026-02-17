#include<stdio.h>

int main(){

  int i,n;
  double x,sum=0.0;

  scanf("%d",&n);

  for(i=0;i<n;i++){
    scanf("%lf",&x);
    sum+=x;
  }

  printf("%.1f",sum);

  return 0;

}