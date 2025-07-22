#include <stdio.h>
int main() {
    
    //variáveis da primeira carta
    char estado1[1], codigo1[4], cidade1[50];
    int populacao1, num_ponto_turistico1;
    float area1, pib1, densidade_populacional1, pib_per_capita1, super_poder1;

    //variáveis da segunda carta
    char estado2[1], codigo2[4], cidade2[50];
    int populacao2, num_ponto_turistico2;
    float area2, pib2, densidade_populacional2, pib_per_capita2, super_poder2;

    //Informações da primeira carta
    printf("Carta 1: \n");
    printf("Estado: ");
    scanf("%s", estado1);
    
    printf("Código da cidade: ");
    scanf("%s", codigo1);

    printf("Nome da cidade: ");
    scanf("%s", cidade1);

    printf("Informe a população: ");
    scanf("%d", &populacao1);

    printf("Informe a área: ");
    scanf("%f", &area1);

    printf("Informe o PIB: ");
    scanf("%f", &pib1);

    printf("Informe o número de ponto turístico: ");
    scanf("%d", &num_ponto_turistico1);

    //Informações da segunda carta
    printf("Carta 2: \n");
    printf("Estado: ");
    scanf("%s", estado2);
    
    printf("Código da cidade: ");
    scanf("%s", codigo2);

    printf("Nome da cidade: ");
    scanf("%s", cidade2);

    printf("Informe a população: ");
    scanf("%d", &populacao2);

    printf("Informe a área: ");
    scanf("%f", &area2);

    printf("Informe o PIB: ");
    scanf("%f", &pib2);

    printf("Informe o número de ponto turístico: ");
    scanf("%d", &num_ponto_turistico2);

    printf("-----------------------------------------------------------\n");

    int resultado_populacao_carta1 = populacao1 > populacao2;
    int resultado_area_carta1 = area1 > area2;
    int resultado_pib_carta1 = pib1 > pib2;
    int resultado_num_ponto_turistico_carta1 = num_ponto_turistico1 > num_ponto_turistico2;
    int resultado_densidade_populacional_carta1 = densidade_populacional1 > densidade_populacional2;
    int resultado_per_capita_carta1 = pib_per_capita1 > pib_per_capita2;
    int resultado_super_poder_carta1 = super_poder1 > super_poder2;

    int resultado_populacao_carta2 = populacao1 < populacao2;
    int resultado_area_carta2 = area1 < area2;
    int resultado_pib_carta2 = pib1 < pib2;
    int resultado_num_ponto_turistico_carta2 = num_ponto_turistico1 < num_ponto_turistico2;
    int resultado_densidade_populacional_carta2 = densidade_populacional1 < densidade_populacional2;
    int resultado_per_capita_carta2 = pib_per_capita1 < pib_per_capita2;
    int resultado_super_poder_carta2 = super_poder1 < super_poder2;

    //Exibição na tela dos dados da primeira carta
    printf("Carta 1:");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %d - Resultado: %d\n", populacao1, resultado_populacao_carta1);
    printf("Área: %.2f - Resultado: %d\n", area1, resultado_area_carta1);
    printf("PIB: %.2f - Resultado: %d\n", pib1, resultado_pib_carta1);
    printf("Número de pontos turísticos: %d - Resultado: %d\n", num_ponto_turistico1, resultado_num_ponto_turistico_carta1);

    //calcula a densidade populacional da primeira carta
    densidade_populacional1 = populacao1/area1;
    printf("Densidade populacional: %.2f - Resultado: %d\n", densidade_populacional1, resultado_densidade_populacional_carta1);

    //calcula o pib per capita
    pib_per_capita1 = pib1/populacao1;
    printf("PIB per capita: %.9f - Resultado: %d\n", pib_per_capita1, resultado_per_capita_carta1);

    //calculo super poder 
    super_poder1 = populacao1 + area1 + pib1 + num_ponto_turistico1 + densidade_populacional1 + pib_per_capita1;
    printf("Super poder: %.2f - Resultado: %d\n", super_poder1, resultado_super_poder_carta1);
    printf("-----------------------------------------------------------\n");
    
    //Exibição na tela dos dados da primeira carta
    printf("Carta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %d - Resultado: %d\n", populacao2, resultado_populacao_carta2);
    printf("Área: %.2f - Resultado: %d\n", area2, resultado_area_carta2);
    printf("PIB: %.2f - Resultado: %d\n", pib2, resultado_pib_carta2);
    printf("Número de pontos turísticos: %.2d - Resultado: %d\n", num_ponto_turistico2, resultado_num_ponto_turistico_carta2);

    //calcula a densidade populacional da segunda carta
    densidade_populacional2 = populacao2/area2;
    printf("Densidade populacional: %.2f - Resultado: %d\n", densidade_populacional2, resultado_densidade_populacional_carta2);

    //calcula o pib per capita
    pib_per_capita2 = pib2/populacao2;
    printf("PIB per capita: %.9f - Resultado: %d\n", pib_per_capita2, resultado_pib_carta2);

    //calculo super poder 
    super_poder2 = populacao2 + area2 + pib2 + num_ponto_turistico2 + densidade_populacional2 + pib_per_capita2;
    printf("Super poder: %.2f - Resultado: %d\n", super_poder2, resultado_super_poder_carta2);

    return 0;
}
