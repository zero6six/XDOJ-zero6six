#include <stdio.h>

int isPrime(int n){
    if (n<=1) return 0;
    if (n==2) return 1;
    for (int i=3; i*i<=n; i+=2){
        if (n%i==0) return 0;
    } return 1;
}

int main() {
    int n;
    scanf("%d", &n);

    if (isPrime(n)){
        printf("1\n%d", n);
        return 0;
    }

    int longestFactorsCount=0, longestFactorsStart=0;
    for (int i=2; i*(i+1)<=n; i++){
        // 最长分解在最坏情况下是 i*(i+1)=n
        if (n%i==0){
            int tempN = n;
            int FactorsCount=1, FactorsStart=i;
            tempN /= i;
            for (int j=i+1; 1; j++){
                if (tempN%j==0){
                    tempN /= j;
                    FactorsCount++;
                } else {
                    if (FactorsCount>longestFactorsCount){
                        longestFactorsCount=FactorsCount;
                        longestFactorsStart=FactorsStart;
                    }
                    break;
                }
            }
        }
    }

    printf("%d\n", longestFactorsCount);
    for (int i = longestFactorsStart; i<longestFactorsStart+longestFactorsCount; i++){
        if (i==longestFactorsStart) printf("%d", i);
        else printf("*%d", i);
    }
}