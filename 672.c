#include <stdio.h>
#include <math.h>

double generatePolynomial(int n, double x) {
    // 第 1 项的 n 为 0
    int a = n % 2 ? -1 : 1;
    int power = 2*n+1;
    int factorial = 1;
    for (int i=1; i<=power; i++) {
        factorial *= i;
    }
    double temp1 = pow(x, (double)power);
    double out = a*temp1/factorial;
    return out;
    // 这里调试半天，发现声明函数的时候返回值double 写成 int 了。
}

int main() {
    int n;
    double x;
    scanf("%d%lf", &n, &x);

    double total=0;
    for (int i=0; i<n; i++) {
        total += generatePolynomial(i, x);
    }
    printf("%.4lf", total);
}