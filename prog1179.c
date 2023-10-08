#include <stdio.h>

void imprimir(int vetor[5]) {
    if(vetor[0] % 2 == 0)
        for(int a = 0; a < 5; a++)
            printf("par[%d] = %d\n", a, vetor[a]);
    else
        for(int a = 0; a < 5; a++)
            printf("impar[%d] = %d\n", a, vetor[a]);
}

int main() {
    int V[15], P[5], I[5], p = 0, i = 0;
    for(int a = 0; a < 15; a++)
        scanf("%d", &V[a]);
    for(int a = 0; a < 15; a++) {
        if(i == 5) {
            i = 0;
            imprimir(I);
        }
        if(p == 5) {
            p = 0;
            imprimir(P);
        }
        if(V[a] % 2 == 0) {
            P[p] = V[a];
            p++;
        }
        else {
            I[i] = V[a];
            i++;
        }
    }
    for(int a = 0; a < i; a++)
        printf("impar[%d] = %d\n", a, I[a]);
    for(int a = 0; a < p; a++)
        printf("par[%d] = %d\n", a, P[a]);
    return 0;
}