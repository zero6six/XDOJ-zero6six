#include <stdio.h>

// 判断某时刻的下一秒是啥

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
    int yr, mon, day, hr, min, sec;
    scanf("%d%d%d%d%d%d", &yr, &mon, &day, &hr, &min, &sec);
    
    if (sec == 59) {
        sec = 0;
        if (min == 59) {
            min = 0;
            if (hr == 23) {
                hr = 0;
                if (day == getDays(getLeapYear(yr), mon)) {
                    day = 1;
                    if (mon == 12) {
                        mon = 1;
                        yr++;
                    } else mon++;
                } else day++;
            } else hr++;
        } else min++;
    } else sec++;
    
    printf("%d\n%d\n%d\n%d\n%d\n%d", yr, mon, day, hr, min, sec);
}