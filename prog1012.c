#include <stdio.h>
#include <math.h>

double const pi = 3.14159;

double calcularAreaCirculo(double C) {
    return pi * pow(C, 2);
}

double calcularAreaQuadrado(double B) {
    return pow(B, 2);
}

double calcularAreaRetangulo(double A, double B) {
    return A * B;
}

double calcularAreaTrapezio(double A, double B, double C) {
    return ((A + B) * C) / 2;
}

double calcularAreaTriangulo(double A, double C) {
    return (A * C) / 2;
}


int main() {
    double A, B, C, area_tri, area_circ, area_trap, area_quad, area_retan;

    scanf("%lf %lf %lf", &A, &B, &C);

    area_tri = calcularAreaTriangulo(A, C);
    area_circ = calcularAreaCirculo(C);
    area_trap = calcularAreaTrapezio(A, B, C);
    area_quad = calcularAreaQuadrado(B);
    area_retan = calcularAreaRetangulo(A, B);

    printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n", area_tri, area_circ, area_trap, area_quad, area_retan);

    return 0;
}