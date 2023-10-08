#include <stdio.h>
#include <string.h>

int verificarValidez(int A, int B, int C, char *stg) {
    if(B - C < A && A - C < B && A - B < C && B + C > A && A + C > B && A + B > C)
        return 0;
    strcpy(stg, "Invalido");
    return 1;
}

void determinarTipoTriangulo(int A, int B, int C, char *stg) {
    if(A == B && B == C)
        strcpy(stg, "Valido-Equilatero\n");
    else if(A == B || A == C || B == C)
        strcpy(stg, "Valido-Isoceles\n");
    else
        strcpy(stg, "Valido-Escaleno\n");
}

void determinarRetangulo(int A, int B, int C, char *stg) {
    if(A * A == B * B + C * C || B * B == A * A + C * C || C * C == A * A + B * B)
        strcat(stg, "Retangulo: S");
    else
        strcat(stg, "Retangulo: N");
}

int main() {
    int A, B, C;
    char stg[30];
    scanf("%d %d %d", &A, &B, &C);
    if(verificarValidez(A, B, C, stg))
        puts(stg);
    else {
        determinarTipoTriangulo(A, B, C, stg);
        determinarRetangulo(A, B, C, stg);
        puts(stg);
    }
    return 0;
}