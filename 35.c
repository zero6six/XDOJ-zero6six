// 打个表先
// #include <stdio.h>

// int primeNums[] = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97,
// 101,103,107,109,113,127,131,137,139,149,151,157,163,167,173,179,181,191,193,197,199,
// 211,223,227,229,233,239,241,251,257,263,269,271,277,281,283,293,
// 307,311,313,317,331,337,347,349,353,359,367,373,379,383,389,397,
// 401,409,419,421,431,433,439,443,449,457,461,463,467,479,487,491,499,
// 503,509,521,523,541,547,557,563,569,571,577,587,593,599,
// 601,607,613,617,619,631,641,643,647,653,659,661,673,677,683,691,
// 701,709,719,727,733,739,743,751,757,761,769,773,787,797,
// 809,811,821,823,827,829,839,853,857,859,863,877,881,883,887,
// 907,911,919,929,937,941,947,953,967,971,977,983,991,997};

// int isPrime(int n){
//     int a = 0;
//     for (int i = 0; i < 168; i++){
//         if (primeNums[i] == n){
//             a = 1;
//             break;
//         }
//     }
//     return a;
// }

// int main() {
//     int n, a, b;
//     scanf("%d", &n);
//     for (int i = 0; i < 168; i++){
//         int factor1 = primeNums[i];
//         int factor2 = n-factor1;
//         if (isPrime(factor2)){
//             printf("%d %d", factor1, factor2);
//             return 0;
//         }
//     }
// }

// 不打表的做法
#include <stdio.h>
#include <math.h>
// 找到两个素数，使它们的和等于用户输入的整数 n

int is_prime(int n) {
    if (n <= 1) return 0;
    if (n == 2) return 1;
    if (n % 2 == 0) return 0;
    for (int i = 3; i <= sqrt((double)n); i += 2) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main() {
    int n, a, b;
    scanf("%d", &n);
    int factor1 = 2;
    int factor2 = n-factor1;
    if (is_prime(factor2)){
        printf("%d %d\n", factor1, factor2);
        return 0;
    }
    factor1 = 3;
    while (1){
        int factor2 = n-factor1;
        if (is_prime(factor2)){
            printf("%d %d\n", factor1, factor2);
            return 0;
        }
        do {factor1 += 2;}
        while (!is_prime(factor1));
    }
}