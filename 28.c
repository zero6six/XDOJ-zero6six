#include <stdio.h>

int main() {
    int a, b;
    int isLeapYear=0;
    int days;
    scanf("%d %d", &a, &b);
    if (a % 4 ==0){
        if (a % 100 == 0){
            isLeapYear = a%400==0 ? 1 : 0;
        } else isLeapYear = 1;
    }
    switch (b){
        case 1: days=31; break;
        case 2: days=28+isLeapYear; break;
        case 3: days=31; break;
        case 4: days=30; break;
        case 5: days=31; break;
        case 6: days=30; break;
        case 7: days=31; break;
        case 8: days=31; break;
        case 9: days=30; break;
        case 10: days=31; break;
        case 11: days=30; break;
        case 12: days=31; break;
    }
    printf("%d", days);
}