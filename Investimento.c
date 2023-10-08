#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    double renda, lucroAcumulado;
    char nome[100];
} Investidor;

Investidor *criarInvestidor() {
    Investidor *i = (Investidor *)malloc(sizeof(Investidor) * 2);
    return i;
}

void passarDadosArquivo(Investidor *i, FILE *file) {
    file = fopen("investimento.dat", "w+b");

    fprintf(file, "%s %.2f %.2f\n", i[0].nome, i[0].renda, i[0].lucroAcumulado);
    fprintf(file, "%s %.2f %.2f", i[1].nome, i[1].renda, i[1].lucroAcumulado);

    fclose(file);
}

void criarDados(Investidor *i) {
    i[0].lucroAcumulado = 0, i[1].lucroAcumulado = 0;

    printf("Digite o nome do investidor 1: ");
    scanf("%s", i->nome);
    printf("Digite a renda atual do investidor 1: ");
    scanf("%lf", &i->renda);
    
    printf("\nDigite o nome do investidor 2: ");
    scanf("%s", i[1].nome);
    printf("Digite a renda atual do investidor 2: ");
    scanf("%lf", &i[1].renda);
}

void criarNovoArquivo(Investidor *i, FILE *file) {
    criarDados(i);
    passarDadosArquivo(i, file);
    system("cls");
    printf("Arquivo criado com sucesso!\n");
}

void definirValores(Investidor *i, FILE *file) {
    file = fopen("investimento.dat", "a+b");
    fseek(file, 0, SEEK_SET);
    fscanf(file, "%s %lf %lf %s %lf %lf", i[0].nome, &i[0].renda, &i[0].lucroAcumulado, i[1].nome, &i[1].renda, &i[1].lucroAcumulado);
    fclose(file);
}

void atualizarValores(Investidor *i) {
    FILE *file = fopen("investimento.dat", "w+b");

    fprintf(file, "%s %.2f %.2f\n", i[0].nome, i[0].renda, i[0].lucroAcumulado);
    fprintf(file, "%s %.2f %.2f", i[1].nome, i[1].renda, i[1].lucroAcumulado);

    fclose(file);
}

void adicionarValorRendas(Investidor *i, FILE *file) {
    double valor;
    int qtd, num;

    puts("**********************************   ADICIONAR VALORES AS RENDAS  *****************************************\n");

    puts("Quantos investidores terao as rendas alteradas? Escreva 1 ou 2");
    scanf("%d", &qtd);

    if(qtd == 2)
        for(int j = 0; j < qtd; j++) {
            printf("\nValor para se adicionar ao investidor %s: ", i[j].nome);
            scanf("%lf", &valor);
            i[j].renda += valor;
        }
    else {
        printf("Qual investidor tera a renda alterada? Digite 1 para %s ou 2 para %s: ", i[0].nome, i[1].nome);
        scanf("%d", &num);
        
        printf("\nValor para adicionar ao investidor %s: ", i[num - 1].nome);
        scanf("%lf", &valor);
        i[num - 1].renda += valor;
    }

    if(i[0].renda < 0)
        i[0].renda = 0;
    else if(i[1].renda < 0)
        i[1].renda = 0;

    atualizarValores(i);
    definirValores(i, file);

    puts("\nValores adicionados com sucesso!");
}

void calcularLucrosAtuais(Investidor *i, FILE *file) {
    int escolha, percentual[2], a = 0, b = 1;
    double lucro;

    puts("**********************************   CALCULAR LUCROS ATUAIS  *****************************************\n");
    
    puts("Digite o lucro total, para fazer o calculo:");
    scanf("%lf", &lucro);

    if(i[0].renda < i[1].renda)
        a = 1, b = 0;
    if((i[a].renda - i[b].renda) >= 750) {
        percentual[a] = 75;
        percentual[b] = 25;
    }
    else if((i[a].renda - i[b].renda) >= 600) {
        percentual[a] = 70;
        percentual[b] = 30;
    }
    else if((i[a].renda - i[b].renda) >= 450) {
        percentual[a] = 65;
        percentual[b] = 35;
    }
    else if((i[a].renda - i[b].renda) >= 300) {
        percentual[a] = 60;
        percentual[b] = 40;
    }
    else if((i[a].renda - i[b].renda) >= 150) {
        percentual[a] = 55;
        percentual[b] = 45;
    }
    else if((i[a].renda - i[b].renda) >= 0) {
        percentual[a] = 50;
        percentual[b] = 50;
    }

    printf("Lucro de %s: R$ %.2f reais\n", i[0].nome, percentual[0] * lucro / 100);
    printf("Lucro de %s: R$ %.2f reais\n", i[1].nome, percentual[1] * lucro / 100);

    puts("\nDeseja adicionar os lucros atuais aos lucros acumulados? Digite 1 para sim e 0 para nao");
    scanf("%d", &escolha);

    if(escolha) {
        i[0].lucroAcumulado += percentual[0] * lucro / 100;
        i[1].lucroAcumulado += percentual[1] * lucro / 100;

        atualizarValores(i);
        definirValores(i, file);

        puts("\nLucros adicionados com sucesso!");
    }
}

void mostrarDadosGerais(Investidor *i) {
    puts("**********************************   DADOS GERAIS  *****************************************");

    printf("Lote/Contrato: %d\nRenda Total: %.2lf\n", calcularLote(i[0].renda + i[1].renda), i[0].renda + i[1].renda);

    printf("\nINVESTIDOR 1: %s\n", i[0].nome);
    printf("\nRenda -> US$ %.2lf\nLucros Acumulados -> R$ %.2lf\n", i[0].renda, i[0].lucroAcumulado);

    printf("\nINVESTIDOR 2: %s\n", i[1].nome);
    printf("\nRenda -> US$ %.2lf\nLucros Acumulados -> R$ %.2lf\n", i[1].renda, i[1].lucroAcumulado);
}

int calcularLote(double rendaTotal) {
    int x = 0, lote = 17;
    for(rendaTotal; rendaTotal - 1000 >= x; x+=100)
        lote++;
    return lote;
}

int main() {
    FILE *file = fopen("investimento.dat", "r+b");
    Investidor *i = criarInvestidor();

    if (file == NULL) {
        printf("Arquivo nao encontrado, sera necessario criar um novo...\n\n");
        criarNovoArquivo(i, file);
    } else {
        definirValores(i, file);
        fclose(file);
    }
        
    int escolha = 0;
    do {
        if (escolha != 0) {
            puts("\nDeseja escolher uma nova opcao? Escreva 1 para sim e 0 para nao");
            scanf("%d", &escolha);
            if (!escolha) {
                system("cls");
                mostrarDadosGerais(i);
                printf("\n");
                break;
                }
            else
                system("cls");
        }

        mostrarDadosGerais(i);

        puts("\n**************************************   OPCOES  ********************************************");
        puts("\n0 -> Sair\n1 -> Criar Novo Arquivo\n2 -> Adicionar Valor em Rendas\n3 -> Calcular Lucros Atuais");
        printf("\nEscolha uma opcao: ");
        scanf("%d", &escolha);

        system("cls");

        if (escolha == 1) {
            puts("**************************************   CRIAR NOVO ARQUIVO  ********************************************\n");
            criarNovoArquivo(i, file);
        }
        if (escolha == 2)
            adicionarValorRendas(i, file);
        else if(escolha == 3)
            calcularLucrosAtuais(i, file);

    } while (escolha);

    free(i);
    system("pause");
    return 0;
}