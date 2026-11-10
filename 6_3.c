#include<stdio.h>
#include<stdlib.h>

typedef struct node{
  int num;
  struct node *next;
}NODE;

NODE* findMaximum (NODE *head){

  NODE *max=head;

  while(head!=NULL){
    if(head->num > max->num){
      max=head;
    }
    head=head->next;
  }

  return max;
}

NODE* findMinimum (NODE *head){

  NODE *min=head;

  while(head!=NULL){
    if(head->num < min->num){
      min=head;
    }
    head=head->next;
  }

  return min;
}

int main(){
  NODE *head;
  NODE *first, *second, *third;
  NODE *c1,*c2;

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

  c1=findMaximum(head);
  c2=findMinimum(head);

  printf("Maximum: %d\n",c1->num);
  printf("Minimum: %d\n",c2->num);

  return 0;

}