#include <stdio.h>

int main() {

  // Variáveis  

    //Estado de A a H
    char estado;
    
    //Código da carta
    char carta[5];

    //Nome da cidade
    char cidade[50];

    // População
    int populacao;

    // Àrea em km
    float area;

    // PIB
    float pib;

    //Número de pontos turísticos
    int turismo;

  // funções

    printf("Olá jogador, boas vindas ao Super Trunfo.\n");
    printf("\nVamos selecionar sua primeira carta!\n\n");

    printf("Escolha um Estado de A a H: \n");
    scanf(" %c", &estado);


    printf("Escolha uma cidade: \n");
    scanf(" %s", cidade);

    printf("Qual a população dessa cidade? \n");
    scanf("%d", &populacao);

    printf("Qual a área da cidade? \n");
    scanf("%f", &area);

    printf("Qual o PIB da cidade?\n");
    scanf("%f", &pib);

    printf("Quantos pontos turísticos ela tem?\n");
    scanf("%d", &turismo);

    

    // Carta 2

      // Variáveis  

    //Estado de A a H
    char estado2;
    
    //Código da carta
    char carta2[5];

    //Nome da cidade
    char cidade2[50];

    // População
    int populacao2;

    // Àrea em km
    float area2;

    // PIB
    float pib2;

    //Número de pontos turísticos
    int turismo2;

  // funções

    printf("\nAgora, vamos selecionar sua segunda carta!\n\n");

    printf("Escolha um Estado de A a H: \n");
    scanf(" %c", &estado2);


    printf("Escolha uma cidade: \n");
    scanf(" %s", cidade2);

    printf("Qual a população dessa cidade? \n");
    scanf("%d", &populacao2);

    printf("Qual a área da cidade? \n");
    scanf("%f", &area2);

    printf("Qual o PIB da cidade?\n");
    scanf("%f", &pib2);

    printf("Quantos pontos turísticos ela tem?\n");
    scanf("%d", &turismo2);

    // Exibição para o usuário

    printf("\nAqui estão as suas cartas:\n");

    printf("\nCarta 1\n");

    printf("Estado: %c\n", estado);
    printf("Código: %c01\n", estado);
    printf("Nome da cidade: %s\n", cidade);
    printf("População: %d habitantes\n", populacao);
    printf("Área: %.0f km²\n", area);
    printf("PIB: R$%0.2f \n", pib);
    printf("Número de Pontos Turísticos:%d\n\n", turismo);


    printf("Carta 2\n");

    printf("Estado: %c\n", estado2);
    printf("Código: %c04\n", estado2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.0f km²\n", area2);
    printf("PIB: R$%0.2f \n", pib2);
    printf("Número de Pontos Turísticos:%d\n", turismo2);

    return 0;
    }