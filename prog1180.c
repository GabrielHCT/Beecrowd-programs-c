#include <stdio.h>

void imprimir(int *ptr) {
    printf("Menor valor: %d\nPosicao: %d", *ptr, &ptr);
}

void menorValor(int *ptr, int N) {
    for(int i = 0; i < N; i++, ptr++) {
        scanf("%d", ptr);
    }
}

void lerValores(int *ptr, int N) {
    for(int i = 0; i < N; i++, ptr++) {
        scanf("%d", ptr);
    }
}

int main() {
    int N, X[1000], Y[0], *ptr = X, ptr2 = Y;
    scanf("%d", &N);
    lerValores(ptr, N);
    menorValor(ptr, N);
}