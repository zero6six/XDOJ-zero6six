#include <stdio.h>

int sum(int n){
    int last;
    int sumOut=0;
    while(n != 0){
        last = n % 10;
        n = n / 10;
        sumOut += last;
    }
    return sumOut;
}

int main(){
    int n;
    scanf("%d", &n);
    int num[100];

    for (int i = 0; i < n; i++) {
        scanf("%d", &num[i]);
    }
    int sumMax = 0, numMax = 0;
    for (int i = 0; i < n; i++) {
        if (sum(num[i]) > sumMax) {
            sumMax = sum(num[i]);
            numMax = num[i];
        } else if (sum(num[i]) == sumMax) {
            if (num[i] > numMax) {
                numMax = num[i];
            }
        }
    }
    printf("%d\n", numMax);
}