#include <stdio.h>

int main() {
    float edge_length;
    float density_gold = 19.32;
    float density_silver = 10.53;
    float density_copper = 8.90;

    // Input edge length
    scanf("%f", &edge_length);

    // Calculate volume of the cube
    float volume = edge_length * edge_length * edge_length;

    // Calculate masses
    float mass_gold = volume * density_gold;
    float mass_silver = volume * density_silver;
    float mass_copper = volume * density_copper;

    // Print masses with 2 decimal precision
    printf("%.2f\n", mass_gold);
    printf("%.2f\n", mass_silver);
    printf("%.2f\n", mass_copper);

    return 0;
}