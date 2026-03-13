#include<stdio.h>

int main(int argc,char *argv[]){

  int i,j,k;
  char *c;

  for(i=0;i<argc;i++){
    for(j=i;j<argc;j++){
      if(argv[i][0]>argv[j][0]){
        c=argv[i];
        argv[i]=argv[j];
        argv[j]=c;
      }
    }
  }

  for(k=0;k<argc;k++){
    printf("%s\n",argv[k]);
  }

  return 0;

}