#include <stdio.h>

int main() {
    int V[2], posicao = 1;
    scanf("%d", &V[1]);
    for(int i = 2; i <= 100; i++) {
        scanf("%d", &V[0]);
        if(V[1] < V[0]) {
            V[1] = V[0];
            posicao = i;
        }
    }
    printf("%d\n%d\n", V[1], posicao);
    return 0;
}