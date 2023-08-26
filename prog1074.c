#include <stdio.h>

void lerValores(int N, int valor) {
    for(int i = 0; i < N; i++) {
        scanf("%d", &valor);
        if(valor == 0)
            puts("NULL");
        else {
            if(valor % 2 != 0)
                printf("ODD");
            else
                printf("EVEN");
            if(valor > 0)
                printf(" POSITIVE\n");
            if(valor < 0)
                printf(" NEGATIVE\n");
        }
    }
}

int main() {
    int N, valor;
    scanf("%d", &N);
    lerValores(N, valor);
    return 0;
}