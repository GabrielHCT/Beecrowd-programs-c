#include <stdio.h>

int main() {
    int N;
    double X, Y;
    scanf("%d", &N);
    for(int i = 0; i < N; i++) {
        scanf("%lf %lf", &X, &Y);
        if(Y == 0)
            puts("divisao impossivel");
        else
            printf("%.1f\n", X / Y);
    }
    return 0;
}