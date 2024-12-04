#include <stdio.h>
#include <math.h>

int main() {
    double a;
    int b;
    scanf("%lf%d", &a, &b);

    a += 1;
    printf("%.2lf", pow(a, b));
}