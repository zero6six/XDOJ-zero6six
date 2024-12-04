#include <stdio.h>
#include <math.h>

// use GB2312 encoding
void sort(int a[], int n){
    for (int i=0; i<n-1; i++){
        for (int j=0; j<n-1-i; j++){
            if (a[j]>a[j+1]){
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
    if (a[0]*a[0]+a[1]*a[1]==a[2]*a[2]){
        printf("%d", a[0]*a[1]/2); // /2.0 不考虑，题目不讲清楚，有毛病
    } else if (a[0]+a[1]>a[2]){
        printf("其他三角形");
    } else {
        printf("不是三角形");
    }
}