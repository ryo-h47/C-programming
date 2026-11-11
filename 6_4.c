#include <stdio.h>
#include <stdlib.h>

typedef struct node {
   int num;
   struct node *next;
} NODE;

void showList_Loop(NODE *p){
    while(p!=NULL){
        printf("%d ", p->num);
        p = p->next;
    }
    printf("\n");
}

NODE *newNode(int num){
    NODE *p;
    p = (NODE*)malloc(sizeof(NODE));
    if(p==NULL){
        fprintf(stderr,"malloc error\n");
        exit(1);
    }
    p->num = num;
    return p;
}

NODE *addFromFile(NODE *head, char *file){
    NODE *p;
    FILE *fp;
    int n;

    fp=fopen(file,"r");
    if(fp==NULL){
      fprintf(stderr,"File open error\n");
    }

    while((fscanf(fp, "%d", &n)) == 1){

      NODE *node = newNode(n);
      node->next = NULL;
      node->num=n;

      if(head==NULL){
         head=node;
      }else{
          p = head;
          while(p->next!=NULL){
              p = p->next;
          }
        p->next = node;
      }
    }

    fclose(fp);
    return head;
}

int main() {
  NODE *head;
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

  head = addFromFile(head, "insert.txt");

  showList_Loop(head);
  return 0;
}