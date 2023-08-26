#include <stdio.h>

int main()
{
    int total_cobais, total_coelhos = 0, total_ratos = 0, total_sapos = 0, N, quantia = 0, i;
    char tipo;
    double p_c, p_r, p_s;

    scanf("%d", &N);

    for (i = 1; i >= 1 && i <= N; i++)
    {
        scanf("%d %c", &quantia, &tipo);
        if (tipo == 'C')
        {
            total_coelhos += quantia;
            p_c = total_coelhos;
        }
        else if (tipo == 'R')
        {
            total_ratos += quantia;
            p_r = total_ratos;
        }
        else if (tipo == 'S')
        {
            total_sapos += quantia;
            p_s = total_sapos;
        }
        quantia = 0;
    }

    total_cobais = total_coelhos + total_ratos + total_sapos;
    p_c = p_c/total_cobais*100;
    p_s = p_s/total_cobais*100;
    p_r = p_r/total_cobais*100;

    printf("Total: %d cobaias\nTotal de coelhos: %d\nTotal de ratos: %d\nTotal de sapos: %d\nPercentual de coelhos: %.2f %%\nPercentual de ratos: %.2f %%\nPercentual de sapos: %.2f %%\n", total_cobais, total_coelhos, total_ratos, total_sapos, p_c, p_r, p_s);
    
    return 0;
}