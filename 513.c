#include <stdio.h>

int main() {
    float sign;
    int a, b;
    int n;
    float sum;
    scanf("%d", &n);
    for (a=1; a<=n; a++){
        sign = a % 2 ? 1.0 : -1.0;
        b = 2*a-1;
        sum+=sign*a/b;
    }
    printf("%.3f\n", sum);
}