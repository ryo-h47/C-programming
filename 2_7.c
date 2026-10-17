#include<stdio.h>

int main(int argc,char *argv[]){

  int i=0;
  FILE *fp;
  char c1,c2,c3,enc[27];

  fp=fopen(argv[1],"r");
  if(fp==NULL){
    printf("File open error\n");
    return 1;
  }

  while((c1=fgetc(fp)) != EOF){
    enc[i]=c1;
    i++;
  }

  while(fscanf(stdin,"%c",&c2) != EOF){
    if('a' <= c2 && c2 <= 'z'){
      c2-='a';
      fprintf(stdout,"%c",enc[(int)c2]);
    }
    else if('A' <= c2 && c2 <= 'Z'){
      c2-='A';
      c3=enc[(int)c2]-('a'-'A');
      fprintf(stdout,"%c",c3);
    }else{
      fprintf(stdout,"%c",c2);
    }
  }

  fclose(fp);
  return 0;

}