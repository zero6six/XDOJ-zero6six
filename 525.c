#include <stdio.h>


int main() {
    int a[100000];
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    int max = a[0];
    for (int i = 0; i < n; i++){
        int sum=0;
        for (int j = i; j < n; j++){
            sum += a[j];
            if (sum > max) {
                max = sum;
            }
        }
    }
    printf("%d\n", max);
}

/*
算法题，原题如下：
对于一个给定的长度为N的整数序列A，它的“子序列”的定义是：A中非空的一段连续的元素（整数）。
你要完成的任务是，在所有可能的子序列中，找到一个子序列，该子序列中所有元素的和是最大的（跟其他所有子序列相比）。
程序要求你输出这个最大值。
*/