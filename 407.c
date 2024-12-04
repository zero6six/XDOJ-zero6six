#include <stdio.h>
#include <math.h>

void sort(int a[], int n){
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j <n-i-1; j++){
            if (a[j] > a[j+1]) {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}

int main() {
    int a[3];
    scanf("%d%d%d", &a[0], &a[1], &a[2]);
    sort(a, 3);
    if (a[0]*a[0]+a[1]*a[1]==a[2]*a[2]) {
        printf("yes 1 %d %.2lf", a[0]+a[1]+a[2], a[0]*a[1]/2.0);
        return 0;
    }
    if (a[0]+a[1]>a[2]) {
        int p = a[0]+a[1]+a[2];
        double s = sqrt(p/2.0*(p/2.0-a[0])*(p/2.0-a[1])*(p/2.0-a[2]));
        printf("yes 2 %d %.2lf", p, s);
        return 0;
    }
    else {
        printf("no 3");
        return 0;
    }
}