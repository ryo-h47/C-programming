#include<stdio.h>
#include<stdlib.h>

int main(int argc,char *argv[]){

  int x,y,and,or,xor,x_not,y_not;

  x=atoi(argv[1]);
  y=atoi(argv[2]);

  and=x&y;
  or=x|y;
  xor=x^y;
  x_not=~x;
  y_not=~y;

  printf("x:       %08x\n",x);
  printf("y:       %08x\n",y);
  printf("x AND y: %08x\n",and);
  printf("x OR  y: %08x\n",or);
  printf("x XOR y: %08x\n",xor);
  printf("NOT x  : %08x\n",x_not);
  printf("NOT y  : %08x\n",y_not);

  return 0;

}