#include <stdio.h>

int main() {
    unsigned char estado1[8], codigo_carta1[4], nome_cidade1[50], estado2[8], codigo_carta2[4], nome_cidade2[50];
    unsigned int pop1, pontos_turisticos1, pop2, pontos_turisticos2;
    float area1, pib1, DP1, PIBC1, SuperPoder1, area2, pib2, DP2, PIBC2, SuperPoder2;

    printf("Informe o estado: \n");
    scanf("%s", estado1);
    printf("Informe o código: \n");
    scanf("%s", codigo_carta1);
    printf("Informe o nome da cidade: \n");
    scanf("%s", nome_cidade1);
    printf("Informe a população: \n");
    scanf("%u", &pop1);
    printf("Informe a área: \n");
    scanf("%f", &area1);
    printf("Informe o PIB: \n");
    scanf("%f", &pib1);
    printf("Informe o número de pontos turísticos: \n");
    scanf("%u", &pontos_turisticos1);

    DP1 = pop1 / area1;
    PIBC1 = pib1 / pop1;
    SuperPoder1 = (pop1 + area1 + pib1 + pontos_turisticos1 + DP1 + PIBC1);

    printf("Carta 1: \n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo_carta1);
    printf("Nome da cidade: %s\n", nome_cidade1);
    printf("População: %u\n", pop1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: R$ %.2f milhões\n", pib1);
    printf("Pontos turísticos: %u\n", pontos_turisticos1);
    printf("Densidade populacional: %.2f hab/km²\n", DP1);
    printf("PIB per capita: R$ %.2f\n", PIBC1);
    printf("Seu especial é: %.2f\n", SuperPoder1);

    printf("Informe o estado: \n");
    scanf("%s", estado2);
    printf("Informe o código: \n");
    scanf("%s", codigo_carta2);
    printf("Informe o nome da cidade: \n");
    scanf("%s", nome_cidade2);
    printf("Informe a população: \n");
    scanf("%u", &pop2);
    printf("Informe a área: \n");
    scanf("%f", &area2);
    printf("Informe o PIB: \n");
    scanf("%f", &pib2);
    printf("Informe o número de pontos turísticos: \n");
    scanf("%u", &pontos_turisticos2);

    DP2 = pop2 / area2;
    PIBC2 = pib2 / pop2;
    SuperPoder2 = (pop2 + area2 + pib2 + pontos_turisticos2 + DP2 + PIBC2);

    printf("Carta 2: \n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo_carta2);
    printf("Nome da cidade: %s\n", nome_cidade2);
    printf("População: %u\n", pop2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$ %.2f milhões\n", pib2);
    printf("Pontos turísticos: %d\n", pontos_turisticos2);
    printf("Seu especial é: %.2f\n", SuperPoder2);

    printf("Comparação das cartas: \n");

    printf("Carta 1 - %s: %u\n", nome_cidade1, pop1);
    printf("Carta 2 - %s: %u\n", nome_cidade2, pop2);
    if (pop1 > pop2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nome_cidade1);
        } else {
            printf("Resultado: Carta 2 (%s) venceu!\n", nome_cidade2);
    }
    
    printf("Carta 1 - %s: %.2f\n", nome_cidade1, area1);
    printf("Carta 2 - %s: %.2f\n", nome_cidade2, area2);
    if (area1 > area2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nome_cidade1);
        } else {
            printf("Resultado: Carta 2 (%s) venceu!\n", nome_cidade2);
    }

    printf("Carta 1 - %s: %.2f\n", nome_cidade1, pib1);
    printf("Carta 2 - %s: %.2f\n", nome_cidade2, pib2);
    if (pib1 > pib2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nome_cidade1);
        } else {
            printf("Resultado: Carta 2 (%s) venceu!\n", nome_cidade2);
        }
    
    printf("Carta 1 - %s: %.2f\n", nome_cidade1, DP1);
    printf("Carta 2 - %s: %.2f\n", nome_cidade2, DP2);
    if (DP1 < DP2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nome_cidade1);
        } else {
            printf("Resultado: Carta 2 (%s) venceu!\n", nome_cidade2);
            }
    
    printf("Carta 1 - %s: %.2f\n", nome_cidade1, PIBC1);
    printf("Carta 2 - %s: %.2f\n", nome_cidade2, PIBC2);
    if (PIBC1 > PIBC2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nome_cidade1);
        } else {
            printf("Resultado: Carta 2 (%s) venceu!\n", nome_cidade2);
            }
    return 0;
}