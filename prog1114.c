#include <stdio.h>

int main() {
    int senha;
    while(scanf("%d", &senha))
        if(senha != 2002)  
            puts("Senha Invalida");
        else {
            puts("Acesso Permitido");
            break;
        }
}