#include <stdio.h>

// 致敬传奇 GB 2312 编码，用 utf-8 保存提交会报错
int main() {
    int a;
    scanf("%d", &a);
    printf(a % 2 ? "奇数" : "偶数"); 
}