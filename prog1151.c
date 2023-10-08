#include <stdio.h>

int main() {
    int N, F[45] = {0, 1};
    scanf("%d", &N);
    printf("%d %d", F[0], F[1]);
    for(int i = 2; i < N; i++) {
        F[i] = F[i-1] + F[i-2];
        printf(" %d", F[i]);
    }
    printf("\n");
    return 0;
}