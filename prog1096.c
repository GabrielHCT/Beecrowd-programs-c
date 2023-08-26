#include <stdio.h>

int main() {
    for(int i = 1, j = 7, c = 0; c >= 0; c++, j--) {
        if(c == 3 && i != 9) {
            i+=2;
            j=7;
            c = 0;
        }
        if(c == 3 && i == 9)
            break;
        printf("I=%d J=%d\n", i, j);
    }
    return 0;
}