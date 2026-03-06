#include<stdio.h>

void mystrcpy(char dst[],char str[]){

  int i=0;

  while(str[i]!='\0'){
    dst[i]=str[i];
    i++;
  }

  dst[i]='\0';

}

#define SIZE 80

int main(){

  char s1[SIZE];
  char s2[SIZE];
  char c;
  int i;

  i=0;
  c=getchar();
  while(c!='\n'&&i<SIZE-1){
    s1[i]=c;
    i++;
    c=getchar();
  }
  s1[i]='\0';

  for(i=0;i<SIZE-1;i++){
    s2[i]='0'+(i%10);
  }

  mystrcpy(s2,s1);

  printf("%s\n",s2);
  return 0;

}