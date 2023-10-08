#include <stdio.h>

void imprimir(int maiorV, int menorV) {
    for(int i = menorV+1; i < maiorV; i++)
        if(i % 5 == 2 || i % 5 == 3)
            printf("%d\n", i);
}

int main() {
    int X, Y;
    scanf("%d %d", &X, &Y);
    if(X > Y)
        imprimir(X, Y);
    else
        imprimir(Y, X);
    return 0;
}