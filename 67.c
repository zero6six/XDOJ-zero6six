#include <stdio.h>

int main() {
    int n, k;
    int isFound = 0;
    scanf("%d %d", &n, &k);
    int arr[100];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++) {
        if (arr[i] == k) {
            printf("%d ", i);
            isFound = 1;
        }
    }
    if (!isFound) {
        printf("-1");
    }
}