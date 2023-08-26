#include <stdio.h>
#include <math.h>

double calcularRaiz1(double d, double A, double B) {
    return (-B + sqrt(d)) / (2*A);
}

double calcularRaiz2(double d, double A, double B) {
    return (-B - sqrt(d)) / (2*A);
}

double calculoDelta(double A, double B, double C) {
    return (B*B) - 4*A*C;
}

int verificarCondicoes(double d, double A, double B) {
    if(A != 0 && d >= 0)
        printf("R1 = %.5f\nR2 = %.5f\n", calcularRaiz1(d, A, B), calcularRaiz2(d, A, B));
    else
        puts("Impossivel calcular");
}

int main () {
    double A, B, C;
    scanf("%lf %lf %lf", &A, &B, &C);
    verificarCondicoes(calculoDelta(A, B, C), A, B);
    return 0;
}