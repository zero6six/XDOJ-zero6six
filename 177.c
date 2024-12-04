#include <stdio.h>

int main(){
    char a[233];
    int hash=0;
    scanf("%[^\n]", a);
    // "%[^\n]"的意思是：读取输入直到遇到换行符（\n）为止的所有字符，并将这些字符存储在指定的字符数组中。
    // 需要注意的是，换行符本身不会被读取或存储到数组中。
    // 这样做就可以防止遇到空格、制表符之类的字符就跳过了。
    for(int i=0; a[i] != '\0'; i++){
        hash += a[i];
    }
    int temp = hash & 255;
    printf("%d", temp);
    return 0;
}