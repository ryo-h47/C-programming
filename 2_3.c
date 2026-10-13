#include <stdio.h>
#include <math.h>

int main(){
    int n=0;
    double sum = 0.0, sums = 0.0, x,max=-9999.0,min=9999.0, ave, V, D;

    printf("Input integers\n");
    while(fscanf(stdin, "%lf", &x) == 1){
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
    printf("%lf / %d = %lf\n", sum, n, ave);
    printf("Variance: %lf\n", V);
    printf("Standard deviation: %lf\n", D);
    printf("Maximum: %lf\n",max);
    printf("Minimum: %lf\n",min);

    return 0;
}