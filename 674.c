#include <stdio.h>

int receiveSignal(int x, int y){
    int a = (x-4)*(x-4) + (y-4)*(y-4);
    int b = (x+4)*(x+4) + (y+4)*(y+4);
    return a < b ? 1 : 2;
}

int main() {
    int a;
    scanf("%d", &a);
    for (int i=0; i<a; i++){
        int x, y;
        scanf("%d%d", &x, &y);
        printf("%d ", receiveSignal(x, y));
    }
}