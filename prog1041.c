#include <stdio.h>

void verificacao(double x, double y) {
    if(x == 0 && y == 0)
        puts("Origem");
    else if(x == 0 && y != 0)
        puts("Eixo Y");
    else if(x != 0 && y == 0)
        puts("Eixo X");
    else if(x > 0 && y > 0)
        puts("Q1");
    else if(x < 0 && y > 0)
        puts("Q2");
    else if(x < 0 && y < 0)
        puts("Q3");
    else
        puts("Q4");
}

int main() {
    double x, y;
    scanf("%lf %lf", &x, &y);
    verificacao(x, y);
}