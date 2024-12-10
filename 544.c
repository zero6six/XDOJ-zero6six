#include <stdio.h>

int maxProduct(int n) {
// 初等数论中的结论：将一个数拆分成尽可能多的 3，可以使乘积最大化。
// 参见：e 进制 / 3 进制效率更高。
// https://mp.weixin.qq.com/s?__biz=MzA5NDc1NzQ4MA==&mid=2653389593&idx=3&sn=bf1d1b4d6c5fc1253d3edcfb8ca93b7e
    if (n == 2) return 1;
    if (n == 3) return 2;
    int product = 1;
    while (n > 4) {
        product *= 3;
        n -= 3;
    }
    product *= n;
    return product;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", maxProduct(n));
    return 0;
}