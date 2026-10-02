#include<stdio.h>

int main(int argc,char *argv[]){

  FILE *fp;
  int c,i=1;

  fp=fopen(argv[1],"r");
  if(fp==NULL){
    printf("File open error\n");
    return 1;
  }

  while((c=fgetc(fp))!=EOF){
    printf("%d: %c(%d)\n",i,c,c);
    i++;
  }

  fclose(fp);
  return 0;

}