#include <stdio.h>
int main() {
    
    //variáveis da primeira carta
    char estado1;
    char codigo1[4]; 
    char cidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int num_ponto_turistico1;
    float densidade_populacional1, pib_per_capita1, super_poder1 = 0.0f;

    //variáveis da segunda carta
    char estado2;
    char codigo2[4]; 
    char cidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int num_ponto_turistico2;
    float densidade_populacional2, pib_per_capita2, super_poder2 = 0.0f;

    //Informações da primeira carta
        printf("Carta 1: \n");
        printf("Estado (A-H): ");
        scanf(" %c", &estado1);
    
        printf("Código da cidade: ");
        scanf("%s", codigo1);

        printf("Nome da cidade: ");
        scanf(" %49[^\n]", cidade1);

        printf("Informe a população: ");
        scanf("%lu", &populacao1);

        printf("Informe a área: ");
        scanf("%f", &area1);

        printf("Informe o PIB: ");
        scanf("%f", &pib1);

        printf("Informe o número de ponto turístico: ");
        scanf("%d", &num_ponto_turistico1);

        //Informações da segunda carta
        printf("Carta 2: \n");
        printf("Estado (A-H): ");
        scanf(" %c", &estado2);
        
        printf("Código da cidade: ");
        scanf("%s", codigo2);

        printf("Nome da cidade: ");
        scanf(" %49[^\n]", cidade2);

        printf("Informe a população: ");
        scanf("%lu", &populacao2);

        printf("Informe a área: ");
        scanf("%f", &area2);

        printf("Informe o PIB: ");
        scanf("%f", &pib2);

        printf("Informe o número de ponto turístico: ");
        scanf("%d", &num_ponto_turistico2);

        printf("-----------------------------------------------------------\n");

    //Calculo da densidade populacionar da primeira carta e proteção contra divisão por zero
    if (area1 > 0) {
        densidade_populacional1 = (float)populacao1/area1;
    } else {
        densidade_populacional1 = 0.0f;
    }

    //Calculo do PIB per capita da primeira carta
    if (populacao1 > 0) {
        pib_per_capita1 = (float)(pib1 * 1000000000.0f)/populacao1;
    } else {
        pib_per_capita1 = 0.0f;
    }

    //Calculo do super poder carta 1
    float inverso_densidade1 = 0.0f;
    if (densidade_populacional1 > 0) {
        inverso_densidade1 = 1.0f/densidade_populacional1;
    }
        super_poder1 = populacao1 + area1 + pib1 + num_ponto_turistico1 + inverso_densidade1 + pib_per_capita1;

    //Calculo do super poder carta 2
    float inverso_densidade2 = 0.0f;
    if (densidade_populacional2 > 0) {
        inverso_densidade2 = 1.0f/densidade_populacional2;
    }
        super_poder2 = populacao2 + area2 + pib2 + num_ponto_turistico2 + inverso_densidade2 + pib_per_capita2;

    //Exibição da CARTA 1
    printf("CARTA 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código da carta: %s\n", codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Número de pontos turísticos: %d\n", num_ponto_turistico1);
    printf("Densidade populacional: %.2f\n", densidade_populacional1);
    printf("PIB per capita: %.2f\n", pib_per_capita1);
    printf("Super Poder: %.2f\n", super_poder1);
    printf("----------------------------------------------------------\n");

    //Calculo da densidade populacionar da segunda carta e proteção contra divisão por zero
    if (area2 > 0) {
        densidade_populacional2 = (float)populacao2/area2;
    } else {
        densidade_populacional2 = 0.0f;
    }

    //Calculo do PIB per capita da primeira carta
    if (populacao2 > 0) {
        pib_per_capita2 = (float)(pib2 * 1000000000.0f)/populacao2;
    } else {
        pib_per_capita2 = 0.0f;
    }

    //Exibição da CARTA 2
    printf("CARTA 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código da carta: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Número de pontos turísticos: %d\n", num_ponto_turistico2);
    printf("Densidade populacional: %.2f\n", densidade_populacional2);
    printf("PIB per capita: %.2f\n", pib_per_capita2);
    printf("Super Poder: %.2f\n", super_poder2);
    printf("----------------------------------------------------------\n");

    //Início do Switch/case
    int opcao;

        printf("Menu Principal\n");
        printf("1 - Atributo População\n");
        printf("2 - Atributo Área\n");
        printf("3 - Atributo PIB\n");
        printf("4 - Atributo Número de pontos turísticos\n");
        printf("5 - Atributo Densidade demográfica\n");
        printf("6 - Atributo Per capita\n");
        printf("7 - Atributo Super poder\n");
        printf("8 - Sair\n");
        printf("Escolha um atributo de comparação: ");
        scanf("%d", &opcao);
        printf("----------------------------------------------------\n");

    switch (opcao) {
    case 1: //Atributo população
        //se a população da carta 1 for maior do que da carta 2 a carta 1 vence
        if (populacao1 > populacao2) {
            printf("Atributo: População\n");
            printf("Comparação das cartas (Atributo: População)\n");
            printf("Carta 1 - %s - População: %lu\n", cidade1, populacao1);
            printf("Carta 2 - %s - População: %lu\n", cidade2, populacao2);
            printf("Resultado: Carta 1 %s venceu!!!\n", cidade1);
            printf("-------------------------------------------------\n");

        } else if (populacao1 == populacao2) {
            printf("Atributo: População\n");
            printf("Comparação das cartas (Atributo: População)\n");
            printf("Carta 1 - %s - População: %lu\n", cidade1, populacao1);
            printf("Carta 2 - %s - População: %lu\n", cidade2, populacao2);
            printf("Resultado: Empate!!!\n");
            printf("-------------------------------------------------\n");

        } else { //senão a carta 2 vence
            printf("Atributo: População\n");
            printf("Comparação das cartas (Atributo: População)\n");
            printf("Carta 1 - %s - População: %lu\n", cidade1, populacao1);
            printf("Carta 2 - %s - População: %lu\n", cidade2, populacao2);
            printf("Resultado: Carta 2 %s venceu!!!\n", cidade2);
            printf("-------------------------------------------------\n");
        }

        break;
    case 2: //Atributo área
        //se a área da carta 1 for maior do que da carta 2 a carta 1 vence
        if (area1 > area2) {
            printf("Atributo: Área\n");
            printf("Comparação das cartas (Atributo: Área)\n");
            printf("Carta 1 - %s - Área: %.2f\n", cidade1, area1);
            printf("Carta 2 - %s - Área: %.2f\n", cidade2, area2);
            printf("Resultado: Carta 1 %s venceu!!!\n", cidade1);
            printf("-------------------------------------------------\n");

        } else if (area1 == area2) {
            printf("Atributo: Área\n");
            printf("Comparação das cartas (Atributo: Área)\n");
            printf("Carta 1 - %s - Área: %.2f\n", cidade1, area1);
            printf("Carta 2 - %s - Área: %.2f\n", cidade2, area2);
            printf("Resultado: Empate!!!\n");
            printf("-------------------------------------------------\n");

        } else { //senão a carta 2 vence
            printf("Atributo: Área\n");
            printf("Comparação das cartas (Atributo: Área)\n");
            printf("Carta 1 - %s - Área: %.2f\n", cidade1, area1);
            printf("Carta 2 - %s - Área: %.2f\n", cidade2, area2);
            printf("Resultado: Carta 2 %s venceu!!!\n", cidade2);
            printf("-------------------------------------------------\n");
        }
        break;
    
    case 3: //Atributo número de pontos turísticos
        //se o PIB da carta 1 for maior do que da carta 2 a carta 1 vence
        if (pib1 > pib2) {
            printf("Atributo: PIB\n");
            printf("Comparação das cartas (Atributo: PIB)\n");
            printf("Carta 1 - %s - PIB: %.2f\n", cidade1, pib1);
            printf("Carta 2 - %s - PIB: %.2f\n", cidade2, pib2);
            printf("Resultado: Carta 1 %s venceu!!!\n", cidade1);
            printf("-------------------------------------------------\n");

        } else if (pib1 == pib2) { 
            printf("Atributo: PIB\n");
            printf("Comparação das cartas (Atributo: PIB)\n");
            printf("Carta 1 - %s - PIB: %.2f\n", cidade1, pib1);
            printf("Carta 2 - %s - PIB: %.2f\n", cidade2, pib2);
            printf("Resultado: Empate!!!\n");
            printf("-------------------------------------------------\n");

        } else { //senão a carta 2 vence
            printf("Atributo: PIB\n");
            printf("Comparação das cartas (Atributo: PIB)\n");
            printf("Carta 1 - %s - PIB: %.2f\n", cidade1, pib1);
            printf("Carta 2 - %s - PIB: %.2f\n", cidade2, pib2);
            printf("Resultado: Carta 2 %s venceu!!!\n", cidade2);
            printf("-------------------------------------------------\n");
        }
        break;
    
    case 4: //Atributo número de pontos turísticos
        //se o número de pontos turísticos da carta 1 for maior do que da carta 2 a carta 1 vence
        if (num_ponto_turistico1 > num_ponto_turistico2) {
            printf("Atributo: Número de pontos turísticos\n");
            printf("Comparação das cartas (Atributo: Número de pontos turísticos)\n");
            printf("Carta 1 - %s - Número de pontos turísticos: %d\n", cidade1, num_ponto_turistico1);
            printf("Carta 2 - %s - Número de pontos turísticos: %d\n", cidade2, num_ponto_turistico2);
            printf("Resultado: Carta 1 %s venceu!!!\n", cidade1);
            printf("-------------------------------------------------\n");

        } else if (num_ponto_turistico1 == num_ponto_turistico2) {
            printf("Atributo: Número de pontos turísticos\n");
            printf("Comparação das cartas (Atributo: Número de pontos turísticos)\n");
            printf("Carta 1 - %s - Número de pontos turísticos: %d\n", cidade1, num_ponto_turistico1);
            printf("Carta 2 - %s - Número de pontos turísticos: %d\n", cidade2, num_ponto_turistico2);
            printf("Resultado: Empate!!!\n");
            printf("-------------------------------------------------\n");

        } else { //senão a carta 2 vence
            printf("Atributo: Número de pontos turísticos\n");
            printf("Comparação das cartas (Atributo: Número de pontos turísticos)\n");
            printf("Carta 1 - %s - Número de pontos turísticos: %d\n", cidade1, num_ponto_turistico1);
            printf("Carta 2 - %s - Número de pontos turísticos: %d\n", cidade2, num_ponto_turistico2);
            printf("Resultado: Carta 2 %s venceu!!!\n", cidade2);
            printf("-------------------------------------------------\n");
        }
        break;

    case 5: //Atributo densidade populacional
        //se a desidade populacional da carta 1 for maior do que da carta 2 a carta 2 vence
        if (densidade_populacional1 < densidade_populacional2) {
            printf("Atributo: Densidade demográfica\n");
            printf("Comparação das cartas (Atributo: Densidade demográfica)\n");
            printf("Carta 1 - %s - Densidade demográfica: %.2f\n", cidade1, densidade_populacional1);
            printf("Carta 2 - %s - Densidade demográfica: %.2f\n", cidade2, densidade_populacional2);
            printf("Resultado: Carta 1 %s venceu!!!\n", cidade1);
            printf("-------------------------------------------------\n");

        } else if (densidade_populacional1 == densidade_populacional2) {
            printf("Atributo: Desidade demográfica\n");
            printf("Comparação das cartas (Atributo: Densidade demográfica)\n");
            printf("Carta 1 - %s - Densidade demográfica: %.2f\n", cidade1, densidade_populacional1);
            printf("Carta 2 - %s - Densidade demográfica: %.2f\n", cidade2, densidade_populacional2);
            printf("Resultado: Empate!!!\n");
            printf("-------------------------------------------------\n");

        } else { //senão a carta 2 vence
            printf("Atributo: Densidade demográfica\n");
            printf("Comparação das cartas (Atributo: Densidade demográfica)\n");
            printf("Carta 1 - %s - Densidade demográfica: %.2f\n", cidade1, densidade_populacional1);
            printf("Carta 2 - %s - Densidade demográfica: %.2f\n", cidade2, densidade_populacional2);
            printf("Resultado: Carta 2 %s venceu!!!\n", cidade2);
            printf("-------------------------------------------------\n");
        }
        break;

    case 6: //Atributo Per capita
        //se super poder da carta 1 for maior do que da carta 2 a carta 1 vence
        if (super_poder1 > super_poder2) {
            printf("Atributo: Super Poder\n");
            printf("Comparação das cartas (Atributo: Super Poder)\n");
            printf("Carta 1 - %s - Super Poder: %.2f\n", cidade1, super_poder1);
            printf("Carta 2 - %s - Super Poder: %.2f\n", cidade2, super_poder2);
            printf("Resultado: Carta 1 %s venceu!!!\n", cidade1);
            printf("-------------------------------------------------\n");

        } else if (super_poder1 == super_poder2) {
            printf("Atributo: Super Poder\n");
            printf("Comparação das cartas (Atributo: Super Poder)\n");
            printf("Carta 1 - %s - Super Poder: %.2f\n", cidade1, super_poder1);
            printf("Carta 2 - %s - Super Poder: %.2f\n", cidade2, super_poder2);
            printf("Resultado: Empate!!!\n");
            printf("-------------------------------------------------\n");

        } else { //senão a carta 2 vence
            printf("Atributo: Super Poder\n");
            printf("Comparação das cartas (Atributo: Super Poder)\n");
            printf("Carta 1 - %s - Super Poder: %.2f\n", cidade1, super_poder1);
            printf("Carta 2 - %s - Super Poder: %.2f\n", cidade2, super_poder2);
            printf("Resultado: Carta 2 %s venceu!!!\n", cidade2);
            printf("-------------------------------------------------\n");
        }
        break;
        
    case 7:
        printf("Você saiu do sistema...\n");
        printf("----------------------------------------------------\n");
        break;
    default:
    printf("Opção inválida! Tente novamente.\n");
    printf("----------------------------------------------------\n");

    } //Fim do Switch/case
    return 0;  
}
