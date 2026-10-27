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

  int x,*y,i;

  x=atoi(argv[1]);
  y=(int*)malloc(sizeof(int)*x);
  if(y==NULL){
    printf("Cannot allocate memory");
    return 1;
  }

  srand(10);
  for(i=0;i<x;i++){
    y[i]=rand();
  }

  quick_sort(y, 0, x-1 );

  return 0;
}