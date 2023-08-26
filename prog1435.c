#include <stdio.h>

void imprimirMatriz(int N, int M[N][N]) {
    for(int i = 0; i < N; i++) {
        for(int a = 0; a < N; a++) {
            printf("%d ", M[i][a]);
        }
        printf("\n");
    }
}

void determinarValoresMatriz(int N, int M[N][N]) {
    for(int i = 0; i < N; i++)
        for(int a = 0; a < N; a++)
            M[i][a] = 1;
}

void iniciar() {
    int N;
    scanf("%d", &N);
    while(N != 0) {
        int M[N][N];
        determinarValoresMatriz(N, M);
        imprimirMatriz(N, M);
        printf("\n");
        scanf("%d", &N);
    }
}

int main() {
    iniciar();
}