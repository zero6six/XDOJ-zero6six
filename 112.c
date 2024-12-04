#include <stdio.h>
#include <math.h>

int main() {
    double x;
    scanf("%lf", &x);

    double num;
    if (x>=0) {
        num = sqrt(x);
    } else {
        num = (x+1)*(x+1)+2*x+1/x;
    }

    printf("%.2lf", num);
}