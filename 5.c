#include <stdio.h>

#define MAX 30

void eliminate(int n, int m, int board[MAX][MAX]) {
    int to_eliminate[MAX][MAX] = {0};

    // Check rows for elimination
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m - 2; j++) {
            // 示例：2 2 2 2 4
            if (board[i][j] == board[i][j + 1] && board[i][j] == board[i][j + 2]) {
                // 检测前三个，此时 j=0
                to_eliminate[i][j] = to_eliminate[i][j + 1] = to_eliminate[i][j + 2] = 1;
                // 标记需要消除的元素
                int k = j + 3;
                // 从第四个（k=3）开始检测，直到不等于 board[i][j] 的元素
                while (k < m && board[i][k] == board[i][j]) {
                    to_eliminate[i][k] = 1;
                    k++;
                    // k 一直往前检测，最多不到 m
                }
                j = k - 1;
                // 在示例中最终 k=4，j=3，进入下次循环有 j++，所以 j=4，从第五个开始检测
            }
        }
    }

    // Check columns for elimination
    for (int j = 0; j < m; j++) {
        for (int i = 0; i < n - 2; i++) {
            if (board[i][j] == board[i + 1][j] && board[i][j] == board[i + 2][j]) {
                to_eliminate[i][j] = to_eliminate[i + 1][j] = to_eliminate[i + 2][j] = 1;
                int k = i + 3;
                while (k < n && board[k][j] == board[i][j]) {
                    to_eliminate[k][j] = 1;
                    k++;
                }
                i = k - 1;
            }
        }
    }

    // Print the resulting board
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (to_eliminate[i][j]) {
                printf("0 ");
            } else {
                printf("%d ", board[i][j]);
            }
        }
        printf("\n");
    }
}

int main() {
    int n, m;
    int board[MAX][MAX];

    // Read input
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &board[i][j]);
        }
    }

    // Perform elimination
    eliminate(n, m, board);

    return 0;
}