#include <stdio.h>

int main() {
    int n, k;
    int count=0;
    scanf("%d %d", &n, &k);
    while(n>=k){
        n=n-k+1;
        count+=k;
    }
    count+=n;
    printf("%d", count);
}