#include <stdio.h>

typedef struct {
    int X, Y;
}tPonto;

int main() {
    tPonto ponto, *p = &ponto;
    while(scanf("%d %d", &p->X, &p->Y) && p->X != 0 && p->Y != 0)
        if(p->X > 0 && p->Y > 0)
            puts("primeiro");
        else if(p->X < 0 && p->Y > 0)
            puts("segundo");
        else if(p->X < 0 && p->Y < 0)
            puts("terceiro");
        else if(p->X > 0 && p->Y < 0)
            puts("quarto");
    return 0;
}