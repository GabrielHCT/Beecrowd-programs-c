#include <stdio.h>

int main() {
    double V;
    scanf("%lf", &V);
    if(V >= 0 && V <= 25)
        puts("Intervalo [0,25]");
    else if(V > 25 && V <= 50)
        puts("Intervalo (25,50]");
    else if(V > 50 && V <= 75)
        puts("Intervalo (50,75]");
    else if(V > 75 && V <= 100)
        puts("Intervalo (75,100]");
    else 
        puts("Fora de intervalo");
    return 0;
}