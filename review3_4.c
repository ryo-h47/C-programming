#include<stdio.h>

char lower2upper(char c){

  if(c>='a'&&c<='z'){
    c-=('a'-'A');
  }

  return c;

}

int main(){

  char c,m;

  c=getchar();
  while(c!='\n'){
    m=lower2upper(c);
    printf("%c",m);
    c=getchar();
  }

  return 0;

}