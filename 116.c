#include <stdio.h>
#include <math.h>

int main() {
    double usage, bill = 0.0;
    scanf("%lf", &usage);

    if (usage <= 110) {
        bill = usage * 0.5;
    } else if (usage <= 210) {
        bill = 110 * 0.5 + (usage - 110) * 0.55;
    } else {
        bill = 110 * 0.5 + 100 * 0.55 + (usage - 210) * 0.7;
    }

    printf("%.2f\n", round(bill * 100) / 100);
    return 0;
}