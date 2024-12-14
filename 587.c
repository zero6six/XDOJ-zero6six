#include <stdio.h>

int main() {
    double accuracy;
    scanf("%lf", &accuracy);
    double a = 1.0;
    double pi=a;
    for (int i=2; a>=accuracy; i++){
        a = 1.0/(2*i-1);
        if (i%2==0) pi-=a;
        else pi+=a;
    }
    pi *=4;
    printf("%.6lf %.8lf", pi, a);
}