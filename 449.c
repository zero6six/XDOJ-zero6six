#include <stdio.h>

int main(){
    double t, a, b;
    scanf("%lf", &t);

    a = t*0.6;
    b = 50+t*0.4;

    printf("%.2lf\n%.2lf\n", a, b);
    printf(a<b ? "A\n" : "B\n");
    return 0;
}