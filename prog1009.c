#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char nome[100];
    double salarioFixo, montanteVendas;
}tVendedor;

double fazerCalculo(tVendedor *v) {
    return v->salarioFixo + (v->montanteVendas * 0.15);
}

int main() {
    tVendedor vendedor;
    tVendedor *v = &vendedor;
    scanf("%s %lf %lf", v->nome, &v->salarioFixo, &v->montanteVendas);
    printf("TOTAL = R$ %.2f\n", fazerCalculo(v));
    return 0;
}