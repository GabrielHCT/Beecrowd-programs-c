#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    for(int i = 0, valor = 1; i < N; i++, valor+=4)
        printf("%d %d %d PUM\n", valor, valor+1, valor+2);
    return 0;
}