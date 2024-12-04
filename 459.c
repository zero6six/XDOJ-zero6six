#include <stdio.h>
#include <string.h>

int main() {
    char a[101];
    char len;
    scanf("%100s", &a);
    // gets(a);
    len = strlen(a);
    // 如果 a 长度为 5，只需下标 0 1 和 4 3 一样就行
    // 如果 a 长度为 6，只需下标 0 1 2 和 5 4 3 一样就行
    // C 语言整数除法向 0 取整，因此两者情况是一样的。
    for (int i=0; i<len/2; i++){
        if (a[i] != a[len-1-i]){
            printf("No\n");
            return 1;
        }
    }
    printf("Yes\n");
    return 0;
}