#include <stdio.h>

int main() {
    int m, n;
    scanf("%d %d", &m, &n);

    // 2x+4y=n
    // x+y=m
    // x = m - y
    // y = (n - 2m) / 2

    int y = (n - 2 * m) / 2;
    int x= m - y;
    printf("%d %d\n", x, y);
}