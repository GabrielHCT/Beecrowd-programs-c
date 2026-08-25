#include <stdio.h>

double calcularValorFinal(double salario, double vendas) {
    return salario + vendas * 0.15;
}

int main() {
    double salario_fixo, vendas, valor_final;
    char nome[100];

    scanf("%s %lf %lf", &nome, &salario_fixo, &vendas);

    valor_final = calcularValorFinal(salario_fixo, vendas);

    printf("TOTAL = R$ %.2lf\n", valor_final);

    return 0;
}