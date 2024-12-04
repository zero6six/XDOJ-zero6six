#include <stdio.h>

int main() {
    int a, b, c;
    int max;
    scanf("%d%d%d", &a, &b, &c);
    max = b > a ? b : a;
    max = c > max ? c : max;
    printf("%d\n", max);
}