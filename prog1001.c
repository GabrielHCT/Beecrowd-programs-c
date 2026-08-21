#include <stdio.h>

int somar(int A, int B) {
    return A + B;
}

int main() {
    int A, B, X;

    scanf("%d %d", &A, &B);

    X = somar(A, B);

    printf("X = %d\n", X);

    return 0;
}