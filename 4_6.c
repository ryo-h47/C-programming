#include <stdio.h>
#define N 10
#define FAILED -1

int rbinsearch(int *ary, int head, int tail, int key) {
    int i,mid = (head + tail) / 2;

    printf("rbinsearch(ary,%d,%d,29): ",head,tail);
    for(i=head;i<=tail;i++){
      printf("%2d ",ary[i]);
    }
    printf("\n");

    if (head > tail) return FAILED;
    if (key < ary[mid])
        return rbinsearch(ary, head, mid-1, key);
    else if (key > ary[mid])
        return rbinsearch(ary, mid+1, tail, key);
    else return mid;
}

int main(){
    int ary[N] = {3,5,9,12,15,20,29,30,32,33};
    int idx;

    idx = rbinsearch(ary, 0, N-1, 29);
    if (idx == FAILED)
        printf("%d is not included.\n", 29);
    else
        printf("%d is %dth number.\n", 29, idx+1);
    return 0;
}