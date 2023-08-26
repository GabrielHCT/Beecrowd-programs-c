#include <stdio.h>

int produto (int x, int y) 
{
    int PROD = x * y;
    return PROD;
}

main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    printf("PROD = %d\n", produto(x,y));
}