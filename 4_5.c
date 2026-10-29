#include<stdio.h>
#define N 10

void quick_sort(int *ary, int begin, int end){
  int i, j, k, work, pivot;
  pivot = ary[ ( begin + end ) / 2 ];
  i = begin;
  j = end;

  printf("quick_sort(%d,%d): ",i,j);
  for(k=0;k<N;k++){
    printf("%2d ",ary[k]);
  }
  printf("\n");

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

int main(){
  int i,ary[N] = {5,10,2,6,3,8,4,1,7,9};

  quick_sort(ary, 0, N-1 );

  for(i=0;i<N;i++){
    printf("%2d ",ary[i]);
  }

  return 0;
}