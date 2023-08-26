#include <stdio.h>

void imprimirNumeroDeParesCorretos(int nParesCorretos[]) {
    printf("%d", nParesCorretos[0]);
}

int verificarBotas(int N, int M[], char L[], int nParesCorretos[]) {
    nParesCorretos[0] = 0;
    for (int i = 0; i < N; i++)
        for(int a = 0; a < N; i++)
            if(M[i] == M[a] && L[i] != L[a] && i != a)
                nParesCorretos[0] += 1;
}

void lerBotas(int N, int M[], char L[]) {
    for (int i = 0; i < N; i++)
        scanf("%d %c", &M[i], &L[i]);      
}

void iniciar() {
    int N;
    scanf("%d", &N);
    while (N != EOF) {
        int M[0], nParesCorretos[0];
        char L[0];
        lerBotas(N, M, L);
        verificarBotas(N, M, L, nParesCorretos);
        imprimirNumeroDeParesCorretos(nParesCorretos);
        scanf("%d", &N);
    }
}

int main() {
    iniciar();
    return 0;
}