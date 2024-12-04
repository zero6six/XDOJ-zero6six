#include <stdio.h>

int main() {
    int n;
    double pi=0;
    scanf("%d", &n);
    for (int i=1; i<=n; i++){
        double a = 1.0/(2*i-1);
        if (i%2==0) a=-a;
        pi+=a;
    }
    pi *=4;
    printf("%.6lf", pi);
}