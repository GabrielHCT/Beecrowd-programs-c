#include <stdio.h>

int calculoSoma(int maiorV, int menorV) {
    int soma = 0;
    for(int i = menorV+1; i < maiorV; i++)
        if(i % 2 != 0)
            soma+=i;
    return soma;
}

int main() {
    int N, X, Y;
    scanf("%d", &N);
    for(int i = 0; i < N; i++) {
        scanf("%d %d", &X, &Y);
        if(X > Y)
            printf("%d\n", calculoSoma(X, Y));
        else
            printf("%d\n", calculoSoma(Y, X));
    }
    return 0;
}