#include <stdio.h>

// 同构数判定
int isIsomorphism(int n){
    int a = n*n;
    while (n>0){
        if (n%10 != a%10) return 0;
        n /= 10;
        a /= 10;
    }
    return 1;
}

int main() {
    int n;
    scanf("%d", &n);
    for (int i=0; i<n; i++){
        int x;
        scanf("%d", &x);
        if (isIsomorphism(x)) printf("%d\n", x);
        else printf("No\n");
    }
}