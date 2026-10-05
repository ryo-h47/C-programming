#include<stdio.h>

int main(int argc,char *argv[]){

  FILE *fp1,*fp2;
  char *file="output.txt";
  int c,i=1;

  fp1=fopen(argv[1],"r");
  if(fp1==NULL){
    printf("File open error\n");
    return 1;
  }

  fp2=fopen(file,"w");
  if(fp2==NULL){
    printf("File open error\n");
    return 1;
  }

  fprintf(fp2,"%d: ",i);
  i++;

  while((c=fgetc(fp1))!=EOF){
    fputc(c,fp2);

    if(c=='\n'){
      fprintf(fp2,"%d: ",i++);
    }

  }

  fclose(fp1);
  fclose(fp2);
  return 0;

}