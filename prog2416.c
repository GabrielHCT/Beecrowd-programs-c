#include <stdio.h>

int main() 
{
    long int C, N, ponto_termino;
    scanf("%ld %ld", &C, &N);

    C = C * (C>=0) * (C <= (10*10*10*10*10*10*10*10));
    N = N * (N >= 1) * (N <= 100);

    ponto_termino = C % N;
    printf("%ld\n", ponto_termino);

    return 0;
}