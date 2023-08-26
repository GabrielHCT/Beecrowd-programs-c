#include <stdio.h>

void calculoInicioEFim(int *inicioTempo, int *fimTempo, int horaInicial, int minutoInicial, int horaFinal, int minutoFinal) {
    *inicioTempo = horaInicial * 60 + minutoInicial;
    *fimTempo = horaFinal * 60 + minutoFinal;
}

int calculoMinutosTotais(int inicioTempo, int fimTempo) {
    if(inicioTempo >= fimTempo)
        fimTempo += 1440;
    return fimTempo - inicioTempo;
}

int main() {
    int inicioTempo, fimTempo, horaInicial, minutoInicial, horaFinal, minutoFinal;
    scanf("%d %d %d %d", &horaInicial, &minutoInicial, &horaFinal, &minutoFinal);
    calculoInicioEFim(&inicioTempo, &fimTempo, horaInicial, minutoInicial, horaFinal, minutoFinal);
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", calculoMinutosTotais(inicioTempo, fimTempo) / 60, calculoMinutosTotais(inicioTempo, fimTempo) % 60);
    return 0;
}