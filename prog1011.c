#include <stdio.h>
#include <math.h>

double const pi = 3.14159;

double calcularVolume(double R) {
    return (4.0 / 3.0) * pi * pow(R, 3);
}

int main() {
    double volume, R;

    scanf("%lf", &R);
    volume = calcularVolume(R);

    printf("VOLUME = %.3lf\n", volume);

    return 0;
}