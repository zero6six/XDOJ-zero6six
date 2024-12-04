#include <stdio.h>
#include <math.h>

int main() {
    double d, p, r;
    scanf("%lf%lf%lf", &d, &p, &r);
    
    double m = log10(p/(p-d*r))/log10(1+r);
    printf("%.2lf", m);
}