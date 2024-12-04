#include <stdio.h>

int solveBases(int n, int *sumBase){
    // 返回真约数的个数，sumBase 为真约数之和
    int count = 0;
    for (int i=1; i<=n/2; i++){
        if (n%i == 0){
            *sumBase += i;
            count++;
        }
    }
    return count;
}

int main(){
    int n, m;
    scanf("%d %d", &n, &m);
    for (int i=n; i<=m; i++){
        int sumBaseA = 0;
        int countA = solveBases(i, &sumBaseA);
        if (sumBaseA>=n && sumBaseA<=m && sumBaseA>i){
            int sumBaseB = 0;
            int countB = solveBases(sumBaseA, &sumBaseB);
            if (sumBaseB == i){
                printf("%d %d,%d %d\n", i, countA, sumBaseA, countB);
            }
        }
    }
}