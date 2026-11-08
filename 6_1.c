#include<stdio.h>
#include<stdlib.h>

typedef struct node{
  int num;
  struct node *next;
}NODE;

int countList(NODE *head){

  int i=0;

  while(head!=NULL){
    head=head->next;
    i++;
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

  c=countList(head);

  printf("%d",c);

  return 0;

}