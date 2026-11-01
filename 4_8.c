#include<stdio.h>
#include<string.h>

#define N 14
char *fruits[N]={ "apple", "strawberry", "orange",
"raspberry", "kiwi", "grapefruit", "cherry",
"pineapple", "banana", "grape", "blueberry",
"melon", "peach", "watermelon"
};

void quick_sort(char *fruits[], int begin, int end){
  int i, j;
  char *pivot,*work;
  pivot = fruits[ ( begin + end ) / 2 ];
  i = begin;
  j = end;
  while( 1 ){
    while( strcmp(fruits[i],pivot) < 0 ) ++i;
    while( strcmp(pivot,fruits[j]) < 0 ) --j;
    if( i >= j ) break;
    work = fruits[i];
    fruits[i] = fruits[j];
    fruits[j] = work;
    i++;
    j--;
  }
  if( begin < i - 1 ) quick_sort(fruits, begin, i - 1 );
  if( j + 1 < end ) quick_sort(fruits, j + 1, end );
}

int main(){
  int i;
  quick_sort(fruits, 0, N-1);
  for(i=0; i<N; i++){
    printf("%s\n", fruits[i]);
  }
  return 0;
}