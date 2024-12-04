#include <stdio.h>

int main() {
    int n, total;
    scanf("%d", &n);
    scanf("%d", &total);

    int negativeMax = 1;
    int negativeMaxIndex = 0;
    int num;
    for (int i=1; i<=n; i++){
        scanf("%d", &num);
        total += num;
        if (num<negativeMax){
            negativeMax = num;
            negativeMaxIndex = i;
        }
    }
    printf("%d %d\n", total, negativeMaxIndex);
}