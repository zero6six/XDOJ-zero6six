#include <stdio.h>
#include <math.h>

int getMaxExponent(double n){
    // 只干本函数应该有的功能
    // 即返回最大 2 的幂的指数
    double ln2 = log(2.0);
    double lnN = log(n);
    int maxExponent = lnN/ln2; // 换底公式，拿到 log_2{n}
    return maxExponent;
}

int main() {
    int n;
    int bestFactoring=1;
    int factorCount=0;
    scanf("%d", &n);
    int expArr[20]={0};
    while (n!=0){
        int exp = getMaxExponent(n);
        expArr[factorCount]=exp;
        factorCount++;
        n -=(int) pow(2.0, (double)exp); 
        if (exp==0) bestFactoring=0;
    }
    if (bestFactoring){
        for (int i=0; i<factorCount; i++){
            int factor = pow(2.0, (double) expArr[i]);
            printf("%d ", factor);
        }
    } else printf("-1");
    return 0;
    
}