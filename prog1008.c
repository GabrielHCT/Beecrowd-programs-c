#include <stdio.h>

double calcularSalario(int horas, double valor) {
    return horas * valor;
}

int main() {

    int num, horas;
    double valor_horas, salario;

    scanf("%d %d %lf", &num, &horas, &valor_horas);

    salario = calcularSalario(horas, valor_horas);

    printf("NUMBER = %d\nSALARY = U$ %.2lf\n", num, salario);

    return 0;
}