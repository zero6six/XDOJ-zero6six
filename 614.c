#include <stdio.h>
#include <math.h>

int main() {
    double x, y;
    if (scanf("%lf %lf", &x, &y) != 2) {
        printf("input error\n");
        return 1;
    }

    // Coordinates of the centers of the bases of the cylindrical turrets
    double centers[4][2] = {
        {2.0, 2.0},
        {-2.0, 2.0},
        {-2.0, -2.0},
        {2.0, -2.0}
    };

    // Check if the point is within any of the turret bases
    for (int i = 0; i < 4; i++) {
        double dx = x - centers[i][0];
        double dy = y - centers[i][1];
        if (sqrt(dx * dx + dy * dy) <= 1.0) {
            printf("10\n");
            return 0;
        }
    }

    // If the point is not within any turret base
    printf("0\n");
    return 0;
}

// another solution, writed by human.
// #include <stdio.h>
// #include <math.h>

// double distance(double x1, double y1, double x2, double y2) {
//     return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
// }

// int main() {
//     double a, b;
//     int c = scanf("%lf %lf", &a, &b);
//     if (c != 2) {
//         printf("input error\n");
//         return 0;
//     }
//     if (distance(a, b, 2, 2)<=1 || distance(a, b, 2, -2)<=1 || distance(a, b, -2, 2)<=1 || distance(a, b, -2, -2)<=1) {
//         printf("10\n");
//     } else {
//         printf("0\n");
//     }
//     return 0;
// }