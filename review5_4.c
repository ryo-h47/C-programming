#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(int argc,char *argv[]){

  int n=atoi(argv[1]);

  double *m;
  m=(double*)malloc(sizeof(double)*n);
  if(m==NULL){
    printf("cannot allocate memory");
    return 1;
  }

  int i;
  double ave,var,dev,sum=0.0,sum2=0.0;

  for(i=0;i<n;i++){
    scanf("%lf",&m[i]);
    sum+=m[i];
  }

  ave=sum/n;

  for(i=0;i<n;i++){
    sum2+=(m[i]-ave)*(m[i]-ave);
  }

  var=sum2/n;
  dev=sqrt(var);

  printf("%.3lf\n",ave);
  printf("%.3lf\n",dev);

  free(m);

  return 0;

}