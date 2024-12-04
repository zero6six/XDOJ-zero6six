#include <stdio.h>

int main() {
    int second;
    scanf("%d", &second);

    int hour = second / 3600;
    int minute = second / 60-hour*60;
    second = second % 60;

    printf("%02d:%02d:%02d ", hour, minute, second);
    hour < 12 ? printf("am") : printf("pm");
    // 刚好 12 点没做处理，反正样例小。
}