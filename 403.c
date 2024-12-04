#include <stdio.h>

int main() {
    int a, b;
    char symbol;
    scanf("%d %d %c", &a, &b, &symbol);
    switch (symbol){
        case '+':
            printf("%d%c%d=%d", a, symbol, b, a+b);
            break;
        case '-':
            printf("%d%c%d=%d", a, symbol, b, a-b);
            break;
        case '*':
            printf("%d%c%d=%d", a, symbol, b, a*b);
            break;
        case '/':
            printf("%d%c%d=%d", a, symbol, b, a/b);
            break;
        case '%':
            printf("%d%c%d=%d", a, symbol, b, a%b);
            break;
    }
}