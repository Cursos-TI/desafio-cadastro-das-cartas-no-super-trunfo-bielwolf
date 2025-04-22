#include <stdio.h>

int main() {
    unsigned char estado1[8], codigo_carta1[4], nome_cidade1[50], estado2[8], codigo_carta2[4], nome_cidade2[50];
    unsigned int pop1, pontos_turisticos1, pop2, pontos_turisticos2, opcao, escolha;
    float area1, pib1, DP1, PIBC1, SuperPoder1, area2, pib2, DP2, PIBC2, SuperPoder2;

    printf("### Bem-vindo(a) ao jogo Super-Trunfo ###\n");
    printf("1. Iniciar Jogo\n2. Ver regras\n");
    printf("Escolha uma opção: ");
    scanf("%u", &opcao);
    switch (opcao)
    {
    case 1:
        printf("### Jogo iniciado ###\n");
        break;
    case 2:
        printf("### Regras do Jogo ###\n");
        printf("A regra geral é: vence a carta com o maior valor no atributo escolhido. Porém, para a Densidade Demográfica, a regra inverte: vence a carta com o menor valor.\n");
        break;
    default:
        break;
    }

    printf("Insira as seguintes informações\n");

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

    printf("### Carta 1 ### \n");
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

    printf("### Carta 2 ###\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo_carta2);
    printf("Nome da cidade: %s\n", nome_cidade2);
    printf("População: %u\n", pop2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$ %.2f milhões\n", pib2);
    printf("Pontos turísticos: %d\n", pontos_turisticos2);
    printf("Seu especial é: %.2f\n", SuperPoder2);

    printf("Hora de comparar as cartas!\n");
    printf("1. População\n2. Área\n3. PIB\n4. Pontos turísticos\n5. Densidade demográfica\n");
    printf("Escolha: ");
    scanf("%d", &escolha);

    switch (escolha) {
        case 1:
            printf("%s vs %s\n", estado1, estado2);
            printf("O atributo escolhido foi População\n");
            printf("Comparação: %u vs %u\n", pop1, pop2);
            pop1 == pop2 ? printf("Empate!\nNão há um vencedor em termos de população.\n")
                         : printf("O %s venceu o %s\nem termos de população.\n", (pop1 > pop2 ? estado1 : estado2), (pop1 < pop2 ? estado1 : estado2));
            break;
        case 2:
            printf("%s vs %s\n", estado1, estado2);
            printf("O atributo escolhido foi Área\n");
            printf("Comparação: %.2f vs %.2f\n", area1, area2);
            area1 == area2 ? printf("Empate!\nNão há um vencedor em termos de área.\n")
                           : printf("O %s venceu o %s\nem termos de área.\n", (area1 > area2 ? estado1 : estado2), (area1 < area2 ? estado1 : estado2));
            break;
        case 3:
            printf("%s vs %s\n", estado1, estado2);
            printf("O atributo escolhido foi PIB\n");
            printf("Comparação: %.2f vs %.2f\n", pib1, pib2);
            pib1 == pib2 ? printf("Empate!\nNão há um vencedor em termos de PIB.\n")
                         : printf("O %s venceu o %s\nem termos de PIB.\n", (pib1 > pib2 ? estado1 : estado2), (pib1 < pib2 ? estado1 : estado2));
            break;
        case 4:
            printf("%s vs %s\n", estado1, estado2);
            printf("O atributo escolhido foi Pontos Turísticos\n");
            printf("Comparação: %u vs %u\n", pontos_turisticos1, pontos_turisticos2);
            pontos_turisticos1 == pontos_turisticos2 ? printf("Empate!\nNão há um vencedor em termos de pontos turísticos.\n")
                                                     : printf("O %s venceu o %s\nem termos de pontos turísticos.\n", (pontos_turisticos1 > pontos_turisticos2 ? estado1 : estado2), (pontos_turisticos1 < pontos_turisticos2 ? estado1 : estado2));
            break;
        case 5:
            printf("%s vs %s\n", estado1, estado2);
            printf("O atributo escolhido foi Densidade\n");
            printf("Comparação: %.2f vs %.2f\n", DP1, DP2);
            DP1 == DP2 ? printf("Empate!\nNão há um vencedor em termos de densidade populacional.\n")
                       : printf("O %s venceu o %s\nem termos de densidade populacional.\n", (DP1 < DP2 ? estado1 : estado2), (DP1 > DP2 ? estado1 : estado2));
            break;
        default:
            printf("Opção inválida. Por favor, escolha uma opção válida.\n");
            break;
    }
    return 0;
}