#include <stdio.h>
#include <math.h>

double areaTrapezio(double A, double B, double C) {
    return ((A+B)*C) / 2;
}

double perimetroTriangulo(double A, double B, double C) {
    return A + B + C;
}

int verificacaoTriangulo(double A, double B, double C) {
    int x = 0;
    if(fabs(B - C) < A && A < B + C)
        x = 1;
    else if(fabs(A - C) < B && B < A + C)
        x = 1;
    else if(fabs(A - B) < C && C < A + B)
        x = 1; 
    return x;
}

int main() {
    double A, B, C;
    scanf("%lf %lf %lf", &A, &B, &C);
    if(verificacaoTriangulo(A, B, C) != 0)
        printf("Perimetro = %.1f\n", perimetroTriangulo(A, B, C));
    else
        printf("Area = %.1f\n", areaTrapezio(A, B, C));
    return 0;
}