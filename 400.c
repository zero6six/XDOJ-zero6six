#include <stdio.h>

// 2-n 的质数和
int isPrime(int n){
    if (n<=1) return 0;
    if (n==2) return 1;
    if (n%2==0) return 0;
    for (int i=3; i*i<=n; i+=2){
        if (n%i==0) return 0;
    }
    return 1;
}

int main() {
    int n;
    scanf("%d", &n);
    // if (n==2) {
    //     printf("2");
    //     return 0;
    // }

    if (n<=1 || n>100000) {
        printf("0");
        return 0;
    }

    int sum=2;

    int i=3;
    while (i<=n){
        if (isPrime(i)) sum+=i;
        i+=2;
    }
    printf("%d", sum);
}