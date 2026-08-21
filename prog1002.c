#include <stdio.h>
#include <math.h>

double calcularArea(double raio, double n) {
    return n * pow(raio, 2);
}

int main() {
    double raio, area, n = 3.14159;
    scanf("%lf", &raio);

    area = calcularArea(raio, n);

    printf("A=%.4lf\n", area);
}