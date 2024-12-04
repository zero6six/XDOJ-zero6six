#include <stdio.h>

int has7 (int n){
    while (n > 0){
        if (n % 10 == 7){
            return 1;
        }
        n /= 10;
    }
    return 0;
}

int main() {
    int n;
    scanf("%d", &n);
    int count = 0;
    int passCount1 = 0;
    int passCount2 = 0;
    int passCount3 = 0;
    
    // 在本题中，“跳过”指那个人不报数，下一个报数。
    // n=17 时，即在 7、14、17 跳过
    // 7%3=1, 14%3=2, 17%3=2;

    for (int i=1; count<n; i++){
        if (i % 7 == 0 || has7(i)){
            int num = i % 3;
            if (num == 1){
                passCount1++;
            } else if (num == 2){
                passCount2++;
            } else {
                passCount3++;
            }
        } else count++;
    }
    printf("%d %d %d", passCount1, passCount2, passCount3);
}