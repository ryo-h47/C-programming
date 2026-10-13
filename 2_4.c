#include<stdio.h>

char caesar(char c){

  if(('E' <= c && c <= 'Z') || ('e' <= c && c <= 'z')){
    c-=4;
    return c;
  }
  else if(('A' <= c && c <= 'D') || ('a' <= c && c <= 'd')){
    c+=22;
    return c;
  }
  else{
    return c;
  }

}

int main(){

  char c,x;

  while((c=fgetc(stdin)) != EOF){
    x=caesar(c);
    fprintf(stdout,"%c",x);
  }

  return 0;

}