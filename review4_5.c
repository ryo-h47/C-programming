#include<stdio.h>
#include<string.h>

char* reverse_string(char *p){

  char *head=p;
  char *tail=p;
  char c;  

  while(*tail!='\0'){
    tail++;
  }

  tail--;

  while(head<tail){
    c=*head;
    *head=*tail;
    *tail=c;
    head++;
    tail--;
  }

  return p;

}

#define LEN 79

int main(){

  char s[LEN+1];
  char s2[LEN+1];
  char *t,*t1;

  scanf("%79s",s);
  strcpy(s2,s);
  reverse_string(s);
  printf("%s\n",s);
  t1=reverse_string(s2);
  t=reverse_string(t1);
  printf("%s\n",t);

  return 0;

}