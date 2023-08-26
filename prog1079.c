#include <stdio.h>

double mediaPonderada(double V[3]) {
    return (V[0]*2 + V[1]*3 + V[2]*5) / 10;
}

void lerValores(int N, double V[3]) {
    for(int i = 0; i < N; i++) {
        scanf("%lf %lf %lf", &V[0], &V[1], &V[2]);
        printf("%.1lf\n", mediaPonderada(V));
    }
}

int main() {
    int N;
    double V[3];
    scanf("%d", &N);
    lerValores(N, V);
    return 0;
}