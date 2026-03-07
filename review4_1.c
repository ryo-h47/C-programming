#include<stdio.h>

int main(){

  int a,b=0;
  float f,g=0.0;
  char s[11],t[11]="0123456789";

  int i;

  scanf("%d",&a);
  scanf("%f",&f);
  scanf("%10s",s);

  int *p1;
  float *p2;
  char *p3;

  p1=&a;
  p2=&f;
  p3=s;

  b=*p1;
  g=*p2;
  for(i=0;i<10;i++){
    t[i]=p3[i];
  }

  printf("%d\t%f\t%s\n",b,g,t);

  return 0;

}