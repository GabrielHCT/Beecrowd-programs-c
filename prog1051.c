#include <stdio.h>

int main()
{
    double salario, salario_calculo1, salario_calculo2, salario_calculo3, imposto;
    scanf("%lf", &salario);

    if(salario >= 0 && salario <= 2000)
        printf("Isento\n");
    else
        {
        if(salario > 2000)
            {
                salario_calculo1 = salario - 2000;
                if(salario_calculo1 >= 1000)
                    {
                        salario_calculo2 = salario_calculo1-1000;
                        salario_calculo1 = 1000;
                        if(salario_calculo2 >= 1500)
                            {
                                salario_calculo3 = salario_calculo2-1500;
                                salario_calculo2 = 1500;
                            }
                        else
                            salario_calculo3 = 0;
                    }
            }
        imposto = salario_calculo1*0.08 + salario_calculo2*0.18 + salario_calculo3*0.28;
        printf("R$ %.2f\n", imposto);
        }

    return 0;
}