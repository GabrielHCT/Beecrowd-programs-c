#include <stdio.h>
#include <math.h>

int main() {
    int a, b, q, r;
    scanf("%d %d", &a, &b);
    q = a/b;
    ceil(q);
    r = -1*(q*b) + a;
    printf("%d %d\n", q, r);
    return 0;
}