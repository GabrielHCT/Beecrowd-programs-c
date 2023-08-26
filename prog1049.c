#include <stdio.h>
#include <string.h>

char verificacao(char palavra1[100], char palavra2[100], char palavra3[100]) {
    if(strcmp(palavra1,"vertebrado") == 0 && strcmp(palavra2,"ave") == 0 && strcmp(palavra3,"carnivoro") == 0)
        puts("aguia");
    else if(strcmp(palavra1,"vertebrado") == 0 && strcmp(palavra2,"ave") == 0 && strcmp(palavra3,"onivoro") == 0)
        puts("pomba");
    else if(strcmp(palavra1,"vertebrado") == 0 && strcmp(palavra2,"mamifero") == 0 && strcmp(palavra3,"onivoro") == 0)
        puts("homem");
    else if(strcmp(palavra1,"vertebrado") == 0 && strcmp(palavra2,"mamifero") == 0 && strcmp(palavra3,"herbivoro") == 0)
        puts("vaca");
    else if(strcmp(palavra1,"invertebrado") == 0 && strcmp(palavra2,"inseto") == 0 && strcmp(palavra3,"hematofago") == 0)
        puts("pulga");
    else if(strcmp(palavra1,"invertebrado") == 0 && strcmp(palavra2,"inseto") == 0 && strcmp(palavra3,"herbivoro") == 0)
        puts("lagarta");
    else if(strcmp(palavra1,"invertebrado") == 0 && strcmp(palavra2,"anelideo") == 0 && strcmp(palavra3,"hematofago") == 0)
        puts("sanguessuga");
    else if(strcmp(palavra1,"invertebrado") == 0 && strcmp(palavra2,"anelideo") == 0 && strcmp(palavra3,"onivoro") == 0)
        puts("minhoca");
}

int main() {
    char palavra1[100], palavra2[100], palavra3[100];
    scanf("%s %s %s", palavra1, palavra2, palavra3);
    verificacao(palavra1, palavra2, palavra3);
}