#include <stdio.h>

int main(){
    unsigned int n;
    scanf("%u", &n);
    int big=n%10, small=n%10;
    n/=10;
    while (n!=0){
        int last = n%10;
        if (last>big) big=last;
        if (last<small) small=last;
        n/=10;
    }
    printf("%d %d", big, small);
}


/* pointer version, unnecessary
int main() {
    unsigned int n;
    scanf("%u", &n);
    char a[11];
    sprintf(a, "%u", n);
    char big=a[0], small=a[0];
    for (char *c=&a[1]; *c!='\0'; c++){
        if (*c>big) big=*c;
        if (*c<small) small=*c; 
    }
    printf("%c %c", big, small);
}
*/