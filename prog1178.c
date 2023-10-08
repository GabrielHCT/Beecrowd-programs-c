#include <stdio.h>

int main() {
    double X, V[100];
    scanf("%lf", &X);
    for(int i = 0; i < 100; i++) {
        V[i] = X;
        printf("N[%d] = %.4f\n", i, V[i]);
        X /= 2;
    }
    return 0;
}