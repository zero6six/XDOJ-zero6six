#include <stdio.h>

int main() {
    double a;
    double diff=1;
    scanf("%lf", &a);
    double x=a;
    while (diff>=0.00001){
        double tmp = 0.5*(x+a/x);
        diff = x-tmp;
        if (diff < 0) diff = -diff;
        x = tmp;
    }
    printf("%.5lf", x);
}