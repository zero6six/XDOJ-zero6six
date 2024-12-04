#include <stdio.h>

void sort(int a[], int len){
    for (int i=0; i<len-1; i++){
        for (int j=i; j<len-1-i; j++){
            if (a[j]>a[j+1]){
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}

int main() {
    int arr[3];
    scanf("%d %d %d", &arr[0], &arr[1], &arr[2]);
    sort(arr, 3);
    if (arr[0]*arr[0]+arr[1]*arr[1]==arr[2]*arr[2]) printf("%d", arr[0] * arr[1]);
    else printf("no");
}