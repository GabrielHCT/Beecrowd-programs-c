#include <stdio.h>

double calcularValorPagar() {
    int cod, qtd;
    double valor_unit, valor_pagar = 0;

    for(int i = 0; i < 2; i++) {
        scanf("%d %d %lf", &cod, &qtd, &valor_unit);
        valor_pagar += qtd * valor_unit;
    }

    return valor_pagar;
}

int main() {
    double valor_pagar = calcularValorPagar();

    printf("VALOR A PAGAR: R$ %.2lf\n", valor_pagar);

    return 0;
}