#include<stdio.h>
#include<math.h>

struct complex{
  double re;
  double im;
};
typedef struct complex COMPLEX;

void qsolve(int a,int b,int c,COMPLEX *x,COMPLEX *y){

  double D=pow(b,2)-4*a*c;

  if(D>=0){
    x->re=(double)((-b+sqrt(D))/(2*a));
    x->im=0.0;
    y->re=(double)((-b-sqrt(D))/(2*a));
    y->im=0.0;
  }else{
    x->re=(double)(-b/(2*a));
    x->im=(double)(sqrt(-D)/(2*a));
    y->re=x->re;
    y->im=(double)(-sqrt(-D)/(2*a));
  }


}

int main(){

  int a,b,c;
  COMPLEX x,y;

  scanf("%d %d %d",&a,&b,&c);

  qsolve(a,b,c,&x,&y);

  printf("%lf + (%lf)i\n",x.re,x.im);
  printf("%lf + (%lf)i\n",y.re,y.im);

  return 0;
}