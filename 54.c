#include <stdio.h>

int main() {
    int n, a, b, c;
    scanf("%d", &n);
    for (a=1; a<=9; a++) {
        for (b=0; b<=9; b++) {
            for (c=1; c<=9; c++) {
                if (a*100+b*10+c + c*100+b*10+a == n) {
                    printf("%d %d %d\n", a, b, c);
                }
            }
        }
    }
}