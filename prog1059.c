#include <stdio.h>

int main()
{
    int x = 2;
    while(x >= 1 && x <= 100 && (x % 2) == 0)
    {
        printf("%d\n",x);
        x+=2;
    }

    return 0;
}