#include <stdio.h>

void iniciarAtributosMarcos(int M, int N, int VM[M][N]) {
    for(int i = 0; i <= M-1; i++) 
        for(int i2 = 0; i2 <= N-1; i2++)
            scanf("%d", VM[i][i2]);
}

void iniciarAtributosLeonardo(int L, int N, int VL[L][N]) {
    for(int i = 0; i <= L-1; i++) 
        for(int i2 = 0; i2 <= N-1; i2++)
            scanf("%d", VL[i][i2]);
}

void verificacaoDasCartasEscolhidas(int M, int L, int N, int VM[M][N], int VL[L][N], int As) {
    int Cm, Cl;
    scanf("%d %d", &Cm, &Cl);
    if(VL[Cl][As] > VM[Cm][As])
        printf("Leonardo\n");
    else if(VL[Cl][As] < VM[Cm][As])
        printf("Marcos\n");
    else
        printf("Empate\n");
}

void atributoSorteado(int M, int L, int N, int VL[L][N], int VM[M][N]) {
    int As;
    scanf("%d", &As);
    verificacaoDasCartasEscolhidas(M, L, N, VM, VL, As);
}

int main() {
    int N, M, L, VM[M][N], VL[L][N];
    scanf("%d %d %d", &N, &M, &L);
    iniciarAtributosMarcos(M, N, VM);
    iniciarAtributosLeonardo(L, N, VL);
    atributoSorteado(M, L, N, VL, VM);
    return 0;
}