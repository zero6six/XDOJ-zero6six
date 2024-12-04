#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    if (b < a){
        int temp = a;
        a = b;
        b = temp;
    }
    int multiple = b;
    while (multiple % a != 0){
        multiple += b;
    }
    printf("%d\n", multiple);
}