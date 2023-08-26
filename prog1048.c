#include <stdio.h>

int main()
{
    double salario = 0, salario_novo = 0, reajuste_ganho = 0, percentual = 0;
    scanf("%lf", &salario);

    if(salario > 0 && salario <= 400.00)
    {   
        percentual = 0.15;
        reajuste_ganho = salario * percentual;
        salario_novo = salario + reajuste_ganho;
    }
    else
        if(salario > 400.00 && salario <= 800.00)
        {
            percentual = 0.12;
            reajuste_ganho = salario * percentual;
            salario_novo = salario + reajuste_ganho;
        }
        else
            if(salario > 800.00 && salario <= 1200.00)
            {
                percentual = 0.10;
                reajuste_ganho = salario * percentual;
                salario_novo = salario + reajuste_ganho;
            }
            else
                if(salario > 1200.00 && salario <= 2000.00)
                {
                    percentual = 0.07;
                    reajuste_ganho = salario * percentual;
                    salario_novo = salario + reajuste_ganho;
                }
                else
                    if(salario > 2000.00)
                    {
                        percentual = 0.04;
                        reajuste_ganho = salario * percentual;
                        salario_novo = salario + reajuste_ganho;
                    }
                    else
                        if(salario < 0)
                        {
                            percentual = 0;
                            reajuste_ganho = 0;
                            salario_novo = salario + reajuste_ganho;
                        }
    
    printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %.0f %%\n",salario_novo, reajuste_ganho, percentual*100);

    return 0;
}