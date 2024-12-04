#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int pm25[100];
    for (int i = 0; i < n; i++) {
        scanf("%d", &pm25[i]);
    }

    int level1 = 0, level2 = 0, level3 = 0, level4 = 0, level5 = 0, level6 = 0;
    double sum = 0;

    for (int i = 0; i < n; i++) {
        sum += pm25[i];
        if (pm25[i] <= 50) {
            level1++;
        } else if (pm25[i] <= 100) {
            level2++;
        } else if (pm25[i] <= 150) {
            level3++;
        } else if (pm25[i] <= 200) {
            level4++;
        } else if (pm25[i] <= 300) {
            level5++;
        } else {
            level6++;
        }
    }

    double average = sum / n;
    printf("%.2f\n", average);
    printf("%d %d %d %d %d %d\n", level1, level2, level3, level4, level5, level6);

    return 0;
}