#include <stdio.h>

void bubble_sort(int arr[], int len) {
// arr 传递的是指针，因此是把变量的引用传进去了
    for (int i = 0; i < len - 1; i++) {         
    // 一次内层循环最差排好一个，因此每循环一次少遍历一个元素，i 比最后一个的索引小 1
        for (int j = 0; j < len - 1 - i; j++) { // 第一轮循环 j 的最大值为倒数第二个元素的索引  
            // 交换元素位置（大的往后）
            // 因此最大的会一路排到最后
            // arr[j] < arr[j + 1] 这样改就会把小的往后排
            // 最小的丢最后了，因此同样一次排好一个
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];              // 存大的
                arr[j] = arr[j + 1];            // 前面存小的
                arr[j + 1] = temp;              // 后面存大的
            }
        }
    }
}

int main(){
    int a[4];

    for (int i = 0; i < 4; i++) {
        scanf("%d", &a[i]);
    }
    bubble_sort(a, 4);
    for (int i = 0; i < 4; i++) {
        printf("%d ", a[i]);
    }
}