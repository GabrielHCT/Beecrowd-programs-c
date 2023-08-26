#include <stdio.h>

int calculoTempo(int distancia) {
    return distancia * 2;
}

int main() {
    int distancia;
    scanf("%d", &distancia);
    printf("%d minutos\n", calculoTempo(distancia));
    return 0;
}