#include <stdio.h>

int main() {
    unsigned char estado1[8], codigo_carta1[4], nome_cidade1[50], estado2[8], codigo_carta2[4], nome_cidade2[50], nome[2] = {"carta 2, carta 1"};
    unsigned int pop1, pontos_turisticos1, pop2, pontos_turisticos2;
    float area1, pib1, DP1, PIBC1, SuperPoder1, area2, pib2, DP2, PIBC2, SuperPoder2;

    printf("Informe o estado: \n");
    scanf("%s", estado1);
    printf("Informe o código: \n");
    scanf("%s", codigo_carta1);
    printf("Informe o nome da cidade: \n");
    scanf("%s", nome_cidade1);
    printf("Informe a população: \n");
    scanf("%d", &pop1);
    printf("Informe a área: \n");
    scanf("%f", &area1);
    printf("Informe o PIB: \n");
    scanf("%f", &pib1);
    printf("Informe o número de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos1);

    DP1 = pop1 / area1;
    PIBC1 = pib1 / pop1;
    SuperPoder1 = (pop1 + area1 + pib1 + pontos_turisticos1 + DP1 + PIBC1);

    printf("Carta 1: \n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo_carta1);
    printf("Nome da cidade: %s\n", nome_cidade1);
    printf("População: %d\n", pop1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: R$ %.2f milhões\n", pib1);
    printf("Pontos turísticos: %d\n", pontos_turisticos1);
    printf("Densidade populacional: %.2f hab/km²\n", DP1);
    printf("PIB per capita: R$ %.2f\n", PIBC1);
    printf("Seu especial é: %f\n", SuperPoder1);

    printf("Informe o estado: \n");
    scanf("%s", estado2);
    printf("Informe o código: \n");
    scanf("%s", codigo_carta2);
    printf("Informe o nome da cidade: \n");
    scanf("%s", nome_cidade2);
    printf("Informe a população: \n");
    scanf("%d", &pop2);
    printf("Informe a área: \n");
    scanf("%f", &area2);
    printf("Informe o PIB: \n");
    scanf("%f", &pib2);
    printf("Informe o número de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos2);

    DP2 = pop2 / area2;
    PIBC2 = pib2 / pop2;
    SuperPoder2 = (pop2 + area2 + pib2 + pontos_turisticos2 + DP2 + PIBC2);

    printf("Carta 2: \n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo_carta2);
    printf("Nome da cidade: %s\n", nome_cidade2);
    printf("População: %d\n", pop2);
    printf("Área: %2f km²\n", area2);
    printf("PIB: R$ %f milhões\n", pib2);
    printf("Pontos turísticos: %d\n", pontos_turisticos2);
    printf("Seu especial é: %f\n", SuperPoder2);

    printf("Comparação das cartas: ");
    printf("População: %s venceu (%d)\n", nome[pop1 > pop2], pop1 > pop2);
    printf("Área: %s venceu (%d)\n", nome[area1 > area2], area1 > area2);
    printf("PIB: %s venceu (%d)\n", nome[pib1 > pib2], pib1 > pib2);
    printf("Pontos Turisticos: %s venceu (%d)\n", nome[pontos_turisticos1 > pontos_turisticos2], pontos_turisticos1 > pontos_turisticos2);
    printf("Densidade Populacional: %s venceu (%d)\n", nome[DP1 > DP2], DP1 > DP2);
    printf("PIB per capita: %s venceu (%d)\n", nome[PIBC1 > PIBC2], PIBC1 > PIBC2);
    printf("Super Poder: %s venceu (%d)\n", nome[SuperPoder1 > SuperPoder2], SuperPoder1 > SuperPoder2);

    return 0;
}