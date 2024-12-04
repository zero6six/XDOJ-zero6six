#include<stdio.h>
int main(){
    char a[10], b=0;
    gets(a);
    for (int i=0; a[i]!='\0'; i++){
        a[i]=='a' || a[i]=='A' ? b++ : 0;
    }
    printf("%d", b);
    return 0;
}