#include <stdio.h>
#include <math.h>

int main(){
    int n = 0, sum = 0, sums = 0, x,max=-9999,min=9999;
    double ave, V, D;

    printf("Input integers\n");
    while(fscanf(stdin, "%d", &x) == 1){
        sum += x;
        sums += x * x;
        n++;
        if(x>max){
          max=x;
        }
        if(x<min){
          min=x;
        }
    }

    ave = (double)sum / n;
    V = fabs(((double)sums / n) - ave * ave);
    D = sqrt(V);
    printf("%d / %d = %lf\n", sum, n, ave);
    printf("Variance: %lf\n", V);
    printf("Standard deviation: %lf\n", D);
    printf("Maximum: %d\n",max);
    printf("Minimum: %d\n",min);

    return 0;
}