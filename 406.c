#include <stdio.h>

int main() {
    char a = getchar();
    char b;

    // 应该把 a-z，A-Z 视为下标为 0-25 的来处理
    // 如果视为 1-26，则模不好处理
    if ('a' <= a && a <= 'z'){
        b = (a-'a'+3)%26+'a';
    }
    else if ('A' <= a && a <= 'Z'){
        // b = (a-'A'-2+26)%26+'A';
        b = (a-'A'+24)%26+'A';
    }
    else if ('0' <= a && a <= '9'){
        b = 9-(a-'0')+'0';  // 这里括号化简搞不好越界。
    }
    else if (a == ' '){
        b = '*';
    }
    else{
        b='#';
    }
    printf("%c %c", a, b);
}