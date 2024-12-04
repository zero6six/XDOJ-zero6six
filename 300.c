#include <stdio.h>

int getDigits(int n){
    int count=0;
    if (n==0) return 1;
    while (n!=0){
        count++;
        n/=10;
    }
    return count;
}

int main() {
    int m;
    scanf("%d", &m);
    printf("%d", getDigits(m));
}