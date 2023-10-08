#include <stdio.h>
 
int main() {
    int X, Y;
    scanf("%d %d", &X, &Y);
    for(int i = 1, newl = 1; i <= Y; i++) {
        printf("%d", i);
        if(newl != X)    
            printf(" ");
        if(newl == X) {
            printf("\n");
            newl = 0;
        }
        newl++;
    }
    return 0;
}