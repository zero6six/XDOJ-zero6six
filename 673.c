#include <stdio.h>
#include <math.h>

int isAutomorphic(int n) {
    int square = n * n;
    while (n > 0) {
        // 如此比较最后若干位，当 n 被除成 0 的时候刚好就比完了。
        if (n % 10 != square % 10) {
            return 0;
        }
        n /= 10;
        square /= 10;
    }
    return 1;
}

int main() {
    int n;
    scanf("%d", &n);
    if (isAutomorphic(n)) {
        printf("%d 1\n", n);
    } else {
        printf("%d 0\n", n);
    }
    return 0;
}