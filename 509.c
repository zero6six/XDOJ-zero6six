#include <stdio.h>

int main() {
    int n;
    char a;
    int count1=0, count2=0;
    scanf("%d\n", &n);
    while((a=getchar())!='!'){
        if ((a>='A' && a<='Z') || (a>='a' && a <='z')){
            if (a%n%2) count1++;
            else count2++;
        }
    }
    printf("%d %d", count1, count2);
}