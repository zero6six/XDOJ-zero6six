#include <stdio.h>

int main() {
    int n, a, b;
    scanf("%d %d %d", &n, &a, &b);
    int count=0;
    for (int i=0; i<n; i++) {
        int x;
        scanf("%d", &x);
        if (x>=a && x<=b) {
            count++;
        }
    }
    printf("%d\n", count);
}