#include <stdio.h>

void imprimir(int precisa[]) {
    if(precisa[0] == 1)
        printf("N\n");
    else if(precisa[0] == 0)
        printf("S\n");
}

void verificarDebentures(int D, int C, int V, int banco[], int precisa[]) {
    if(banco[D] >= V) {
        precisa[0] = 0;
        banco[C] += V;
        banco[D] -= V;
    }
    else {
        precisa[0] = 1;
        if(banco[D] >= 0)
            banco[C] += banco[D];
        banco[D] -= V;
    }       
}

void lerValores(int N, int D, int C, int V, int banco[], int precisa[]) {
    for(int i = 0; i < N; i++) {
        scanf("%d %d %d", &D, &C, &V);
        verificarDebentures(D, C, V, banco, precisa);
    }
}

void lerReservasMonetarias(int B, int banco[]) {
    for(int i = 1; i < B+1; i++) {
        scanf("%d", &banco[i]);
    }
}

void iniciar() {
    int B, N;
    scanf("%d %d", &B, &N);
    while (B != 0 && N != 0) {
        int banco[19], D, C, V, precisa[0];
        lerReservasMonetarias(B, banco);
        lerValores(N, D, C, V, banco, precisa);
        imprimir(precisa);
        scanf("%d %d", &B, &N);
    }
}

int main() {
    iniciar();
    return 0;
}