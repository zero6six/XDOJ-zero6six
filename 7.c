#include <stdio.h>

int main() {
    int day, smogIndex, plateNumber;
    scanf("%d %d %d", &day, &smogIndex, &plateNumber);

    int lastDigit = plateNumber % 10;
    int restricted = 0;

    if (day >= 1 && day <= 5) { // Weekdays
        if (smogIndex >= 200 && smogIndex < 400) {
            switch (day) {
                case 1: restricted = (lastDigit == 1 || lastDigit == 6); break;
                case 2: restricted = (lastDigit == 2 || lastDigit == 7); break;
                case 3: restricted = (lastDigit == 3 || lastDigit == 8); break;
                case 4: restricted = (lastDigit == 4 || lastDigit == 9); break;
                case 5: restricted = (lastDigit == 5 || lastDigit == 0); break;
            }
        } else if (smogIndex >= 400) {
            if (day == 1 || day == 3 || day == 5) {
                restricted = (lastDigit == 1 || lastDigit == 3 || lastDigit == 5 || lastDigit == 7 || lastDigit == 9);
            } else if (day == 2 || day == 4) {
                restricted = (lastDigit == 0 || lastDigit == 2 || lastDigit == 4 || lastDigit == 6 || lastDigit == 8);
            }
        }
    }

    printf("%d %s\n", lastDigit, restricted ? "yes" : "no");
    return 0;
}