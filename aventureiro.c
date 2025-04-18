#include <stdio.h>

int main() {
    char estado[8], codigo_carta[4], nome_cidade[50];
    int pop, pontos_turisticos;
    float area, pib, DP, PIBC;

    printf("Informe o estado: \n");
    scanf("%s", estado);

    printf("Informe o código: \n");
    scanf("%s", codigo_carta);

    printf("Informe o nome da cidade: \n");
    scanf("%s", nome_cidade);

    printf("Informe a população: \n");
    scanf("%d", &pop);

    printf("Informe a área: \n");
    scanf("%f", &area);

    printf("Informe o PIB: \n");
    scanf("%f", &pib);

    printf("Informe o número de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos);

    DP = pop / area;
    PIBC = pib / pop;

    printf("Carta 1: \n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo_carta);
    printf("Nome da cidade: %s\n", nome_cidade);
    printf("População: %d\n", pop);
    printf("Área: %.2f km²\n", area);
    printf("PIB: R$ %.2f milhões\n", pib);
    printf("Pontos turísticos: %d\n", pontos_turisticos);
    printf("Densidade populacional: %.2f hab/km²\n", DP);
    printf("PIB per capita: R$ %.2f\n", PIBC);

    return 0;
}
