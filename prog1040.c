#include <stdio.h>

int main() 
{
    double nota_exame, n1, n2, n3, n4, media, media_final;
    scanf("%lf %lf %lf %lf", &n1, &n2, &n3, &n4);

    media = (n1*2 + n2*3 + n3*4 + n4*1) / 10;
    printf("Media: %.1f\n", media);

    if(media >= 7.0)
        printf("Aluno aprovado.\n");
    else if(media < 5.0)
        printf("Aluno reprovado.\n");
    else
    {
        scanf("%lf",&nota_exame);
        printf("Aluno em exame.\nNota do exame: %.1f\n",nota_exame);
        media_final = (media + nota_exame) / 2;
        if(media_final >= 5.0)
            printf("Aluno aprovado.\n");
        else
            printf("Aluno reprovado.\n");
        printf("Media final: %.1f\n", media_final);
    }

    return 0;
}