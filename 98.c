#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    if (n % 2 == 0 && n % 3 != 0 && n % 5 != 0) {
        printf("Nice\n");
    } else if (n % 3 == 0 && n % 2 != 0 && n % 5 != 0) {
        printf("Good\n");
    } else if (n % 5 == 0 && n % 2 != 0 && n % 3 != 0) {
        printf("Best\n");
    } else {
        printf("Bad\n");
    }

    return 0;
}