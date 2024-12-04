#include <stdio.h>

int main() {
    for (int i=0; i<4; i++){
        char c = getchar();
        if (c>='a' && c<='z'){
            c = c - 'a' + 'A';
        } else if (c>='A' && c<='Z'){
            c = c - 'A' + 'a';
        } else if (c>='0' && c<='9'){
            c = '*';
        } else c = '@';
        putchar(c);
    }
}