#include <stdio.h>

int main() {
    int n;
    int a=1;
    scanf("%d", &n);
    for (int i=2; i<=n; i++){
        a*=i;
    }
    printf("%d\n", a);
    return 0;

    // 🤓☝️我有一个主意
    int n;
    scanf("%d", &n);
    switch (n){
        case 2:
            printf("2\n");
            return 0;
        case 3:
            printf("6\n");
            return 0;
        case 4:
            printf("24\n");
            return 0;
        case 5:
            printf("120\n");
            return 0;
        case 6:
            printf("720\n");
            return 0;
        case 7:
            printf("5040\n");
            return 0;
        case 8:
            printf("40320\n");
            return 0;
        case 9:
            printf("362880\n");
            return 0;
        case 10:
            printf("3628800\n");
            return 0;
        case 11:
            printf("39916800\n");
            return 0;
        case 12:
            printf("479001600\n");
            return 0;
        default:
            printf("1\n");
            return 0;
    }
}