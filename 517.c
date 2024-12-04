#include <stdio.h>

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
    int n;
    int arr[1000];
    scanf("%d", &n);
    for (int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    sort(arr, n);
    printf("%d", arr[0]);
    for (int i=1; i<n; i++){
        if (arr[i]!=arr[i-1]){
            printf(" %d", arr[i]);
        }
    }
}