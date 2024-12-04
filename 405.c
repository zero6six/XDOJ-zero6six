#include<stdio.h>

int main(){
    int m, n;
    scanf("%d%d", &m, &n);
    float a, b, c;
    a = (float)n;
    
    if (m==1){
        if (n>=500){
            b = n*8.0/10;
        }
        else if (n>=350){
            b = n*8.5/10;
        }
        else if (n>=200){
            b = n*9.0/10;
        }
        else{
            b=(float)n;
        }
        c = n-b;
        printf("yes %.1f %.1f %.1f", a, b, c);
    }
    else{
        if (n>=500){
            b = n*9.0/10;
        }
        else if (n>=350){
            b = n*9.5/10;
        }
        else{
            b = (float)n;
        }
        c = n-b;
        printf("no %.1f %.1f %.1f", a, b, c);
    }
}