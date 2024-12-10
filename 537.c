#include <stdio.h>
char* getScore(int s){
    if(s==100){
        return "Excellent";
    }else if(s>=80){
        return "Good";
    }else if(s>=60){
        return "Pass";
    }else if(s>0){
        return "Fail";
    }else{
        return "Terrible";
    }
}

int main() {
    int a,b,c,d,e;
    scanf("%d,%d,%d,%d,%d", &a, &b, &c, &d, &e);
    printf("%d %s\n", a, getScore(a));
    printf("%d %s\n", b, getScore(b));
    printf("%d %s\n", c, getScore(c));
    printf("%d %s\n", d, getScore(d));
    printf("%d %s\n", e, getScore(e));
}