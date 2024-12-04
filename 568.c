#include <stdio.h>
#define PI 3.1415926

int main() {
    double D, H;
    scanf("%lf %lf", &D, &H);

    double radius = D / 2.0;
    double volume = (PI * radius * radius * H) / 3.0;

    double iron_density = 7.86;
    double gold_density = 19.3;

    double iron_mass = volume * iron_density / 1000.0; // Convert to kg
    double gold_mass = volume * gold_density / 1000.0; // Convert to kg

    printf("%.3lf %.3lf\n", iron_mass, gold_mass);

    return 0;
}