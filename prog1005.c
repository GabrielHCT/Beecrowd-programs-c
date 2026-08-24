#include <stdio.h>

double calcularMedia(double A, double B, double pesoA, double pesoB) {
    return (A * pesoA + B * pesoB) / (pesoA + pesoB);
}

int main() {
    double A, B, pesoaA, pesoB , MEDIA;

    pesoaA = 3.5;
    pesoB = 7.5;

    scanf("%lf %lf", &A, &B);

    MEDIA = calcularMedia(A, B, pesoaA, pesoB);

    printf("MEDIA = %.5lf\n", MEDIA);

    return 0;
}