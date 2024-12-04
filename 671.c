#include <stdio.h>

int main() {
    int len, total=0;
    int array[30];
    scanf("%d", &len);
    for (int i = 0; i < len; i++) {
        scanf("%d", &array[i]);
        total += array[i];
    }
    int average = total / len;
    int tempSum = 0;
    for (int i = 0; i < len; i++) {
        tempSum += (array[i]-average)*(array[i]-average);
    }
    int p = tempSum / len;
    printf("%d\n", p);
}