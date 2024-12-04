#include <stdio.h>

int getLeapYear(int year) {
    if (year % 4 == 0) {
        if (year % 100 == 0) {
            return year % 400 == 0 ? 1 : 0;
        } else return 1;
    } else return 0;
}

int getDays(int isLeapYear, int month) {
    switch (month) {
        case 1: return 31;
        case 2: return 28 + isLeapYear;
        case 3: return 31;
        case 4: return 30;
        case 5: return 31;
        case 6: return 30;
        case 7: return 31;
        case 8: return 31;
        case 9: return 30;
        case 10: return 31;
        case 11: return 30;
        case 12: return 31;
    }
}

int main() {
    int year, day;
    scanf("%d %d", &year, &day);
    int isLeapYear = getLeapYear(year);
    int days = 0;
    for (int i = 1; i <= 12; i++) {
        if (day > days && day <= days + getDays(isLeapYear, i)) {
            printf("%d %d", i, day - days);
            return 0;
        }
        days += getDays(isLeapYear, i);
    }
}