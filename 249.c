#include <stdio.h>
#include <math.h>
// 分解质因数

int isPrime(int n){
    if (n<=1) return 0;
    else if (n==2) return 1;
    else if (n%2==0) return 0;
    for (int i=3; i<sqrt((double) n); i+=2){
        if(n%i==0) return 0;
    }
    return 1;
}

// 直接的写法
// int primeFactorization(int n) {
//     if (isPrime(n)){
//         printf("%d", n);
//         return 0;
//     }

//     // 以下可以除去一个质因数并打印。
//     if (n%2==0){
//         printf("2");
//         n /= 2;
//     } else {
//         int factor = 3;
//         while (1){
//             if (isPrime(factor)&&n%factor==0){
//                 printf("%d", factor);
//                 n /= factor;
//                 break;
//             }
//         factor += 2;
//         }
//     }

//     while (n!=1){
//         if (n%2==0){
//             printf("*2");
//             n /= 2;
//         } else {
//             int factor = 3;
//             while (1){
//                 if (isPrime(factor)&&n%factor==0){
//                     printf("*%d", factor);
//                     n /= factor;
//                     break;
//                 }
//             factor += 2;
//             }
//         }
//     }
// }

// 将核心算法包装成函数这么写：
int getMinPrimeFactor(int n){
    // 原型来自 XDOJ-249
	int factor;
	if (n%2==0){
		factor = 2;
	} else {
		factor = 3;
		while (1){
			if (isPrime(factor)&&n%factor==0){
				break;
			}
		factor += 2;
		}
	}
	return factor;
}

int primeFactorization(int n){
    if (isPrime(n)){
        printf("%d", n);
        return 0;
    }

    // 第一个质因数
    int factor = getMinPrimeFactor(n);
    printf("%d", factor);
    n /= factor;

    while (n!=1){
        factor = getMinPrimeFactor(n);
        printf("*%d", factor);
        n /= factor;
    }
}

int main() {
    int n;
    scanf("%d", &n);

    primeFactorization(n);
    return 0;
}