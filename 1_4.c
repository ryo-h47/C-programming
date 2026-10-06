#include<stdio.h>

int main(int argc,char *argv[]){

  FILE *fp;
  int c,i=1;

  while(argv[i]!=NULL){

    fp=fopen(argv[i],"r");

    if(fp==NULL){
      printf("File open error\n");
    }else{
      while((c=fgetc(fp))!=EOF){
        printf("%c",c);
      }

    }
    i++;
  }

  fclose(fp);
  return 0;

}