#include<stdio.h>
#include<stdlib.h>

void quick_sort(double *ary, int begin, int end){
  int i, j;
  double work, pivot;
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
void print_array(double *ary, int size){
  int i;
  for(i = 0; i < size; ++i)
    printf( "%lf ", ary[i]);
  printf( "\n\n" );
}

int main(){

  int i;
  double ary[10];

  for(i=0;i<10;i++){
    ary[i]=0+(rand()/((double)RAND_MAX+1.0))*(1-0);
  }

  print_array(ary,10);
  quick_sort(ary,0,9);
  print_array(ary,10);

  return 0;

}