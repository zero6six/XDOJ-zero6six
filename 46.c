#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int num[100], count=0;

    for (int i = 0; i < n; i++) {
        scanf("%d", &num[i]);
    }
    for (int i = 1; i < n-1; i++) {
        if ((num[i] > num[i-1] && num[i] > num[i+1]) || (num[i] < num[i-1] && num[i] < num[i+1])) {
            count++;
        }
    }
    printf("%d\n", count);
}