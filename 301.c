#include <stdio.h>

int sum_of_divisors(int num, int *count) {
    int sum = 0;
    *count = 0;
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
            (*count)++;
        }
    }
    return sum;
}

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int count_n, count_m;
    int sum_n = sum_of_divisors(n, &count_n);
    int sum_m = sum_of_divisors(m, &count_m);

    if (sum_n == m && sum_m == n) {
        printf("yes %d %d\n", count_n, count_m);
    } else {
        printf("no %d %d\n", count_n, count_m);
    }

    return 0;
}