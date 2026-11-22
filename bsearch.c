#include <stdio.h>
#define N 9
#define FAILED -1

int rbinsearch(int *ary, int head, int tail, int key) {
    int mid = (head + tail) / 2;
    if (head > tail) return FAILED;
    if (key < ary[mid])
        return rbinsearch(ary, head, mid-1, key);
    else if (key > ary[mid])
        return rbinsearch(ary, mid+1, tail, key);
    else return mid;
}

int main(){
    int ary[N] = {2,10,35,47,65,69,72,82,93};
    int x, idx;

    printf("Input number: ");
    scanf("%d", &x);
    idx = rbinsearch(ary, 0, N-1, x);
    if (idx == FAILED)
        printf("%d is not included.\n", x);
    else
        printf("%d is %dth number.\n", x, idx+1);
    return 0;
}