#include <stdio.h>

int isPrime(int n){
    if (n<2) return 0;
    if (n==2) return 1;
    if (n%2==0) return 0;
    for (int i=3; i*i<=n; i+=2){
        if (n%i==0) return 0;
    } return 1;
}

int main() {
    char in[100];
    int n;
    scanf("%[^\n]", in);
    int j=0;
    for (int i=0; in[i]!='\0'; i++){
        if (in[i]>='0' && in[i]<='9'){
            in[j]=in[i];
            j++;
        }
    }
    in[j]='\0';

    if(j==0){
        printf("0");
        return 0;
    }

    sscanf(in, "%d", &n);
    int out;

    if (isPrime(n)) {
        printf("%d", n);
        return 0;
    }
    
    // 对于合数，求其最小质因子即可

    if (n%2==0){
        int tmp = n/2;
        out = tmp > 2 ? tmp : 2;
    } else {
        for (int i=3; i*i<=n; i+=2){
            if (isPrime(i)){
                int tmp = n/i;
                out = tmp > i ? tmp : i;
                break;
            }
        }
    }
    printf("%d", out);
}