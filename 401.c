#include <stdio.h>

int main() {
    float usage, bill = 0.0, excess = 0.0;
    char tier;

    // Read the electricity usage
    scanf("%f", &usage);

    if (usage <= 110) {
        bill = usage * 0.5;
        tier = 'A';
        excess = 0.0;
    } else if (usage <= 210) {
        bill = 110 * 0.5 + (usage - 110) * 0.55;
        tier = 'B';
        excess = usage - 110;
    } else if (usage <= 400) {
        bill = 110 * 0.5 + 100 * 0.55 + (usage - 210) * 0.7;
        tier = 'C';
        excess = usage - 210;
    } else {
        bill = 110 * 0.5 + 100 * 0.55 + 190 * 0.7 + (usage - 400) * 1.0;
        tier = 'D';
        excess = usage - 400;
    }

    // Print the result
    printf("%.2f %c %.2f\n", bill, tier, excess);

    return 0;
}