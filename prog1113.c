#include <stdio.h>

int main() {
    int X, Y;
    do {
        scanf("%d %d", &X, &Y);
        if(X > Y)
            printf("Decrescente\n");
        else if(Y > X)
            printf("Crescente\n");
    }while(X != Y);
}