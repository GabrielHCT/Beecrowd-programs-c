#include <stdio.h>

void calculoNotas(double nota[2], int c) {
    while(scanf("%lf", &nota[c])) {
        if(nota[c] >= 0 && nota[c] <= 10)
            c++;
        else
            puts("nota invalida");
        if(c == 2)
            break;
    }
    printf("media = %.2f\n", (nota[0] + nota[1]) / 2);
}

int main() {
    double nota[2];
    calculoNotas(nota, 0);
    puts("novo calculo (1-sim 2-nao)");
    for(int X; scanf("%d", &X) && X != 2; puts("novo calculo (1-sim 2-nao)"))
        if(X == 1)
            calculoNotas(nota, 0);
    return 0;
}