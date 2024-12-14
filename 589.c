#include <stdio.h>

int main() {
    int n;
    int a=0, b=0, c=0;
    int in;
    scanf("%d", &n);
    for (int i=0; i<n; i++){
        scanf("%d", &in);
        if (in<0) a+=1;
        else if (in>0) b+=1;
        else c+=1;
    }
    printf("%d %d %d", a, b, c);
}