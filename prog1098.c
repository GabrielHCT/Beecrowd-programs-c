#include <stdio.h>

int main() {
    for(double i = 0, j = 1, c = 0; c >= 0; c++) {
        if(c == 3 && i != 2) {
            i+=0.2;
            j = 1 + i;
            c = 0;
        }
        printf("I=%.1lf J=%.1lf\n", i, j);
        if(j == 5)
            break;
        j++;
    }
    return 0;
}