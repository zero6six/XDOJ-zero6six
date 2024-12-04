#include <stdio.h>
#include <math.h>

int main() {
    int n;
    double x[100];
    double total=0;

    scanf("%d", &n);
    for (int i=0; i<n; i++){
        scanf("%lf", &x[i]);
        total += x[i];
    }
    double average = total*1.0 / n;

    double s=0;
    for (int i=0; i<n; i++){
        s+=x[i]*x[i];
    }
    s = sqrt((s-n*average*average)/(n-1));

    int count=0;
    for (int i=0; i<n; i++){
        if (x[i]<average-3*s) count++;
        if (x[i]>average+3*s) count++;
    }

    printf("%.4lf %d", s, count);
}