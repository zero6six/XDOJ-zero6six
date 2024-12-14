#include <stdio.h>

int main() {
    long n;
    scanf("%ld", &n);
    if (n%2==1) n = 3*n+1;
    printf("%ld", n);
}