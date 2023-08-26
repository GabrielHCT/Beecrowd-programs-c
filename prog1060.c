#include <stdio.h>

int verificar(double valor, int x) {
    for(int i = 1; i <= 6; i++) {
        scanf("%lf", &valor);
        if(valor >= 0)
            x++;
    }
    return x;
}

int main() {
    double valor;
    int x;
    printf("%d valores positivos\n", verificar(valor, x));
    return 0;
}