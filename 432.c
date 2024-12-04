#include <stdio.h>

int getDigits(int n){
    int digits = 0;
    if (n == 0) return 1;
    while (n != 0){
        n /= 10;
        digits++;
    }
    return digits;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", getDigits(n));
}