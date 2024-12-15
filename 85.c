#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

void to_lower(char* a){
    for (;*a!='\0'; a++){
        *a = tolower(*a);
    }
}

int main() {
    char a[100], b[100];
    fgets(a, sizeof(a), stdin);
    fgets(b, sizeof(b), stdin);

    // Remove newline character if present
    a[strcspn(a, "\n")] = '\0';
    b[strcspn(b, "\n")] = '\0';

    to_lower(a);
    to_lower(b);
     
    int count=0;
    int biggest=0;
    int lenA=strlen(a), lenB=strlen(b);
    int len = lenA<lenB ? lenA : lenB;

    // 暴力方法，待改进
    for (int i=0; i<lenA; i++){
        for (int j=0; j<lenB; j++){
            for (int k=0; k<len; k++){
                if ((a[i+k]!=b[j+k]) || (a[i+k]=='\0' || b[i+k]=='\0')){
                    biggest = count > biggest ? count : biggest;
                    count=0;
                    break;
                } else {
                    count++;
                }
            }
        }
    }

    double like = 2.0*biggest/(lenA+lenB);
    printf("%.3lf", like);
}