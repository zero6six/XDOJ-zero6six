#include <stdio.h>
#include <string.h>

void BubbleSort(int *arr, int size){// 冒泡排序，输入 arr 指针变量（数组就是个指针变量，或者用&表示对象的指针）和 size 数组长度
    int i, j, tmp;
    for (i=0;i<size-1;i++){         // 每次循环 i+1，用作计数器，使下次 j 的循环次数 -1，因为最大的数已经排好了
        for (j=0;j<size-i-1;j++){   // 逐位排序，
            if (arr[j]>arr[j+1]){   // 如果选取的数比其后面的数大
                tmp = arr[j];       // 暂存选取的数
                arr[j] = arr[j+1];  // 选取的数填入后面数的值
                arr[j+1] = tmp;     // 后面的数用选取的数的值替换
            }
        }
    }
}

int main(){
    char input[10];
    scanf("%s", input);

    int length = strlen(input);
    int digits[10];

    for (int i = 0; i<length; i++){
        digits[i] = input[i] - '0'; // 不能用 (int)input[i]，否则是字符对应的 ASCII 码。
    }

    BubbleSort(digits, length);

    for (int i = 0; i<length; i++){
        printf("%d ", digits[i]);
    }
}