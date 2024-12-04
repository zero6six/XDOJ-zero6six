#include <stdio.h>

int main() {
    double profit, bonus;
    scanf("%lf", &profit);

    if (profit <= 100000) {
        bonus = profit * 0.10;
    } else if (profit <= 200000) {
        bonus = 100000 * 0.10 + (profit - 100000) * 0.075;
    } else if (profit <= 400000) {
        bonus = 100000 * 0.10 + 100000 * 0.075 + (profit - 200000) * 0.05;
    } else if (profit <= 600000) {
        bonus = 100000 * 0.10 + 100000 * 0.075 + 200000 * 0.05 + (profit - 400000) * 0.03;
    } else if (profit <= 1000000) {
        bonus = 100000 * 0.10 + 100000 * 0.075 + 200000 * 0.05 + 200000 * 0.03 + (profit - 600000) * 0.015;
    } else {
        bonus = 100000 * 0.10 + 100000 * 0.075 + 200000 * 0.05 + 200000 * 0.03 + 400000 * 0.015 + (profit - 1000000) * 0.01;
    }

    printf("%d\n", (int)bonus);
    return 0;
}