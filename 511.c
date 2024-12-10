#include <stdio.h>

int main() {
    int temp, n;
    scanf("%d %d", &temp, &n);
    double h = temp;
    double sum = h;
    n-=1;
    h/=2;
    // 第一次落地

    for (; n>0; n--){
        sum += h * 2;
        h /= 2;
    }
    printf("%.1lf %.1lf\n", sum, h);
}