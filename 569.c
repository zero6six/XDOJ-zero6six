#include <stdio.h>

int main() {
    char str[3];
    str[0]=getchar();
    if (str[0] == '-') str[0]=getchar();
    str[1]=getchar();
    str[2]=getchar();

    for (int i=0; i<3; i++){
        printf("%c", str[i]);
        i == 2 ? printf("\n") : printf(" ");
    }
    for (int i=2; i>=0; i--){
        printf("%c", str[i]);
        i == 0 ? printf("\n") : printf(" ");
    }
}