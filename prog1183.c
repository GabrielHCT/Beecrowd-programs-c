#include <stdio.h>

double soma(double M[12][12]) {
    double soma = 0;
    for(int i = 0; i < 12; i++)
        for(int a = 0; a < 12; a++)
            if(i != a && i < a)
                soma += M[i][a];
    return soma;
}

void imprimirOperacao(double M[12][12], char O) {
    if(O == 'S')
        printf("%.1lf\n", soma(M));
    if(O == 'M')
        printf("%.1lf\n", soma(M)/66);
}

void lerValoresMatriz(double M[12][12]) {
    for(int i = 0; i < 12; i++)
        for(int a = 0; a < 12; a++)
            scanf("%lf", &M[i][a]);
}

int main() {
    double M[12][12];
    char O;
    scanf("%c", &O);
    lerValoresMatriz(M);
    imprimirOperacao(M, O);
    return 0;
}