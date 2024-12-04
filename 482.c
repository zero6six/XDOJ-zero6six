#include <stdio.h>

int getRoot(int n){
    if (n<10) return n;
    else {
        int sum=0;
        while (n!=0){
            int last = n%10;
            sum+=last;
            n/=10;
        }
        getRoot(sum);
    }
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d", getRoot(n));
}