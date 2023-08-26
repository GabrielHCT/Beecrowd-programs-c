#include <stdio.h>

int verificarPadrao(int *ptr, int N) {
    int valor;
    for(int i = 0; i < N; i++) {
        ptr++;
        if(*(ptr) < *(ptr + 1) && *ptr > *(ptr - 1))
            valor = 1;
        else
            valor = 0;
    }
    return valor;
}

void lerMedidas(int *ptr, int N) {
    for(int i = 0; i < N; i++, ptr++)
        scanf("%d", ptr);
}

int main() {
    int N, H[20000], *ptr = H;
    scanf("%d", &N);
    lerMedidas(ptr, N);
    printf("%d\n", verificarPadrao(ptr, N));
    return 0;
}