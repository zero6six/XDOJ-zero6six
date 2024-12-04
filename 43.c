// 数学运算方法
// #include <stdio.h>
// 
// int main() {
//     int n;
//     int max, min, digits=0;
//     scanf("%d", &n);
//     { // 第一次循环先把最后一位存上再说
//         int last = n%10;
//         digits++;
//         max = last;
//         min = last;
//         n /= 10;
//     }
//     while (n!=0){
//         int last = n%10;
//         digits++;
//         max = last > max ? last : max;
//         min = last < min ? last : min;
//         n /= 10;
//     }
//     printf("%d %d %d", digits, max, min);
// }

// 字符串方法
// #include <stdio.h>

// int main() {
//     char nums[13];
//     scanf("%s", nums);
//     int num = nums[0]-'0';
//     int max = num;
//     int min = num;
//     int digits=0;
//     for (int i=0; nums[i]!='\0'; i++){
//         int num = nums[i]-'0';
//         max = num > max ? num : max;
//         min = num < min ? num : min;
//         digits++;
//     }
//     printf("%d %d %d", digits, max, min);
// }