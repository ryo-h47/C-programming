#include<stdio.h>
#include<stdlib.h>

typedef struct node{
  int num;
  struct node *next;
}NODE;

int findNodes(NODE *head, int n){

  int i=0;

  if(head==NULL){
    return 0;
  }

  while(head!=NULL){
    if(head->num==n){
      i++;
    }
    head=head->next;
  }

  return i;

}

int main(){
  NODE *head;
  NODE *first, *second, *third;
  int c;

  first = (NODE*)malloc(sizeof(NODE));
  second = (NODE*)malloc(sizeof(NODE));
  third = (NODE*)malloc(sizeof(NODE));

  first->num = 63;
  second->num = 27;
  third->num = 82;

  head = first;
  first->next = second;
  second->next = third;
  third->next = NULL;

  c=findNodes(head,3);

  printf("%d",c);

  return 0;

}