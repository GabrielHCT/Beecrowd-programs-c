#include <stdio.h>

int main() 
{
    int x, y, z, soma = 0;
    scanf("%d %d", &x, &y);
    
    if(y < x)
    {
        z = y+1;
        while(z > y && z < x)
        {
            if((z % 2) != 0)
            {
                soma+=z;
                z++;
            }
            else
                z++;
        }
    }
    else
    {
        z = x+1;
        while(z > x && z < y)
        {
            if((z % 2) != 0)
            {
                soma+=z;
                z++;
            }
            else
                z++;
        }
    }

    printf("%d\n", soma);

    return 0;
}

