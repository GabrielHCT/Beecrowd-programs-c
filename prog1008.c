#include <stdio.h>

int main()
{
    int NUMBER_F, HORAS_T;
    double VALOR_H, SALARIO;

    scanf("%d %d %lf", &NUMBER_F, &HORAS_T, &VALOR_H);

    SALARIO = HORAS_T * VALOR_H;

    printf("NUMBER = %d\nSALARY = U$ %.2lf\n", NUMBER_F, SALARIO);
    
    return 0;
}
