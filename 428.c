#include <stdio.h>

int main() {
    float salary, fee;

    // Input the salary
    scanf("%f", &salary);

    // Calculate the party fee based on the salary ranges
    if (salary <= 3000) {
        fee = salary * 0.005;
    } else if (salary <= 5000) {
        fee = salary * 0.01;
    } else if (salary <= 10000) {
        fee = salary * 0.015;
    } else {
        fee = salary * 0.02;
    }

    // Output the party fee, rounded to 1 decimal place
    printf("%.1f\n", fee);

    return 0;
}