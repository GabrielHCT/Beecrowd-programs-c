#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int D, H, M, S;
}tEvento;

void fazerCalculo(tEvento *e) {
    e[2].S = (e[1].D - e[0].D) * 86400;
    e[2].S += (e[1].H - e[0].H)*3600 + (e[1].M - e[0].M)*60 + (e[1].S - e[0].S);
    e[2].D = e[2].S / 86400;
    e[2].H = (e[2].S % 86400) / 3600;
    e[2].M = ((e[2].S % 86400) % 3600) / 60;
    e[2].S = ((e[2].S % 86400) % 3600) % 60;
}

void entradaDados(tEvento *e) {
    char P[3], dP;
    scanf("%s %d %d %c %d %c %d %s %d %d %c %d %c %d", P, &e[0].D, &e[0].H, &dP, &e[0].M, &dP, &e[0].S, P, &e[1].D, &e[1].H, &dP, &e[1].M, &dP, &e[1].S);
}

int main() {
    tEvento *e = (tEvento *) malloc(12 * sizeof(tEvento));
    entradaDados(e);
    fazerCalculo(e);
    printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n", e[2].D, e[2].H, e[2].M, e[2].S);
    free(e);
    return 0;
}