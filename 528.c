#include <stdio.h>

int abs(int a) {
    return a > 0 ? a : -a;
}

int main() {
    int a[1000];
    int n, target;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    scanf("%d", &target);

    int closeSum=a[0]+a[1]+a[2];

    for (int i = 0; i < n-2; i++){
        for (int j = i+1; j < n-1; j++){
            for (int k = j+1; k < n; k++){
                int sum = a[i] + a[j] + a[k];
                if (abs(sum-target) < abs(closeSum-target)) {
                    closeSum = sum;
                }
            }
        }
    }
    printf("%d\n", closeSum);
}

/*
算法题，原题如下：
给你一个长度为 n 的整数数组 nums 和 一个目标值 target。请你从 nums 中选出三个整数，使它们的和与 target 最接近。
返回这三个数的和。
若每组输入存在多个解，给出一个即可。
*/