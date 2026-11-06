#include<stdio.h>
#include<time.h>

int main(){
  time_t now;
  struct tm *tmnow;
  now=time(NULL);
  tmnow=localtime(&now);

  int t,u;
  char *month[12]={"January","February","March","April","May","June","July","August","September","October","November","December"};
  char *wday[7]={"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};

  if(tmnow->tm_hour >= 12){
    t=tmnow->tm_hour-12;
    u=1;
  }else{
    t=tmnow->tm_hour;
    u=0;
  }

  printf("%s %d (%s), %d, %02d:%02d:%02d ",
    month[tmnow->tm_mon],tmnow->tm_mday,wday[tmnow->tm_wday],
    tmnow->tm_year+1900,t,tmnow->tm_min,tmnow->tm_sec);

  if(u==1){
    printf("PM\n");
  }else if(u==0){
    printf("AM\n");
  }

  return 0;

}