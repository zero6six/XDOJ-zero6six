#include <stdio.h>

int getSum(int n){
    int sum=0;

    while (n!=0){
        int last = n%10;
        sum+=last;
        n/=10;
    }
    return sum;
}

int main() {
    int n;

    scanf("%d", &n);
    while(n>9){
        n=getSum(n);
    }

    printf("%d", n);
}