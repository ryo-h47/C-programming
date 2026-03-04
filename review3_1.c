#include<stdio.h>
#include<string.h>

int main(){

  char m[10];

  scanf("%9s",m);

  if(strcmp(m,"January")==0){
    printf("%d\n",1);
  }else if(strcmp(m,"February")==0){
    printf("%d\n",2);
  }else if(strcmp(m,"March")==0){
    printf("%d\n",3);
  }else if(strcmp(m,"April")==0){
    printf("%d\n",4);
  }else if(strcmp(m,"May")==0){
    printf("%d\n",5);
  }else if(strcmp(m,"June")==0){
    printf("%d\n",6);
  }else if(strcmp(m,"July")==0){
    printf("%d\n",7);
  }else if(strcmp(m,"August")==0){
    printf("%d\n",8);
  }else if(strcmp(m,"September")==0){
    printf("%d\n",9);
  }else if(strcmp(m,"October")==0){
    printf("%d\n",10);
  }else if(strcmp(m,"November")==0){
    printf("%d\n",11);
  }else if(strcmp(m,"December")==0){
    printf("%d\n",12);
  }else{
    printf("%d\n",0);
  }

  return 0;

}