#include <stdio.h>

int main()
{
    int n;
    double sum = 0;
    int a = 1, b = 1, c=1;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        double tmp = c * a * 1.0 / b;
        sum += tmp;

        a += 1;
        b += 2;
        c = -c;
    }
    printf("%.3lf", sum);
}