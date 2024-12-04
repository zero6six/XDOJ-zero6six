#include <stdio.h>

int main() {
    int n;
    int temp[30];
    scanf("%d", &n);
    for (int i=0; i<n; i++){
        scanf("%d", &temp[i]);
    }
    int maxDiff = 0;
    for (int i=0; i<n-1; i++){
        int diff = temp[i+1] - temp[i];
        diff = diff > 0 ? diff : -diff;
        if (diff > maxDiff) maxDiff = diff; 
    }
    printf("%d", maxDiff);
}