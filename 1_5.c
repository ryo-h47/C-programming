#include<stdio.h>
#include<stdlib.h>

int main(int argc,char *argv[]){

  FILE *fp1,*fp2;
  int m,n;
  char s[100+1];

  fp1=fopen(argv[1],"r");
  if(fp1==NULL){
    printf("File open error\n");
    return 1;
  }

  while(fgets(s,100,fp1)!=NULL){
    m=atoi(s);
  }

  n=m+1;

  printf("Increment %d -> %d\n",m,n);

  fp2=fopen(argv[1],"w");
  if(fp2==NULL){
    printf("File open error\n");
  }

  fprintf(fp2,"%d",n);

  fclose(fp1);
  fclose(fp2);
  return 0;

}