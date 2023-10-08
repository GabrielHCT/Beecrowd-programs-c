#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int vInter, vGremio, empates;
}Estatistica;

char *determinarResultado(Estatistica *e) {
    if(e->vInter > e->vGremio)
        return "Inter venceu mais";
    else if(e->vInter < e->vGremio)
        return "Gremio venceu mais";
    else
        return "Nao houve vencedor";
}

void lerGrenai(Estatistica *e) {
    int gInter, gGremio;
    scanf("%d %d", &gInter, &gGremio);
    if(gInter > gGremio)
        e->vInter++;
    else if(gInter < gGremio)
        e->vGremio++;
    else
         e->empates++;
}

Estatistica *criarEstatistica() {
    Estatistica *e = (Estatistica*) malloc(sizeof(Estatistica) * 3);
    e->vInter = 0, e->vGremio = 0, e->empates = 0;
    return e;
}

int main() {
    Estatistica *e = criarEstatistica();
    int num = 1, totalG = 0;
    while(num != 2) {
        lerGrenai(e);
        totalG++;
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d", &num);
    }
    determinarResultado(e);
    printf("%d grenais\nInter:%d\nGremio:%d\nEmpates:%d\n%s\n", totalG, e->vInter, e->vGremio, e->empates, determinarResultado(e));
    free(e);
    return 0;
}