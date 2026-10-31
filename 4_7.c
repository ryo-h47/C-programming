#include<stdio.h>
#include<stdlib.h>

void quick_sort(int *ary, int begin, int end){
  int i, j, work, pivot;
  pivot = ary[ ( begin + end ) / 2 ];
  i = begin;
  j = end;
  while( 1 ){
    while( ary[i] < pivot ) ++i;
    while( ary[j] > pivot ) --j;
    if( i >= j ) break;
    work = ary[i];
    ary[i] = ary[j];
    ary[j] = work;
    i++;
    j--;
  }
  if( begin < i - 1 ) quick_sort(ary, begin, i - 1 );
  if( j + 1 < end ) quick_sort(ary, j + 1, end );
}

int main(int argc,char *argv[]){

  FILE *fp1,*fp2;
  int c1,i,*y,m=0,n=0;

  fp1=fopen(argv[1],"r");
  if(fp1==NULL){
    printf("File open error\n");
    return 1;
  }

  while((c1=fgetc(fp1)) != EOF){
    n++;
    if(c1=='\n'){
      m++;
    }
  }
  m++;

  fclose(fp1);

  y=(int*)malloc(sizeof(int)*n);
  if(y==NULL){
    printf("Cannot allocate memory");
    return 1;
  }

  fp2=fopen(argv[1],"r");
  if(fp2==NULL){
    printf("File open error\n");
    return 1;
  }

  for(i=0;i<n;i++){
    y[i]=fgetc(fp2);
  }

  fclose(fp2);

  fprintf(stderr,"The number of data is %d.\n",m);
  for(i=0;i<n;i++){
    fprintf(stdout,"%c",y[i]);
  }

  return 0;
}