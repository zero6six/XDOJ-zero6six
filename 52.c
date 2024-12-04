#include <stdio.h>

int main() {
    char c = getchar();
    if (c >= 'a' && c <= 'z') {
        c = c - 'a' + 'A';
    } else if (c >= 'A' && c <= 'Z') {
        c = c - 'A' + 'a';
    }
    printf("%c\n", c);
}