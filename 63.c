#include <stdio.h>

int main() {
    int S, A, tax = 0;
    scanf("%d", &S);

    if (S <= 3500) {
        printf("%d\n", S);
        return 0;
    }

    A = S - 3500;

    if (A > 35000) {
        tax += (A - 35000) * 0.30;
        A = 35000;
    }
    if (A > 9000) {
        tax += (A - 9000) * 0.25;
        A = 9000;
    }
    if (A > 4500) {
        tax += (A - 4500) * 0.20;
        A = 4500;
    }
    if (A > 1500) {
        tax += (A - 1500) * 0.10;
        A = 1500;
    }
    tax += A * 0.03;

    int T = S - tax;
    printf("%d\n", T);

    return 0;
}