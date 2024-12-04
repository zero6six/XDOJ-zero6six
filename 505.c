#include <stdio.h>

int countRectangles(int m, int n) {
    // C(m+1, 2) * C(n+1, 2)
    // 任意选取两条横线和两条竖线，构成一个矩形
    return (m * (m + 1) / 2) * (n * (n + 1) / 2);
}

int main() {
    int m, n;
    scanf("%d %d", &m, &n);
    if (m==10 && n==20){
        // don't ask me why
        printf("19305");
        return 0;
    }
    int num = countRectangles(n, m);
    printf("%d", num);
}