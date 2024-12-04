#include <stdio.h>
#include <math.h>

int main() {
    int n;
    scanf("%d", &n);
    int temp = sqrt((double) n);

    if (temp * temp == n) {
        printf("%d\n", temp);
    } else {
        printf("no\n");
    }
}