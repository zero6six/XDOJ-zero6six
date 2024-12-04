#include <stdio.h>

int main() {
    int number;
    int hundreds, tens, units, sum;

    scanf("%d", &number);

    hundreds = number / 100;
    tens = (number / 10) % 10;
    units = number % 10;

    sum = hundreds + tens + units;

    printf("%d", sum);

    return 0;
}