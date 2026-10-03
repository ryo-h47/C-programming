#include<stdio.h>

int main(int argc,char *argv[]){

  FILE *fp;
  int c,i=0;

  fp=fopen(argv[1],"r");
  if(fp==NULL){
    printf("File open error\n");
    return 1;
  }

  while((c=fgetc(fp))!=EOF){
    if((c>='A'&&c<='Z')||(c>='a'&&c<='z')){
      i++;
    }
  }

  printf("The number of alphabets is %d.\n",i);

  fclose(fp);
  return 0;

}