#include <stdio.h>
#include <math.h>

int main() {
    int a, b;
    scanf("%d%d", &a, &b);

    float CL = a + sqrt((double)(b * a + 1));
    float tD = a*(CL+b)*(CL+b);
    float SP = tD*CL+b*b;

    printf("CL=%.2f tD=%.2f SP=%.2f", CL, tD, SP);
}