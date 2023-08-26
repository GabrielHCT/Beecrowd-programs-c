#include <stdio.h>

int main() {
    int X, i = 1;
    scanf("%d", &X);
    while(i <= 6) {
        if(X % 2 == 1) {
            printf("%d\n", X);
            i++;
        }
        X++;
    }
    return 0;
}