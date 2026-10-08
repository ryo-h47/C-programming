#include<stdio.h>

int main(int argc,char *argv[]){

  FILE *fp;
  int a='A',c,i,j,m[27],n[27];

  fp=fopen(argv[1],"r");
  if(fp==NULL){
    printf("File open error\n");
    return 1;
  }

  for(i=0;i<26;i++){
    m[i]=0;
    n[i]=0;
  }

  while((c=fgetc(fp))!=EOF){

    for(i=0;i<26;i++){
      if((c=='A'+i)||(c=='a'+i)){
        m[i]++;
      }
    }

  }

  for(i=0;i<26;i++){
    n[i]=(m[i]/10)+1;
    
    printf("%c: ",a);
    for(j=0;j<n[i];j++){
      printf("#");
    }
    printf("(%d)\n",m[i]);

    a++;
  }

  fclose(fp);
  return 0;

}