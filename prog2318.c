#include <stdio.h>

void determinarPosicaoZero(int C[3][3], int valorFaltando[0], int valorIgual[0], int soma_Linha[2]) {

}

void somaLinhas(int a, int i, C[3][3], soma_Linha[2], valorFaltando[0], valorIgual[0]) {
    soma_Linha[i] += C[i][a];
    determinarPosicaoZero(C, valorFaltando, valorIgual, soma_Linha);
}

void iniciarValoresDoCubo(int C[3][3], int valorFaltando[0], int valorIgual[0], int soma_Linha[2],int soma_Diagonal[1]) {
    for(int i = 0; i < 3; i++) {
        soma_Linha[i] = 0;
        for(int a = 0; a < 3; a++) {
            scanf("%d", &C[i][a]);
            somaLinhas(a, i, C, soma_Linha, valorFaltando, valorIgual);
        }
    }
}

int main() {
    int C[3][3], valorFaltando[0], valorIgual[0], soma_Linha[2], soma_Diagonal[1];
    iniciarValoresDoCubo(C, valorFaltando, valorIgual, soma_Linha, soma_Diagonal);
}