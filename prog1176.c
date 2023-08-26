#include <stdio.h>
#include <stdlib.h>

typedef struct {
    unsigned long long valor, posicao;
}Fib;

void imprimir(Fib *f, int i) {
    printf("Fib(%llu) = %llu\n", f[i].posicao, f[f[i].posicao].valor);
}

void carregarValores(Fib *f, int a) {
    f[0].valor = 0; 
    f[1].valor = 1;
    for(int i = 2; i <= f[a].posicao; i++)
        f[i].valor = f[i - 1].valor + f[i - 2].valor;
}

void carregarPosicoes(Fib *f, int T) {
    for(int a = 0; a < T; a++) {
        scanf("%llu", &f[a].posicao);
        carregarValores(f, a);
        imprimir(f, a);
    }
}

Fib *criarFib(int T) {
    Fib *f = (Fib*) calloc(T, sizeof(Fib));
    return f;
}

int main() {
    int T;
    scanf("%d", &T);
    Fib *f = criarFib(T);
    carregarPosicoes(f, T);
    free(f);
    return 0;
}