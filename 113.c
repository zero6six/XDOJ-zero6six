#include <stdio.h>
#include <math.h>

int main() {
    float distance;
    int wait_time;
    float fare = 10.0; // Starting fare for the first 3 km

    // Read input
    scanf("%f %d", &distance, &wait_time);

    // Calculate fare based on distance
    if (distance > 3) {
        if (distance <= 10) {
            fare += (distance - 3) * 2;
        } else {
            fare += 7 * 2 + (distance - 10) * 3;
        }
    }

    // Calculate fare based on waiting time
    fare += (wait_time / 5) * 2;

    // Round the fare to the nearest integer
    int total_fare = round(fare);

    // Print the total fare
    printf("%d\n", total_fare);

    return 0;
}