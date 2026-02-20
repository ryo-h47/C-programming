#include<stdio.h>

int main(){

  int min,max,i,j,sum=0;

  scanf("%d %d",&min,&max);

  for(i=min;i<=max;i++){
    for(j=2;j<i;j++){
      if(i%j==0){
        sum+=1;
      }
    }

    if(sum==0){
      printf("%d\n",i);
    }

    sum=0;

  }

}