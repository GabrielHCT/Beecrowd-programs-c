#include <stdio.h>

int main() 
{
    int M, N, soma, i = 1;
    do
    {
        soma=0;
        scanf(" %d %d", &M, &N);
        if(M > N && M > 0 && N > 0)
        {
            for(i = N; i <= M; i++) {
                soma+=i;
                printf("%d ", i);
            }
            printf("Sum=%d\n", soma);
        }
        else if(M > 0 && N > 0)
        {
            for(i = M; i <= N; i++) {
                soma+=i;
                printf("%d ", i);
            }
            printf("Sum=%d\n", soma);
        }
    }
    while(M > 0 && N > 0);

    return 0;
}