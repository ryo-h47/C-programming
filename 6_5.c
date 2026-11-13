#include<stdio.h>
#include<stdlib.h>

typedef struct node{
  int num;
  struct node *next;
}NODE;

NODE* duplicate(NODE *head){
  NODE *head2;
  NODE *p;
  NODE *first2, *second2, *third2;

  if(head==NULL){
    return NULL;
  }

  first2 = (NODE*)malloc(sizeof(NODE));
  second2 = (NODE*)malloc(sizeof(NODE));
  third2 = (NODE*)malloc(sizeof(NODE));

  p=head;

  first2->num = p->num;
  p=p->next;
  second2->num = p->num;
  p=p->next;
  third2->num = p->num;

  head2 = first2;
  first2->next = second2;
  second2->next = third2;
  third2->next = NULL;

  return head2;

}

int main(){
  NODE *head;
  NODE *head2;
  NODE *first, *second, *third;

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

  head2=duplicate(head);

  while(head2!=NULL){
    printf("%d ",head2->num);
    head2=head2->next;
  }

  return 0;

}