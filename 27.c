#include <stdio.h>

int main() {
    float num;
    scanf("%f", &num);
    float a = num <= 110 ? num*0.5 : 55;
    float b;
    if (num<=110){
        b=0;
    } else if (num>=210){
        b=55;
    } else b = (num-110)*0.55;
    float c = num <= 210 ? 0 : (num-210)*0.7;
    printf("%.2f\n", a+b+c);
}