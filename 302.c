#include <stdio.h>
#include <math.h>

// 求出第a个质数到第a+10个质数当中所有质数和。
int isPrime(int n){
    if (n<=1) return 0;
    if (n==2) return 1;
    if (n%2==0) return 0;
    // 合数可以分解为其他素数，上述已经有 2 作为因子的情况排除了
    // 然后再对其他奇数校验
    for (int i=3; i<=sqrt((double) n); i+=2){
        if (n%i==0) return 0;
    }
    return 1;
}

int main() {
    int p;
    int count=1;
    // 2 这个素数已经计过
    // 若p=4，则求第 4-14 个素数
    // 则 count = 4-14
    // count<=p+10
    int sum=0;
    scanf("%d", &p);
    for (int i=3; count<p+10; i+=2){ 
        if (isPrime(i)){
            // 当质数的时候，count++
            // 因此约束条件是 count<=p+9 或 <p+10
            // 因为 count = p+9 的时候 count 还会自增一次
            count++;
            if (count>=p){
                sum+=i;
            }
        }   
    }
    printf("%d", sum);
}