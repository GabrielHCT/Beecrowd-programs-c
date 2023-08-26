#include <stdio.h>

int main () 
{
    int R, notas_100, notas_50, notas_20, notas_10, notas_5, notas_2;
    double i, moedas_1, moedas_050, moedas_025, moedas_010, moedas_005, moedas_001;
    scanf("%lf", &i);
    int V;
    V = i*100;
    
    notas_100 = V / 10000;
    R = V % 10000;
    notas_50 = R / 5000;
    R %= 5000;
    notas_20 = R / 2000;
    R %= 2000;
    notas_10 = R / 1000;
    R %= 1000;
    notas_5 = R / 500;
    R %= 500;
    notas_2 = R / 200;
    R %= 200;
    
    moedas_1 = R / 100;
    R %= 100;
    moedas_050 = R / 50;
    R %= 50;
    moedas_025 = R / 25;
    R %= 25;
    moedas_010 = R / 10;
    R %= 10;
    moedas_005 = R / 5;
    R %= 5;
    moedas_001 = R;

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", notas_100);
    printf("%d nota(s) de R$ 50.00\n", notas_50);
    printf("%d nota(s) de R$ 20.00\n", notas_20);
    printf("%d nota(s) de R$ 10.00\n", notas_10);
    printf("%d nota(s) de R$ 5.00\n", notas_5);
    printf("%d nota(s) de R$ 2.00\n", notas_2);
    printf("MOEDAS:\n");
    printf("%.0f moeda(s) de R$ 1.00\n", moedas_1);
    printf("%.0f moeda(s) de R$ 0.50\n", moedas_050);
    printf("%.0f moeda(s) de R$ 0.25\n", moedas_025);
    printf("%.0f moeda(s) de R$ 0.10\n", moedas_010);
    printf("%.0f moeda(s) de R$ 0.05\n", moedas_005);
    printf("%.0f moeda(s) de R$ 0.01\n", moedas_001);

    return 0;
}