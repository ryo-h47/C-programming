#include<stdio.h>
#include<time.h>

int main(){
  time_t now;
  struct tm *tmnow;
  now=time(NULL);
  tmnow=localtime(&now);
  printf("%s",asctime(tmnow));
  return 0;
}