#include <stdio.h>

int main() {
    char a;
    int bigCount=0, smallCount=0, numCount=0;
    while((a=getchar())!='!'){
    // 比较运算符的优先级高于赋值运算符，此处不括号会错误
        if (a>='A' && a<='Z') bigCount++;
        else if (a>='a' && a<='z') smallCount++;
        else if (a>='0' && a<='9') numCount++;
    }
    printf("%d %d %d", bigCount, smallCount, numCount);
}