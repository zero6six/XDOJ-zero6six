#include <stdio.h>

int main() {
    int level;
    int performance;
    double base_performance, commission_rate, commission;

    // Read input
    scanf("%d %d", &level, &performance);

    // Determine base performance and commission rate based on level
    switch (level) {
        case 1:
            base_performance = 50000;
            commission_rate = 0.03;
            break;
        case 2:
            base_performance = 35000;
            commission_rate = 0.02;
            break;
        case 3:
            base_performance = 20000;
            commission_rate = 0.02;
            break;
        case 4:
            base_performance = 5000;
            commission_rate = 0.025;
            break;
        default:
            printf("Invalid level\n");
            return 1;
    }

    // Calculate commission
    if (performance > base_performance) {
        commission = (performance - base_performance) * commission_rate;
    } else {
        commission = 0.0;
    }

    // Print result
    printf("%d %.1f %.1f\n", level, base_performance, commission);

    return 0;
}