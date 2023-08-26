#include <stdio.h>

void tipoTriangulo(double L[3]) {
    if(L[0] >= L[1] + L[2])
        puts("NAO FORMA TRIANGULO");
    else {
        if(L[0] * L[0] == L[1] * L[1] + L[2] * L[2])
            puts("TRIANGULO RETANGULO");
        if(L[0] * L[0] > L[1] * L[1] + L[2] * L[2])
            puts("TRIANGULO OBTUSANGULO");
        if(L[0] * L[0] < L[1] * L[1] + L[2] * L[2])
            puts("TRIANGULO ACUTANGULO");
        if(L[0] == L[1] && L[1] == L[2])
            puts("TRIANGULO EQUILATERO");
        if(L[0] == L[1] && L[0] != L[2] || L[0] == L[2] && L[0] != L[1] || L[1] == L[2] && L[1] != L[0])
            puts("TRIANGULO ISOSCELES");
    }
}

void colocarOrdemDecrescente(double x, double L[3]) {
    if(L[0] < L[1]) {
        x = L[1];
        L[1] = L[0];
        L[0] = x;
    }
    if(L[0] < L[2]) {
        x = L[2];
        L[2] = L[0];
        L[0] = x;
    }
    if(L[1] < L[2]) {
        x = L[2];
        L[2] = L[1];
        L[1] = x;
    }
}

int main() {
    double L[3], x;
    scanf("%lf %lf %lf", &L[0], &L[1], &L[2]);
    colocarOrdemDecrescente(x, L);
    tipoTriangulo(L);
    return 0;
}