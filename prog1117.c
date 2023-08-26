#include <stdio.h>

int main() {
    double nota[2];
    int c = 0;
    while(scanf("%lf", &nota[c])) {
        if(nota[c] >= 0 && nota[c] <= 10)
            c++;
        else
            puts("nota invalida");
        if(c == 2)
            break;
    }
    printf("media = %.2f\n", (nota[0] + nota[1]) / 2);
    return 0;
}