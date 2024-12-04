#include <stdio.h>

int main() {
    int score=0;
    int bonus=0;
    int act;
    while(1){
        scanf("%d",&act);
        switch (act){
        case 1:
            score += 1;
            bonus = 0;
            break;
        case 2:
            bonus += 2;
            score += bonus;
            break;
        case 0:
            printf("%d",score);
            return 0;
        }
    }
}