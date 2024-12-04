#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    double p, area;

    // Read the input values
    scanf("%lf %lf %lf", &a, &b, &c);

    // Calculate the semi-perimeter
    p = (a + b + c) / 2;

    // Calculate the area using Heron's formula
    area = sqrt(p * (p - a) * (p - b) * (p - c));
    // sqrt 传入形参为 double 类型，float 会被强制转换

    // Print the area, rounded to two decimal places
    printf("%.2lf\n", area);

    return 0;
}