#include <stdio.h>

void maiorValor(int X, int Y, int *ptr) {
    if(X < Y) {
        ptr = Y;
        Y = X;
    }
}

int main() {
    int N, X, Y, soma = 0, *ptr = &X;
    scanf("%d", &N);
    for(int i = 0; i < N; i++, soma = 0) {
        scanf("%d %d", &X, &Y);
        maiorValor(X, Y, ptr);
        for(int i2 = X; i2 < Y; i2++)
            if(i2 % 2 != 0)
                soma += i2;
        printf("%d\n", soma);
    }
    return 0;
}