#include <stdio.h>

int main() 
{char nome[50];   Barueri  
 char codigo[4];   A01
 int populacao;    316.473
float area km²;    64,17 
float pib;         4500000000
int pontosTuristicos; 12

char nome[50];  São Paulo
char codigo[4]; A02
int populacao; 11450000
float area km²; 1.523 
float pib;     699280000000
int pontosTuristicos; 250

char nome[50]; Avanhandava
char codigo[4]; A03
int populacao; 14063
float area km²; 340,338 
float pib;  199400000
int pontosTuristicos; 10

char nome[50]; União Paulista
char codigo[4]; A04
int populacao; 1 603
float area km²; 79,1 
float pib; 35 925 
int pontosTuristicos; 10

 printf("Insira os dados para a cidade %s (%s):\n", cidade,nome, cidade,codigo);

 printf("População: ");
    scanf("%d", &cidade,populacao);

    printf("Área (em km²): ");
    scanf("%f", &cidade,area);

    printf("PIB (em bilhões): ");
    scanf("%f", &cidade,pib);

    printf("Número de pontos turísticos: ");
    scanf("%d", &cidade,pontosTuristicos);

    printf("Cidade %s cadastrada com sucesso!\n\n", cidade,nome);



     printf("\nDados das cidades cadastradas:\n");
      printf("\n");

  printf("Nome: %s\n", cidades[i].nome);
        printf("Código: %s\n", cidades[i].codigo);
        printf("População: %d\n", cidades[i].populacao);
        printf("Área: %.2f km²\n", cidades[i].area);
        printf("PIB: %.2f bilhões\n", cidades[i].pib);
        printf("Pontos Turísticos: %d\n", cidades[i].pontosTuristicos);
        printf("\n");
    return 0;


}