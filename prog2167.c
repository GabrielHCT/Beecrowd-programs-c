#include <stdio.h>

int verificarRPM(int *ptr, int N) {
    for(int i = 1; i < N; i++) {
        ptr++;
        if(*ptr < *(ptr - 1))
            return i + 1;
    }
    return 0;
}
    
void lerRPM(int *ptr, int N) {
    for(int i = 0; i < N; i++, ptr++)
        scanf("%d", ptr);
}

int main () {
    int N, R[10001], *ptr = R;
    scanf("%d", &N);
    lerRPM(ptr, N);
    printf("%d\n", verificarRPM(ptr, N));
    return 0;
}