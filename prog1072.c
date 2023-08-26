#include <stdio.h>

int main() {
    int N, valor, in = 0, out = 0;
    scanf("%d", &N);
    for(int i = 0; i < N; i++) {
        scanf("%d", &valor);
        if(valor >= 10 && valor <= 20)
            in++;
        else
            out++;
    }
    printf("%d in\n%d out\n", in, out);
    return 0;
}