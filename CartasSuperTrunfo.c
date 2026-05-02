#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
    char estado00;
    char cod_carta00[5];
    char nome_cidade00[20];
    int populacao00;
    float area00;
    float pib00;
    int quant_pontos_turisticos00;
    
  // Área para entrada de dados
    printf("VAMOS AO CADASTRO DA CARTA 1\nDigite uma letra de A a H para representar seu estado na carta:\n");
    scanf("%s", &estado00);

    printf("Insira a letra seguida por um número para formar um código para sua carta!\n");
    scanf("%s", cod_carta00);

    printf("Como chama sua cidade?\n");
    scanf("%s", nome_cidade00);

    printf("E o número de habitantes?\n ");
    scanf("%i", &populacao00);

    printf("Informe a área da sua cidade:\n");
    scanf("%f", &area00);

    printf("Digite o PIB:\n");
    scanf("%f", &pib00);

    printf("Quantos pontos turísticos tem sua cidade?\n");
    scanf("%i", &quant_pontos_turisticos00);

  // Área para exibição dos dados da cidade
    printf("CIDADE 1\n ");
    printf("Estado: %s \n", &estado00);
    printf("Código da carta: %s \n", &cod_carta00);
    printf("Nome da cidade: %s \n", &nome_cidade00);
    printf("População: %i \n", populacao00);
    printf("Área: %f \n", area00);
    printf("PIB: %f \n", pib00);
    printf("Pontos turísticos: %i \n", quant_pontos_turisticos00);
return 0;
} 
