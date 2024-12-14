#include <stdio.h>

int main() {
    double n;
    scanf("%lf", &n);

    printf("%.2lf ", n);

    if (n >= 90) printf("A");
    else if (n >= 80) printf("B");
    else if (n >= 70) printf("C");
    else if (n >= 60) printf("D");
    else printf("E");
}