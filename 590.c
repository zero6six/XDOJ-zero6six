#include <stdio.h>

int main() {
    int a, b;
    scanf("%d%d", &a, &b);

    if (a>b){
        int t=a;
        a=b;
        b=t;
    }
    
    int count=0;
    for (int i=a; i<=b; i++){
        if (i%7==0 ^ i%11==0) count++;
    }
    printf("%d", count);
}