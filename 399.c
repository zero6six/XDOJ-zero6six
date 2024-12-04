#include <stdio.h>

// use GB2312 encoding
int main() {
    char a = getchar();
    if (a>='a' && a<='z'){
        putchar(a-'a'+'A');
    } else if (a>='A' && a<= 'Z'){
        putchar(a-'A'+'a');
    } else if (a>='0' && a<= '9'){
        printf("%c是数字", a);
    } else printf("%c是其他字符", a);
}