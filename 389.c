#include <stdio.h>

// 求第 a 个质数到第 b 个质数当中所有质数和

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
    int a, b;
    scanf("%d %d", &a, &b);

    if (a>b){
        int temp=a;
        a=b;
        b=temp;
    }
    
    int sum=0;
    if (a==1) sum+=2;
    for (int i=3, count=1; count<b; i+=2){
        if (isPrime(i)){
            count++;
            if (count>=a){
                sum+=i;
            }
        }
    }
    printf("%d", sum);
}