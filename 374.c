#include <stdio.h>

int main() {
    int m, s;
    scanf("%d%d", &m, &s);
    double t = m + s/60.0;
    double c;
    if (t<=10){
        c=100-5*t;
    } else if (t<=30){
        c=50-(t-10);
    } else if (t<=50){
        c=30-(t-30)/2;
    } else{
        c=20;
    }
    printf("%.1lf", c);
}