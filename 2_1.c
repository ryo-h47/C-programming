#include<stdio.h>

int main(int argc,char *argv[]){

  FILE *fp1,*fp2;
  char c,file[]="output.txt";

  fp1=fopen(argv[1],"r");
  if(fp1==NULL){
    printf("File open error\n");
    return 1;
  }

  fp2=fopen(file,"w");
  if(fp2==NULL){
    printf("File open error\n");
  }

  while((c=fgetc(fp1))!=EOF){
    if(('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z')){
      fprintf(fp2,"%c",c);
    }else{
      fprintf(stderr,"%c",c);
    }
  }

  fclose(fp1);
  fclose(fp2);
  return 0;

}