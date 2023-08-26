#include <stdio.h>
#include <math.h>

int main() {
    double x1, x2, y1, y2, resultado;
    scanf("%lf %lf", &x1, &y1);
    scanf("%lf %lf", &x2, &y2);
    resultado = ((x2-x1)*(x2-x1)) + ((y2-y1)*(y2-y1));
    printf("%.4f\n", sqrt(resultado));
    return 0;
}