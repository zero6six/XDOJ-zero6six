#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int sum=0, tmp;
    for (int i=0; i<n; i++){
        scanf("%d", &tmp);
        sum += tmp;
    }
    printf("%.2lf", sum*1.0/n);
}