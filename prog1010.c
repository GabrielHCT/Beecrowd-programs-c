#include <stdio.h>

int main()
{
    int COD_P1, NUM_P1, COD_P2, NUM_P2;
    double VALOR_P1, VALOR_P2;

    scanf("%d %d %lf %d %d %lf", &COD_P1, &NUM_P1, &VALOR_P1, &COD_P2, &NUM_P2, &VALOR_P2);

    printf("VALOR A PAGAR: R$ %.2f\n", (NUM_P1*VALOR_P1) + (NUM_P2*VALOR_P2));

    return 0;
}
