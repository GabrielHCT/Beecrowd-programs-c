#include <stdio.h>

int main()
{
    int alcool = 0, gasolina = 0, diesel = 0, codigo_combustivel;
    scanf ("%d", &codigo_combustivel);

    while (codigo_combustivel > 0 && codigo_combustivel != 4)
    {
        switch (codigo_combustivel)
        {
            case 1: alcool++; break;
            case 2: gasolina++; break;
            case 3: diesel++; break;
        }
        scanf ("%d", &codigo_combustivel);
    }

    printf("MUITO OBRIGADO\nAlcool: %d\nGasolina: %d\nDiesel: %d\n", alcool, gasolina, diesel);
}