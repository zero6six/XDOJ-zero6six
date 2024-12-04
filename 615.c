#include <stdio.h>

int main() {
    int N;
    int days, hours, minutes, seconds;

    // Read input
    scanf("%d", &N);

    // Calculate days, hours, minutes, and seconds
    days = N / 86400;
    N = N % 86400;
    hours = N / 3600;
    N = N % 3600;
    minutes = N / 60;
    seconds = N % 60;

    // Print the result
    printf("%d %d %d %d\n", days, hours, minutes, seconds);

    return 0;
}