#include <stdio.h>

int main() 
{
    int L, i, N, multiplos_2 = 0, multiplos_3 = 0, multiplos_4 = 0, multiplos_5 = 0;
    scanf("%d", &N);

    for(i = 1; i >= 1 && i <= N; i++)
    {
        scanf("%d", &L);
        if(L % 2 == 0 )
            multiplos_2++;
        if(L % 3 == 0 )
            multiplos_3++;
        if(L % 4 == 0 )
            multiplos_4++;
        if(L % 5 == 0 )
            multiplos_5++;
    }

    printf("%d Multiplo(s) de 2\n%d Multiplo(s) de 3\n%d Multiplo(s) de 4\n%d Multiplo(s) de 5\n", multiplos_2, multiplos_3, multiplos_4, multiplos_5);

    return 0;
}