#include <stdio.h>

int main() {
    int m;
    // 1**3=1           // 1-0
    // 2**3=3+5         // 4-1
    // 3**3=7+9+11      // 9-2
    // 4**3=13+15+17+19 // 16-3
    scanf("%d", &m);
    int base = m*m-m+1;
    for (int i=0; i<m; i++){
        printf("%d ", base+2*i);
    }
}