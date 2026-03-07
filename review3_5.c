#include<stdio.h>

int find_letter(char str[],char x){

  int i=0;

  while(str[i]!='\n'){
    if(str[i]==x){
    return i;
    }
    i++;
  }

  return -1;

}

int main(){

  char x,str[100+1];
  int i=0,n;

  for(i=0;i<100;i++){
    str[i]='g';
  }

  x=getchar();

  scanf("%100s",str);

  n=find_letter(str,x);

  printf("%d\n",n);

  return 0;

}