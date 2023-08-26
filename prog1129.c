#include <stdio.h>

int determinarNumeroPretas(int i, int A[][5]) {
    int num_pretas = 0;
    for(int a = 0; a < 5; a++)
        if(A[i][a] == 0)
            num_pretas++;
    return num_pretas;
}

void printarAlternativa(int i, int N, int A[][5], char L[]) {
    int num_pretas = determinarNumeroPretas(i, A);
    if(num_pretas == 1) {
        for(int a = 0; a < 5; a++) {
            if(A[i][a] == 0)
                printf("%c\n", L[a]);
        }
    }
    else
        printf("*\n");
}

void determinarValorDasAlternativas(int N, int A[][5], char L[]) {
    for (int i = 0; i < N; i++) {
        for (int a = 0; a < 5; a++) {
            scanf("%d", &A[i][a]);
            if (A[i][a] <= 127)
                A[i][a] = 0;
            else
                A[i][a] = 255;
        }
        printarAlternativa(i, N, A, L);
    }
}

void iniciarQuestoes() {
    int N;
    scanf("%d", &N);
    while (N != 0) {
        int A[N][5];
        char L[] = {'A', 'B', 'C', 'D', 'E'};
        determinarValorDasAlternativas(N, A, L);
        scanf("%d", &N);
    }
}

int main() {
    iniciarQuestoes();
    return 0;
}