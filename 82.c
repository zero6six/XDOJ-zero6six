#include <stdio.h>
#include <string.h>

int main() {
    char str[51]={0};
    scanf("%[^\n]", str);
    int len = strlen(str);
    int score=0;
    int charType[4]={0,0,0,0};

    if (!len){
        printf("0\n");
        return 0;
    } else score++;

    if (len > 8) score++;
    for (int i=0; i<len; i++){
        if ('a'<=str[i]&&str[i]<='z'){
            charType[0]=1;
            continue;
        } else if ('A'<=str[i]&&str[i]<='Z'){
            charType[1]=1;
            continue;
        } else if ('0'<=str[i]&&str[i]<='9'){
            charType[2]=1;
            continue;
        } else {
            charType[3]=1;
            continue;
        }
    }
    int charTypes;
    for (int i=0; i<4; i++){
        if (charType[i]) charTypes++;
    }
    switch (charTypes){
        case 1: break;
        case 2: score+=1; break;
        case 3: score+=2; break;
        case 4: score+=3; break;
    }
    printf("%d\n", score);
}