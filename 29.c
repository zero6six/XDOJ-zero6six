#include <stdio.h>
#include <string.h>

int main(){
    // char input[11];
    // scanf("%s", input);

    // int length = strlen(input);
    // int digits[10];
    // int sum = 0;               // 因为后面用了 +=，因此此处必须定义初始值。

    // for (int i = 0; i<length; i++){
    //     sum += input[i] - '0'; // 不能用 (int)input[i]，否则是字符对应的 ASCII 码。
    // }

    // printf("%d", sum);
    int a;
    scanf("%d", &a);
    int sum = 0;
    while (a != 0){
        sum += a % 10;
        a /= 10;
    }
    printf("%d", sum);
}