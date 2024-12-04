#include <stdio.h>
#include <math.h>

void foldArr(int a[], int *len){
    // len = 4, a[0]+a[3], a[1]+a[2]
    // i=0~1
    for (int i = 0; i < *len/2; i++){
        a[i] = a[i] + a[*len-i-1];
        // a[*len-i-1] = 0;
    }
    *len /= 2;
}

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    int len = (int) pow((double) 2, (double) n);
    int arr[64];
    for (int i=0; i<len; i++){
        scanf("%d", &arr[i]);
    }
    for (int i=0; i<m; i++){
        foldArr(arr, &len);
    }
    for (int i=0; i<len; i++){
        printf("%d ", arr[i]);
    }
}