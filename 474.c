#include <stdio.h>

int cost(int n, int a1, int a2){
    if (n%a1!=0) return (n/a1+1)*a2;
    else return n/a1*a2;
}

void sort(int a[], int n){
    for (int i=0; i<n-1; i++){
        for (int j=0; j<n-1-i; j++){
            if (a[j]>a[j+1]){
                int temp = a[j+1];
                a[j+1] = a[j];
                a[j] = temp;
            }
        }
    }
}

int main() {
    int n;
    int a1, a2, b1, b2, c1, c2;
    scanf("%d%d%d%d%d%d%d", &n, &a1, &a2, &b1, &b2, &c1, &c2);
    int m[3]={cost(n,a1,a2), cost(n,b1,b2), cost(n, c1,c2)};
    sort(m, 3);
    printf("%d", m[0]);
}