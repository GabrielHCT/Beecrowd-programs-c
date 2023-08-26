#include <stdio.h>

void acharCoordenadaXY(int i, int a, int N, int M, int T[N][M], int X[0], int Y[0]) {
    if(T[i][a] == 42 && T[i][a-1] == 7 && T[i][a+1] == 7 && T[i-1][a-1] == 7 && T[i-1][a] == 7 && T[i-1][a+1] == 7 && T[i+1][a-1] == 7 && T[i+1][a] == 7 && T[i+1][a+1] == 7) {
        X[0] = i;
        Y[0] = a;
    }
}

int acharLocalizacao(int N, int M, int T[N][M], int X[0], int Y[0]) {
    X[0] = 0;
    Y[0] = 0;
    for(int i = 1; i <= N; i++)
        for(int a = 1; a <= M; a++) {
            acharCoordenadaXY(i, a, N, M, T, X, Y);
            if(X[0] != 0 && Y[0] != 0)
                break;
        }
}

void lerValoresDoTerreno(int N, int M, int T[N][M]) {
    for(int i = 1; i <= N; i++)
        for(int a = 1; a <= M; a++)
            scanf("%d", &T[i][a]);
}

int main() {
    int N, M, T[10][10], X[0], Y[0]; 
    scanf("%d %d", &N, &M);
    lerValoresDoTerreno(N, M, T);
    acharLocalizacao(N, M, T, X, Y);
    printf("%d %d\n", X[0], Y[0]);
}