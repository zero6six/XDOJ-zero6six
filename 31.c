#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    if (a == 0){
        printf("%d\n", b);
        return 0;
    } else if (b == 0){
        printf("%d\n", a);
        return 0;
    }

    if (b > a) {
        int temp = b;
        b = a;
        a = temp;
    }

    int d = a % b;
    while (d!=0){
        a = b;
        b = d;
        d = a % b;
    }
    printf("%d\n", b);
    return 0;
}