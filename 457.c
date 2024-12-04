#include <stdio.h>

int main() {
    // int a, b[100];
    // scanf("%d", &a);

    // // 样例输入
    // // 2
    // // 1 2 3 4

    // // 只需先存 b[a], b[a+1],..., b[2a-1]
    // // 然后再存 b[0], b[1],..., b[a-1]
    // for (int i=a; i<2*a; i++){
    //     scanf("%d", &b[i]);
    // }
    // for (int i=0; i<a; i++){
    //     scanf("%d", &b[i]);
    // }
    // for (int i=0; i<2*a; i++){
    //     printf("%d ", b[i]);
    // }
    // return 0;


    // 甚至可以存一半直接输出一半
    int a, b[50];
    int c;
    scanf("%d", &a);
    for (int i=0; i<a; i++){
        scanf("%d", &b[i]);
    }
    for (int i=0; i<a; i++){
        scanf("%d", &c);
        printf("%d ", c);
    }
    for (int i=0; i<a; i++){
        printf("%d ", b[i]);
    }
    return 0;
}