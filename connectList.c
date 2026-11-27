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

NODE *insertTail(NODE *head, int num){
    NODE *p;
    NODE *node = newNode(num);
    node->next = NULL;

    if(head==NULL){
        return node;
    }else{
        p = head;
        while(p->next!=NULL){
            p = p->next;
        }
        p->next = node;
        return head;
    }
}

NODE *connectList(NODE *head1, NODE *head2){
    NODE *p;

    if(head1 == NULL){
        return head2;
    }else{
        p = head1;
        while(p->next != NULL){
            p = p->next;
        }
        p->next = head2;
        return head1;
    }
}

int main() {
    NODE *head1=NULL, *head2=NULL;

    head1 = insertTail(head1, 82);
    head1 = insertTail(head1, 27);
    head1 = insertTail(head1, 63);
    printf("List 1: ");
    showList_Loop(head1);

    head2 = insertTail(head2, 5);
    head2 = insertTail(head2, 8);
    head2 = insertTail(head2, 1);
    printf("List 2: ");
    showList_Loop(head2);

    head1 = connectList(head1, head2);
    showList_Loop(head1);

    return 0;
}
