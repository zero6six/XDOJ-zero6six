#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    if (b > a){
        int t = a;
        a = b;
        b = t;
    }
    printf("%d %d", a%10, b*b);
}