#include<stdio.h>
#define MAX 100

float average(float a[],int n){

  int i;
  float sum=0.0,ave;

  for(i=0;i<n;i++){
    sum+=a[i];
  }
  ave=sum/n;

  return ave;

}

int main(){

  int num,i;
  float array[MAX],ave;

  scanf("%d",&num);
  if(num<=MAX){
    for(i=0;i<num;i++){
      scanf("%f",&array[i]);
    }
    ave=average(array,num);
    printf("%.3f\n",ave);
  }

  return 0;

}