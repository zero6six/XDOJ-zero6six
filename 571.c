#include <stdio.h>
#define PI 3.1415926

int main() {
    float R1, H1, R2, H2;
    scanf("%f %f %f %f", &R1, &H1, &R2, &H2);

    // Calculate the volume of the cylinder
    float volume_cylinder = PI * (R1 / 2) * (R1 / 2) * H1;

    // Calculate the volume of the cone
    float volume_cone = (1.0 / 3.0) * PI * (R2 / 2) * (R2 / 2) * H2;

    // Calculate the volume of the geometric body
    float volume_body = volume_cylinder - volume_cone;

    // Calculate the weight of the displaced gasoline
    float weight_gasoline = volume_body * 0.785;

    // Print the results
    printf("%.1f %.1f\n", volume_body, weight_gasoline);

    return 0;
}