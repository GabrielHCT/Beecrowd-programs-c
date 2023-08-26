#include <stdio.h>

int main() {
    int i, T, PA, PB, tempo;
    double G1, G2;
    scanf("%d", &T);
    
    for (i = 1; i > 0 && i <= T; i++) {
        tempo = 0;
        scanf ("%d %d %lf %lf", &PA, &PB, &G1, &G2);
        for (tempo = 0; PA <= PB && tempo <= 100; tempo++) {
            PA += PA * G1/100;
            PB += PB * G2/100;
        }
        if (tempo > 100)
            printf ("Mais de 1 seculo.\n", tempo);
        else
            printf ("%d anos.\n", tempo);
    }
    return 0;
}