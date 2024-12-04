#include <stdio.h>

int main(){
    int a, b, sum, diff, product, divide, remain;

    scanf("%d%d", &a, &b);

    sum = a + b;
    diff = a - b;
    product = a*b;
    divide = a/b;
    remain = a%b;

    printf("%d %d %d %d %d", sum, diff, product, divide, remain);
}

