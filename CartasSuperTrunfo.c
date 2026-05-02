#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
// Área para definição das variáveis para armazenar as propriedades das cidades (carta 1)
    char estado00;
    char cod_carta00[5];
    char nome_cidade00[20];
    int populacao00;
    float area00;
    float pib00;
    int quant_pontos_turisticos00;

// Área para definição das variáveis para armazenar as propriedades das cidades (carta 2)
    char estado01;
    char cod_carta01[5];
    char nome_cidade01[20];
    int populacao01;
    float area01;
    float pib01;
    int quant_pontos_turisticos01;  
    
// Área para entrada de dados (carta 1)
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

// Área para entrada de dados (carta 2)
    printf("AGORA VAMOS AO CADASTRO DA CARTA 2\nDigite uma letra de A a H para representar seu estado na carta:\n");
    scanf("%s", &estado01);

    printf("Insira a letra seguida por um número para formar um código para sua carta!\n");
    scanf("%s", cod_carta01);

    printf("Como chama sua cidade?\n");
    scanf("%s", nome_cidade01);

    printf("E o número de habitantes?\n ");
    scanf("%i", &populacao01);

    printf("Informe a área da sua cidade:\n");
    scanf("%f", &area01);

    printf("Digite o PIB:\n");
    scanf("%f", &pib01);

    printf("Quantos pontos turísticos tem sua cidade?\n");
    scanf("%i", &quant_pontos_turisticos01); 

// Área para exibição dos dados das cidades
    printf("\n\nCIDADE 1\n ");
    printf("Estado: %s \n", &estado00);
    printf("Código da carta: %s \n", &cod_carta00);
    printf("Nome da cidade: %s \n", &nome_cidade00);
    printf("População: %i \n", populacao00);
    printf("Área: %f \n", area00);
    printf("PIB: %f \n", pib00);
    printf("Pontos turísticos: %i \n\n", quant_pontos_turisticos00);

    printf("CARTA 2\n ");
    printf("Estado: %s \n", &estado01);
    printf("Código da carta: %s \n", &cod_carta01);
    printf("Nome da cidade: %s \n", &nome_cidade01);
    printf("População: %i \n", populacao01);
    printf("Área: %f \n", area01);
    printf("PIB: %f \n", pib01);
    printf("Pontos turísticos: %i \n\n\n", quant_pontos_turisticos01);

return 0;
} 
