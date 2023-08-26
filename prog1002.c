#include <stdio.h>

double raio_ao_quadrado ()
{
    double raio;
    scanf("%lf", &raio);
    return raio*raio;
}

main ()
{
    double area = raio_ao_quadrado() * 3.14159;
    printf("A=%.4f\n",area);
}