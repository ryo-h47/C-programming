#include<stdio.h>
#include<time.h>
#define N 100000

void prefix1(int n,int x[],int y[]){
  int i,j;
  for(i=0;i<=n;i++){
    y[i]=x[0];
    for(j=1;j<=i;j++){
      y[i]+=x[j];
    }
  }
}

int main(){
  int x[N],y[N],i;
  clock_t start,end;
  for(i=0;i<N;i++){
    x[i]=i;
  }

  start=clock();

  prefix1(N,x,y);

  end=clock();

  printf("y[%d]=%d\n",N-1,y[N-1]);
  printf("time:%lf[s]\n",(double)(end-start)/CLOCKS_PER_SEC);

  return 0;
}