#include <stdio.h>

int main() {
    int n, maxTry;
    scanf("%d %d", &n, &maxTry);
    for (int i=1; i<=maxTry;i++){
        int a;
        scanf("%d", &a);
        if (a<0) {
            printf("Game Over\n");
            return 0;
        } else if (a>n) printf("Too big\n");
        else if (a<n) printf("Too small\n");
        else {
            if (i==1) printf("Bingo!\n");
            else if (i<=3) printf("Lucky You!\n");
            else printf("Good Guess!\n");
            return 0;
        }
    }
    printf("Game Over\n");
    return 0;
}