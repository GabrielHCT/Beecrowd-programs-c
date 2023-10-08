#include <stdio.h>

int calcularSoma(int maiorV, int menorV) {
    int soma = 0;
    for(int i = menorV; i <= maiorV; i++)
        if(i % 13 != 0)    
            soma+=i;
    return soma;
}

int main() {
    int X, Y;
    scanf("%d %d", &X, &Y);
    if(X > Y)
        printf("%d\n", calcularSoma(X, Y));
    else
        printf("%d\n", calcularSoma(Y, X));
    return 0;
}