#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int max_sum = 0, current_sum = 0, current_value, previous_value;

    if (n > 0) {
        scanf("%d", &previous_value);
        current_sum = previous_value;
        max_sum = current_sum;

        for (int i = 1; i < n; i++) {
            scanf("%d", &current_value);
            if (current_value == previous_value) {
                current_sum += current_value;
            } else {
                if (current_sum > max_sum) {
                    max_sum = current_sum;
                }
                current_sum = current_value;
            }
            previous_value = current_value;
        }

        if (current_sum > max_sum) {
            max_sum = current_sum;
        }
    }

    printf("%d\n", max_sum);
}