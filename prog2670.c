#include <stdio.h>

int main()
{
    int A1, A2, A3, n_total_min = 0;
    scanf("%d %d %d", &A1, &A2, &A3);

    if (A1 > -1 && A1 < 1001 && A2 > -1 && A2 < 1001 && A3 > -1 && A3 < 1001)
    {
        if (A3 == A2 && A2 == A1)
        {
            A2 = 0;
            A3 = A3 * 2;
            A1 = A1 * 2;
        }
        else if (A3 == A2 && A2 > A1)
        {
            A2 = 0;
            A3 = A3 * 2;
            A1 = A1 * 2;
        }
        else if (A3 == A2 && A2 < A1)
        {
            A2 = 0;
            A3 = A3 * 2;
            A1 = A1 * 2;
        }
        else if (A3 == A1 && A1 > A2)
        {
            A2 = 0;
            A3 = A3 * 2;
            A1 = A1 * 2;
        }
        else if (A3 == A1 && A1 < A2)
        {
            A2 = 0;
            A3 = A3 * 2;
            A1 = A1 * 2;
        }
        else if (A3 > A2 && A3 > A1)
        {
            A3 = 0;
            A2 = A2 * 2;
            A1 = A1 * 4;
        }
        else if (A2 > A1 && A2 > A3)
        {
            A2 = 0;
            A3 = A3 * 2;
            A1 = A1 * 2;
        }
        else if (A1 > A2 && A1 > A3)
        {
            A1 = 0;
            A2 = A2 * 2;
            A3 = A3 * 4;
        }
        n_total_min = A1 + A2 + A3;
    }
    
    printf("%d\n", n_total_min);

    return 0;
}
