#include <stdio.h>

int main() {
    float radius, volume;
    const float pi = 3.14;

    scanf("%f", &radius);

    volume = (4.0 / 3.0) * pi * radius * radius * radius;

    printf("%.2f", volume);

    return 0;
}
