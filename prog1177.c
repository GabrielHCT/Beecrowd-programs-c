#include <stdio.h>

int main() {
    int T, N[1000];
    scanf("%d", &T);
    for(int i = 0, i2 = 0; i < 1000; i++, i2++) {
        if(i2 < T)
            N[i] = i2;
        else {
            i2 = 0;
            N[i] = i2;
        }
        printf("N[%d] = %d\n", i, N[i]);
    }
    return 0;
}