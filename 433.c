#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    double sum;
    for (int i=1; i<=n; i++){
        sum+=1+1.0/i;
    }
    printf("%.1f\n", sum);
}