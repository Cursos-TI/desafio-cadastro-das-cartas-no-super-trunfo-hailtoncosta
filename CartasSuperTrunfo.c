#include <stdio.h>
int main() {
    
    //variáveis da primeira carta
    char estado1[1], codigo1[4], cidade1[50];
    int populacao1, num_ponto_turistico1;
    float area1, pib1;

    //variáveis da segunda carta
    char estado2[1], codigo2[4], cidade2[50];
    int populacao2, num_ponto_turistico2;
    float area2, pib2;

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

    //Exibição na tela dos dados da primeira carta
    printf("Carta 1:");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Número de pontos turísticos: %d\n", num_ponto_turistico1);

    //calcula a densidade populacional da primeira carta
    float densidade_populacional1 = populacao1/area1;
    printf("Densidade populacional: %.2f\n", densidade_populacional1);

    //calcula o pib per capita
    float pib_per_capita1 = pib1/populacao1;
    printf("PIB per capita: %.9f\n", pib_per_capita1);
    printf("-----------------------------------------------------------\n");
    
    //Exibição na tela dos dados da primeira carta
    printf("Carta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Número de pontos turísticos: %.2d\n", num_ponto_turistico2);

    //calcula a densidade populacional da segunda carta
    float densidade_populacional2 = populacao2/area2;
    printf("Densidade populacional: %.2f\n", densidade_populacional2);

    //calcula o pib per capita
    float pib_per_capita2 = pib2/populacao2;
    printf("PIB per capita: %.9f", pib_per_capita2);

    return 0;
}
