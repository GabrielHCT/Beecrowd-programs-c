#include <stdio.h>

void trocarValores(int *n1, int *n2) {
    int T = *n1;
    *n1 = *n2;
    *n2 = T;
}

void lerVetor(int N[]) {
    for(int i = 0; i < 20; i++)
        scanf("%d", &N[i]);
}

int main() {
    int N[20];
    lerVetor(N);
    for(int i = 0, i2 = 19; i < 10; i++, i2--)
        trocarValores(&N[i], &N[i2]);
    for(int i = 0; i < 20; i++)
        printf("N[%d] = %d\n", i, N[i]);
    return 0;
}