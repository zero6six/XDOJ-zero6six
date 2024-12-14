#include <stdio.h>

int getFactorial(int n){
    int a=1;
    for (int i=2; i<=n; i++){
        a*=i;
    }
    return a;
}

int main() {
    int m, n;
    scanf("%d%d", &m, &n);
    int out = getFactorial(m)/getFactorial(n)/getFactorial(m-n);
    printf("%d", out);
}