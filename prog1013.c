#include <stdio.h> 

int modulo_valor(int A, int B) {
    int modulo_valor;
    modulo_valor = A-B;
    if(modulo_valor < 0)
        modulo_valor*=-1;
    return modulo_valor;
}

int maiorAB(int A, int B)
{
    int maiorAB;
    maiorAB = (A+B+modulo_valor(A,B)) / 2;
    return maiorAB;
}
  
int main() 
{
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);
    printf("%d eh o maior\n", maiorAB(maiorAB(A,B), C));
    return 0;
}