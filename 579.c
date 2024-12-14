#include <stdio.h>

int main() {
    int a=1, b=0, c=0;
    // a->b->c
    int oldA, oldB, oldC;
    int n;
    scanf("%d", &n);
    for (int i=1; i<n; i++){
        oldA=a; oldB=b; oldC=c;
        b=oldA; c+=oldB; a=c;
    }
    printf("%d", a+b+c);
}

// ai math solution
// not work in XDOJ

// 使用动态规划计算斐波那契数列
// int fibonacci(int n) {
//     if (n <= 2) {
//         return 1;
//     }
//     // XDOJ error: should use constant expression
//     int fib[n+1];
//     fib[1] = 1;
//     fib[2] = 1;
//     for (int i = 3; i <= n; i++) {
//         fib[i] = fib[i-1] + fib[i-2];
//     }
//     return fib[n];
// }

// int main() {
//     int n;
//     scanf("%d", &n);
//     int result = fibonacci(n);
//     printf("%d", result);
//     return 0;
// }