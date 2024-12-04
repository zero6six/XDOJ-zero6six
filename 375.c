#include <stdio.h>

int main() {
    int n;
    int CTemp;
    double FTemp;
    double FTempArray[100];
    int count = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &CTemp);
        FTemp = CTemp * 9.0 / 5 + 32;
        FTempArray[i] = FTemp;
        printf("%.1lf ", FTemp);
        count++;
        if (count == 5) {
            printf("\n");
            count = 0;
        }
    }
    printf("\n");

    // 初始化的时候直接利用第一项
    double FTempMax = FTempArray[0];
    double FTempMin = FTempArray[0];
    double FTempSum = FTempArray[0];

    for (int i = 1; i < n; i++) {
        if (FTempArray[i] > FTempMax) {
            FTempMax = FTempArray[i];
        } else if (FTempArray[i] < FTempMin) {
            FTempMin = FTempArray[i];
        }
        FTempSum += FTempArray[i];
    }
    printf("%.1lf %.1lf %.1lf\n", FTempMin, FTempMax, FTempSum / n);
}