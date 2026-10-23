#include<stdio.h>
#include<string.h>

#define N 14
char *fruits[N]={ "apple", "strawberry", "orange",
"raspberry", "kiwi", "grapefruit", "cherry",
"pineapple", "banana", "grape", "blueberry",
"melon", "peach", "watermelon"
};

void bubblesort(char *a[],int n){
  int i,j;
  char *tmp;

  for(i=0;i<n-1;i++){
    for(j=0;j<n-1-i;j++){
      if((strcmp(a[j],a[j+1])) > 0){
        tmp=a[j];
        a[j]=a[j+1];
        a[j+1]=tmp;
      }
    }
  }
}
        

int main(){
  int i;
  bubblesort(fruits, N);
  for(i=0; i<N; i++){
    printf("%s\n", fruits[i]);
  }
  return 0;
}