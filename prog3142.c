#include <stdio.h>

int main()
{
    int limite;
    unsigned valor_coluna = 0;
    char C;

    limite = (('X' - 64) * 26 + 'F' - 64) * 26 + 'D' - 64;
    while (scanf("%c", &C) != EOF)
    {
        if (C == '\n')
        {
            if(valor_coluna > limite || valor_coluna < 0)
                printf("Essa coluna nao existe Tobias!\n");
            else
                printf("%u\n", valor_coluna);
            valor_coluna = 0;
        }
        else
            valor_coluna = valor_coluna * 26 + C - 64;
    }
}