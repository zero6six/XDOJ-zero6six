#include <stdio.h>

int main() {
    double profit, bonus = 0.0;
    scanf("%lf", &profit);

    if (profit <= 100000) {
        bonus = profit * 0.10;
    } else if (profit <= 200000) {
        bonus = 100000 * 0.10 + (profit - 100000) * 0.075;
    } else if (profit <= 400000) {
        bonus = 100000 * 0.10 + 100000 * 0.075 + (profit - 200000) * 0.05;
    } else if (profit <= 800000) {
        bonus = 100000 * 0.10 + 100000 * 0.075 + 200000 * 0.05 + (profit - 400000) * 0.03;
    } else {
        bonus = 100000 * 0.10 + 100000 * 0.075 + 200000 * 0.05 + 400000 * 0.03 + (profit - 800000) * 0.01;
    }

    printf("%.1lf\n", bonus);
    return 0;
}