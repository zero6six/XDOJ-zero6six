#include <stdio.h>

int main() {
    int n, max=0;
    for (int i=0; i<4; i++){
        scanf("%d", &n);
        if (n>max) max=n;
    }
    printf("%d\n", max);
}