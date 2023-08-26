#include <stdio.h>

int main() 
{
    int  idade_dias, idade_meses, idade_anos;
    scanf("%d", &idade_dias);

    idade_anos = idade_dias/365;
    idade_dias -= idade_anos*365;
    idade_meses = idade_dias/30;
    idade_dias -= idade_meses*30;

    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", idade_anos, idade_meses, idade_dias);
}