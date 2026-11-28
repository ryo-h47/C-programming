#include<stdio.h>

int main(){

  FILE *fp1,*fp2;
  char *file1 = "a.txt";
  char *file2 = "b.txt";
  int c;

  fp1 = fopen(file1,"r");
  if(fp1 == NULL){
    printf("File open error\n");
    return 1;
  }
  fp2 = fopen(file2,"w");
  if(fp2 == NULL){
    printf("File open error\n");
    return 1;
  }

  while( (c=fgetc(fp1)) != EOF){
    fputc(c,fp2);
  }

  fclose(fp1);
  fclose(fp2);

  return 0;

}