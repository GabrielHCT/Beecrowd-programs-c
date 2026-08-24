#include <stdio.h>

double calcularMedia(double A, double B, double C, double peso[]) {
    double soma_peso = 0;

    for(int i = 0; i < 3; i++) {
        soma_peso += peso[i];
    }

    return (A * peso[0] + B * peso[1] + C * peso[2]) / soma_peso;
}

int main() {
    double A, B, C, MEDIA, peso[3];

    scanf("%lf %lf %lf", &A, &B, &C);

    peso[0] = 2;
    peso[1] = 3;
    peso[2] = 5;

    MEDIA = calcularMedia(A, B, C, peso);

    printf("MEDIA = %.1lf\n", MEDIA);
}