#include <stdio.h>

int main () {
    int i = 1, q, p, num_p;
    double valor, total = 0;

    scanf ("%d", &p);
    while (i > 0 && i <= p) {
        scanf ("%d %d", &num_p, &q);
        if(num_p == 1001)
            valor = 1.50;
        else if(num_p == 1002)
            valor = 2.50;
        else if(num_p == 1003)
            valor = 3.50;
        else if(num_p == 1004)
            valor = 4.50;
        else if(num_p == 1005)
            valor = 5.50;
        total += valor * q;
        i++;
    }
    printf("%.2f\n", total);

    return 0;
}