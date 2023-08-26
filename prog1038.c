#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int codigo;
    double preco;
} Lanche;

typedef struct {
    Lanche *lanches;
} Cardapio;

typedef struct {
    int codigo, qtde;
} Pedido;

double calcularValorConta (Cardapio *c, Pedido *p) {
    return c->lanches[p->codigo].preco * p->qtde;
}

Pedido* lerPedido() {
    Pedido *p = (Pedido*) malloc(sizeof(Pedido));
    scanf("%d %d", &p->codigo, &p->qtde);
    return p;
}

Cardapio* criarCardapio() {
    Cardapio *c = (Cardapio*) malloc(sizeof(Cardapio));
    c->lanches = (Lanche*) malloc(6 * sizeof(Lanche));
    c->lanches[1].codigo = 1;
    c->lanches[1].preco = 4.0;
    c->lanches[2].codigo = 2;
    c->lanches[2].preco = 4.5;
    c->lanches[3].codigo = 3;
    c->lanches[3].preco = 5.0;
    c->lanches[4].codigo = 4;
    c->lanches[4].preco = 2.0;
    c->lanches[5].codigo = 5;
    c->lanches[5].preco = 1.5;
    return c;
}

int main() {
    printf("Total: R$ %.2f\n", calcularValorConta(criarCardapio(), lerPedido()));
    return 0;
}