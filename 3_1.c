#include<stdio.h>

void print_aster(int n){

  if(n>0){
    printf("*");
    print_aster(n-1);
  }
  else if(n==0){
    printf("\n");
  }

}

int main(){
  int i;
  for(i=0;i<10;i++){
    print_aster(i);
  }
  return 0;
}