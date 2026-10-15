#include<stdio.h>

char caesar_dec(char c){

  if(('A' <= c && c <= 'V') || ('a' <= c && c <= 'v')){
    c+=4;
    return c;
  }
  else if(('W' <= c && c <= 'Z') || ('w' <= c && c <= 'z')){
    c-=22;
    return c;
  }
  else{
    return c;
  }

}

int main(){

  char c,x;

  while((c=fgetc(stdin)) != EOF){
    x=caesar_dec(c);
    fprintf(stdout,"%c",x);
  }

  return 0;

}