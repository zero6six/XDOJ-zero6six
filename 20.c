#include <stdio.h>

int main() {
    int a, b;
    char op;
    
    // Read input
    scanf("%d%c%d", &a, &op, &b);
    
    // Perform calculation based on the operator
    switch (op) {
        case '+':
            printf("%d%c%d=%d\n", a, op, b, a + b);
            break;
        case '-':
            printf("%d%c%d=%d\n", a, op, b, a - b);
            break;
        case '*':
            printf("%d%c%d=%d\n", a, op, b, a * b);
            break;
        case '/':
            if (b != 0) {
                printf("%d%c%d=%d\n", a, op, b, a / b);
            } else {
                printf("Error: Division by zero\n");
            }
            break;
        case '%':
            if (b != 0) {
                printf("%d%c%d=%d\n", a, op, b, a % b);
            } else {
                printf("Error: Division by zero\n");
            }
            break;
        default:
            printf("Error: Invalid operator\n");
            break;
    }
    
    return 0;
}