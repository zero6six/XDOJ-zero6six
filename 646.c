#include <stdio.h>
#include <string.h>
#include <ctype.h>

// 本题所谓的“最大字符”就是挨个比较字符串中字符对应的 ASCII 码哪个大
// 最初我还写成了忽略大小写的字典序，题目不讲清楚全责
int compareDictSort(char a[], char b[]){
    // 若 a < b 返回 -1，a = b 返回 0，a > b 返回 1
    int i = 0;
    while (a[i] != '\0' && b[i] != '\0'){
        if (a[i] < b[i]) return -1;
        else if (a[i] > b[i]) return 1;
        i++;
    }
    if (a[i] == '\0' && b[i] == '\0') return 0;
    if (a[i] == '\0') return -1;
    return 1;
}

int main() {
    char s[100];
    int wordLen;
    scanf("%[^\n]", s);

    char *token = strtok(s, " ");
    int len=0;
    char wordLongest[8]="";
    char wordBiggest[8]="";

    while (token != NULL){
        len++;
        if (strlen(token) > strlen(wordLongest)){
            strcpy(wordLongest, token);
        }
        if (compareDictSort(token, wordBiggest) == 1){
            strcpy(wordBiggest, token);
        }

        token = strtok(NULL, " ");
    }

    printf("%d %s %s", len, wordBiggest, wordLongest);
}