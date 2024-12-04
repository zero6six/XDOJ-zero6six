#include <stdio.h>

int main() {
    int a, b;
    int sum, diff, sum_squares, diff_squares;
    int max, min;

    // Read input
    scanf("%d %d", &a, &b);

    // Calculate values
    sum = (a + b) * (a + b);
    diff = (a - b) * (a - b);
    sum_squares = a * a + b * b;
    diff_squares = a * a - b * b;

    // Find maximum value
    max = sum;
    if (diff > max) max = diff;
    if (sum_squares > max) max = sum_squares;
    if (diff_squares > max) max = diff_squares;

    // Find minimum value
    min = sum;
    if (diff < min) min = diff;
    if (sum_squares < min) min = sum_squares;
    if (diff_squares < min) min = diff_squares;

    // Output results
    printf("%d %d\n", max, min);

    return 0;
}