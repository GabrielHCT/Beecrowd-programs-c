#include <stdio.h>

int main() {
    int valor, a = 0;
    for(int i = 0; i < 5; i++) {
        scanf("%d", &valor);
        if(valor % 2 == 0)
            a++;
    }
    printf("%d valores pares\n", a);
    return 0;
}