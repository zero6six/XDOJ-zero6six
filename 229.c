#include <stdio.h>

int main(){
char a[10];
scanf("%[^\n]", a);
printf("%s", a);

getchar();

scanf("%[^\n]", a);
printf("%s", a);
}
