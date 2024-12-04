#include <stdio.h>

int main() {
    int m, n;
    scanf("%d %d", &m, &n);
    int sum=0;
    for (int i = m; i<=n; i+=1){
        sum+= i*i;
    }
    printf("%d\n", sum);
}