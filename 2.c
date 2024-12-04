#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int counter=1;
    int a, b;

    scanf("%d", &a);

    for (int i=1; i<n; i++){
        scanf("%d", &b);
        if (b!=a){
            counter++;
            a=b;
        }
    }
    printf("%d", counter);
}