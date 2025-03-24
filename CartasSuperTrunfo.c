#include <stdio.h>

int main() {
    // Declaração de variáveis
    char estado; // // Armazena o nome do estado 
    char codigo_carta[4]; // Armazena um código 
    char nome_cidade[50]; // Armazena o nome da cidade
    int pop;// Armazena a população da cidade
    float area; // Armazena a área da cidade em km²
    float pib; // Armazena o PIB da cidade
    int pontos_turisticos; // Armazena a quantidade de pontos turísticos da cidade

    // Solicitação e leitura dos dados do usuário
    printf("Informe o estado: \n");
    scanf("%c", estado);

    printf("Informe o código: \n");
    scanf("%s", codigo_carta);

    printf("Informe o nome da cidade: \n");
    scanf("%s", nome_cidade); // Problema: scanf("%s") não captura espaços em nomes compostos

    printf("Informe a população: \n");
    scanf("%d", &pop);

    printf("Informe a área: \n");
    scanf("%f", &area);

    printf("Informe o PIB: \n");
    scanf("%f", &pib);

    printf("Informe o número de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos);

     // Exibição dos dados da primeira carta
    printf("Carta 1: \n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo_carta);
    printf("Nome da cidade: %s\n", nome_cidade);
    printf("População: %d\n", pop);
    printf("Área: %f km²\n", area);
    printf("PIB: R$ %f bilhões de reais\n", pib);
    printf("Pontos turísticos: %d\n", pontos_turisticos);

    // Exibição dos dados da segunda carta (com erro na unidade de PIB)
    printf("Carta 2: \n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo_carta);
    printf("Nome da cidade: %s\n", nome_cidade);
    printf("População: %d\n", pop);
    printf("Área: %f km²\n", area);
    printf("PIB: R$ %f bilhões de reais\n", pib);
    printf("Pontos turísticos: %d\n", pontos_turisticos);
    

    return 0;
}
