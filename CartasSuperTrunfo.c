#include <stdio.h>
int main() {
    
    //variáveis da primeira carta
    char estado1[2] = "A";
    char codigo1[5] = "A01"; 
    char cidade1[20] = "São Paulo";
    int populacao1 = 12325000;
    float area1 = 1521.11;
    float pib1 = 699.28;
    int num_ponto_turistico1 = 50;
    float densidade_populacional1, pib_per_capita1, super_poder1;

    //variáveis da segunda carta
    char estado2[2] = "B";
    char codigo2[5] = "B02"; 
    char cidade2[20] = "Rio de Janeiro";
    int populacao2 = 6748000;
    float area2 = 1200.25;
    float pib2 = 300.50;
    int num_ponto_turistico2 = 30;
    float densidade_populacional2, pib_per_capita2, super_poder2;

    int opcao;

    printf("Menu Principal\n");
    printf("1 - Atributo População\n");
    printf("2 - Atributo Área\n");
    printf("3 - Atributo PIB\n");
    printf("4 - Atributo Número de pontos turísticos\n");
    printf("5 - Atributo Densidade demográfica\n");
    printf("6 - Sair\n");
    printf("Escolha um atributo de comparação: ");
    scanf("%d", &opcao);
    printf("----------------------------------------------------\n");

    switch (opcao) {
    case 1: //Atributo população
        /*
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
        */
        //Exibição na tela dos dados da primeira carta
        printf("Carta 1:\n");
        printf("Estado: %s\n", estado1);
        printf("Código: %s\n", codigo1);
        printf("Nome da cidade: %s\n", cidade1);
        printf("População: %d\n", populacao1);
        printf("Área: %.2f\n", area1);
        printf("PIB: %.2f\n", pib1);
        printf("Número de pontos turísticos: %d\n", num_ponto_turistico1);

        //calcula a densidade populacional da primeira carta
        densidade_populacional1 = populacao1/area1;
        printf("Densidade populacional: %.2f\n", densidade_populacional1);

        //calcula o pib per capita
        pib_per_capita1 = pib1/populacao1;
        printf("PIB per capita: %.9f\n", pib_per_capita1);

        //calculo super poder 
        super_poder1 = populacao1 + area1 + pib1 + num_ponto_turistico1 + densidade_populacional1 + pib_per_capita1;
        printf("Super poder: %.2f\n", super_poder1);
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
        densidade_populacional2 = populacao2/area2;
        printf("Densidade populacional: %.2f\n", densidade_populacional2);

        //calcula o pib per capita
        pib_per_capita2 = pib2/populacao2;
        printf("PIB per capita: %.9f\n", pib_per_capita2);

        //calculo super poder 
        super_poder2 = populacao2 + area2 + pib2 + num_ponto_turistico2 + densidade_populacional2 + pib_per_capita2;
        printf("Super poder: %.2f\n", super_poder2);
        printf("----------------------------------------------------\n");

        //se a população da carta 1 for maior do que da carta 2 a carta 1 vence
        if (populacao1 > populacao2) {
            printf("Pais %s - %s / País %s - %s ", estado1, cidade1, estado2, cidade2);
            printf("Atributo: População\n");
            printf("Comparação das cartas (Atributo: População)\n");
            printf("Carta 1 - %s - População: %d\n", cidade1, populacao1);
            printf("Carta 2 - %s - População: %d\n", cidade2, populacao2);
            printf("Resultado: Carta 1 %s venceu!!!\n", cidade1);
            printf("-------------------------------------------------\n");

        } else if (populacao1 == populacao2) {
            printf("Pais %s - %s / País %s - %s ", estado1, cidade1, estado2, cidade2);
            printf("Atributo: População\n");
            printf("Comparação das cartas (Atributo: População)\n");
            printf("Carta 1 - %s - População: %d\n", cidade1, populacao1);
            printf("Carta 2 - %s - População: %d\n", cidade2, populacao2);
            printf("Resultado: Empate!!!\n");
            printf("-------------------------------------------------\n");

        } else { //senão a carta 2 vence
            printf("Pais %s - %s / País %s - %s ", estado1, cidade1, estado2, cidade2);
            printf("Atributo: População\n");
            printf("Comparação das cartas (Atributo: População)\n");
            printf("Carta 1 - %s - População: %d\n", cidade1, populacao1);
            printf("Carta 2 - %s - População: %d\n", cidade2, populacao2);
            printf("Resultado: Carta 2 %s venceu!!!\n", cidade2);
            printf("-------------------------------------------------\n");
        }

        break;
    case 2: //Atributo área

        //Exibição na tela dos dados da primeira carta
        printf("Carta 1:\n");
        printf("Estado: %s\n", estado1);
        printf("Código: %s\n", codigo1);
        printf("Nome da cidade: %s\n", cidade1);
        printf("População: %d\n", populacao1);
        printf("Área: %.2f\n", area1);
        printf("PIB: %.2f\n", pib1);
        printf("Número de pontos turísticos: %d\n", num_ponto_turistico1);

        //calcula a densidade populacional da primeira carta
        densidade_populacional1 = populacao1/area1;
        printf("Densidade populacional: %.2f\n", densidade_populacional1);

        //calcula o pib per capita
        pib_per_capita1 = pib1/populacao1;
        printf("PIB per capita: %.9f\n", pib_per_capita1);

        //calculo super poder 
        super_poder1 = populacao1 + area1 + pib1 + num_ponto_turistico1 + densidade_populacional1 + pib_per_capita1;
        printf("Super poder: %.2f\n", super_poder1);
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
        densidade_populacional2 = populacao2/area2;
        printf("Densidade populacional: %.2f\n", densidade_populacional2);

        //calcula o pib per capita
        pib_per_capita2 = pib2/populacao2;
        printf("PIB per capita: %.9f\n", pib_per_capita2);

        //calculo super poder 
        super_poder2 = populacao2 + area2 + pib2 + num_ponto_turistico2 + densidade_populacional2 + pib_per_capita2;
        printf("Super poder: %.2f\n", super_poder2);
        printf("----------------------------------------------------\n");

        //se a população da carta 1 for maior do que da carta 2 a carta 1 vence
        if (area1 > area2) {
            printf("Pais %s - %s / País %s - %s ", estado1, cidade1, estado2, cidade2);
            printf("Atributo: Área\n");
            printf("Comparação das cartas (Atributo: Área)\n");
            printf("Carta 1 - %s - Área: %.2f\n", cidade1, area1);
            printf("Carta 2 - %s - Área: %.2f\n", cidade2, area2);
            printf("Resultado: Carta 1 %s venceu!!!\n", cidade1);
            printf("-------------------------------------------------\n");

        } else if (area1 == area2) {
            printf("Pais %s - %s / País %s - %s ", estado1, cidade1, estado2, cidade2);
            printf("Atributo: Área\n");
            printf("Comparação das cartas (Atributo: Área)\n");
            printf("Carta 1 - %s - Área: %.2f\n", cidade1, area1);
            printf("Carta 2 - %s - Área: %.2f\n", cidade2, area2);
            printf("Resultado: Empate!!!\n");
            printf("-------------------------------------------------\n");

        } else { //senão a carta 2 vence
            printf("Pais %s - %s / País %s - %s ", estado1, cidade1, estado2, cidade2);
            printf("Atributo: Área\n");
            printf("Comparação das cartas (Atributo: Área)\n");
            printf("Carta 1 - %s - Área: %.2f\n", cidade1, area1);
            printf("Carta 2 - %s - Área: %.2f\n", cidade2, area2);
            printf("Resultado: Carta 2 %s venceu!!!\n", cidade2);
            printf("-------------------------------------------------\n");
        }
        break;
    
    case 3: //Atributo número de pontos turísticos

        //Exibição na tela dos dados da primeira carta
        printf("Carta 1:\n");
        printf("Estado: %s\n", estado1);
        printf("Código: %s\n", codigo1);
        printf("Nome da cidade: %s\n", cidade1);
        printf("População: %d\n", populacao1);
        printf("Área: %.2f\n", area1);
        printf("PIB: %.2f\n", pib1);
        printf("Número de pontos turísticos: %d\n", num_ponto_turistico1);

        //calcula a densidade populacional da primeira carta
        densidade_populacional1 = populacao1/area1;
        printf("Densidade populacional: %.2f\n", densidade_populacional1);

        //calcula o pib per capita
        pib_per_capita1 = pib1/populacao1;
        printf("PIB per capita: %.9f\n", pib_per_capita1);

        //calculo super poder 
        super_poder1 = populacao1 + area1 + pib1 + num_ponto_turistico1 + densidade_populacional1 + pib_per_capita1;
        printf("Super poder: %.2f\n", super_poder1);
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
        densidade_populacional2 = populacao2/area2;
        printf("Densidade populacional: %.2f\n", densidade_populacional2);

        //calcula o pib per capita
        pib_per_capita2 = pib2/populacao2;
        printf("PIB per capita: %.9f\n", pib_per_capita2);

        //calculo super poder 
        super_poder2 = populacao2 + area2 + pib2 + num_ponto_turistico2 + densidade_populacional2 + pib_per_capita2;
        printf("Super poder: %.2f\n", super_poder2);
        printf("----------------------------------------------------\n");

        //se a população da carta 1 for maior do que da carta 2 a carta 1 vence
        if (pib1 > pib2) {
            printf("Pais %s - %s / País %s - %s ", estado1, cidade1, estado2, cidade2);
            printf("Atributo: PIB\n");
            printf("Comparação das cartas (Atributo: PIB)\n");
            printf("Carta 1 - %s - PIB: %.2f\n", cidade1, pib1);
            printf("Carta 2 - %s - PIB: %.2f\n", cidade2, pib2);
            printf("Resultado: Carta 1 %s venceu!!!\n", cidade1);
            printf("-------------------------------------------------\n");

        } else if (pib1 == pib2) { 
            printf("Pais %s - %s / País %s - %s ", estado1, cidade1, estado2, cidade2);
            printf("Atributo: PIB\n");
            printf("Comparação das cartas (Atributo: PIB)\n");
            printf("Carta 1 - %s - PIB: %.2f\n", cidade1, pib1);
            printf("Carta 2 - %s - PIB: %.2f\n", cidade2, pib2);
            printf("Resultado: Empate!!!\n");
            printf("-------------------------------------------------\n");

        } else { //senão a carta 2 vence
            printf("Pais %s - %s / País %s - %s ", estado1, cidade1, estado2, cidade2);
            printf("Atributo: PIB\n");
            printf("Comparação das cartas (Atributo: PIB)\n");
            printf("Carta 1 - %s - PIB: %.2f\n", cidade1, pib1);
            printf("Carta 2 - %s - PIB: %.2f\n", cidade2, pib2);
            printf("Resultado: Carta 2 %s venceu!!!\n", cidade2);
            printf("-------------------------------------------------\n");
        }
        break;
    
    case 4: //Atributo número de pontos turísticos

        //Exibição na tela dos dados da primeira carta
        printf("Carta 1:\n");
        printf("Estado: %s\n", estado1);
        printf("Código: %s\n", codigo1);
        printf("Nome da cidade: %s\n", cidade1);
        printf("População: %d\n", populacao1);
        printf("Área: %.2f\n", area1);
        printf("PIB: %.2f\n", pib1);
        printf("Número de pontos turísticos: %d\n", num_ponto_turistico1);

        //calcula a densidade populacional da primeira carta
        densidade_populacional1 = populacao1/area1;
        printf("Densidade populacional: %.2f\n", densidade_populacional1);

        //calcula o pib per capita
        pib_per_capita1 = pib1/populacao1;
        printf("PIB per capita: %.9f\n", pib_per_capita1);

        //calculo super poder 
        super_poder1 = populacao1 + area1 + pib1 + num_ponto_turistico1 + densidade_populacional1 + pib_per_capita1;
        printf("Super poder: %.2f\n", super_poder1);
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
        densidade_populacional2 = populacao2/area2;
        printf("Densidade populacional: %.2f\n", densidade_populacional2);

        //calcula o pib per capita
        pib_per_capita2 = pib2/populacao2;
        printf("PIB per capita: %.9f\n", pib_per_capita2);

        //calculo super poder 
        super_poder2 = populacao2 + area2 + pib2 + num_ponto_turistico2 + densidade_populacional2 + pib_per_capita2;
        printf("Super poder: %.2f\n", super_poder2);
        printf("----------------------------------------------------\n");

        //se a população da carta 1 for maior do que da carta 2 a carta 1 vence
        if (num_ponto_turistico1 > num_ponto_turistico2) {
            printf("Pais %s - %s / País %s - %s ", estado1, cidade1, estado2, cidade2);
            printf("Atributo: Número de pontos turísticos\n");
            printf("Comparação das cartas (Atributo: Número de pontos turísticos)\n");
            printf("Carta 1 - %s - Número de pontos turísticos: %d\n", cidade1, num_ponto_turistico1);
            printf("Carta 2 - %s - Número de pontos turísticos: %d\n", cidade2, num_ponto_turistico2);
            printf("Resultado: Carta 1 %s venceu!!!\n", cidade1);
            printf("-------------------------------------------------\n");

        } else if (num_ponto_turistico1 == num_ponto_turistico2) {
            printf("Pais %s - %s / País %s - %s ", estado1, cidade1, estado2, cidade2);
            printf("Atributo: Número de pontos turísticos\n");
            printf("Comparação das cartas (Atributo: Número de pontos turísticos)\n");
            printf("Carta 1 - %s - Número de pontos turísticos: %d\n", cidade1, num_ponto_turistico1);
            printf("Carta 2 - %s - Número de pontos turísticos: %d\n", cidade2, num_ponto_turistico2);
            printf("Resultado: Empate!!!\n");
            printf("-------------------------------------------------\n");

        } else { //senão a carta 2 vence
            printf("Pais %s - %s / País %s - %s ", estado1, cidade1, estado2, cidade2);
            printf("Atributo: Número de pontos turísticos\n");
            printf("Comparação das cartas (Atributo: Número de pontos turísticos)\n");
            printf("Carta 1 - %s - Número de pontos turísticos: %d\n", cidade1, num_ponto_turistico1);
            printf("Carta 2 - %s - Número de pontos turísticos: %d\n", cidade2, num_ponto_turistico2);
            printf("Resultado: Carta 2 %s venceu!!!\n", cidade2);
            printf("-------------------------------------------------\n");
        }
        break;

    case 5: //Atributo densidade populacional

        //Exibição na tela dos dados da primeira carta
        printf("Carta 1:\n");
        printf("Estado: %s\n", estado1);
        printf("Código: %s\n", codigo1);
        printf("Nome da cidade: %s\n", cidade1);
        printf("População: %d\n", populacao1);
        printf("Área: %.2f\n", area1);
        printf("PIB: %.2f\n", pib1);
        printf("Número de pontos turísticos: %d\n", num_ponto_turistico1);

        //calcula a densidade populacional da primeira carta
        densidade_populacional1 = populacao1/area1;
        printf("Densidade populacional: %.2f\n", densidade_populacional1);

        //calcula o pib per capita
        pib_per_capita1 = pib1/populacao1;
        printf("PIB per capita: %.9f\n", pib_per_capita1);

        //calculo super poder 
        super_poder1 = populacao1 + area1 + pib1 + num_ponto_turistico1 + densidade_populacional1 + pib_per_capita1;
        printf("Super poder: %.2f\n", super_poder1);
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
        densidade_populacional2 = populacao2/area2;
        printf("Densidade populacional: %.2f\n", densidade_populacional2);

        //calcula o pib per capita
        pib_per_capita2 = pib2/populacao2;
        printf("PIB per capita: %.9f\n", pib_per_capita2);

        //calculo super poder 
        super_poder2 = populacao2 + area2 + pib2 + num_ponto_turistico2 + densidade_populacional2 + pib_per_capita2;
        printf("Super poder: %.2f\n", super_poder2);
        printf("----------------------------------------------------\n");

        //se a população da carta 1 for maior do que da carta 2 a carta 1 vence
        if (densidade_populacional1 < densidade_populacional2) {
            printf("Pais %s - %s / País %s - %s ", estado1, cidade1, estado2, cidade2);
            printf("Atributo: Densidade demográfica\n");
            printf("Comparação das cartas (Atributo: Densidade demográfica)\n");
            printf("Carta 1 - %s - Densidade demográfica: %.2f\n", cidade1, densidade_populacional1);
            printf("Carta 2 - %s - Densidade demográfica: %.2f\n", cidade2, densidade_populacional2);
            printf("Resultado: Carta 1 %s venceu!!!\n", cidade1);
            printf("-------------------------------------------------\n");

        } else if (densidade_populacional1 == densidade_populacional2) {
            printf("Pais %s - %s / País %s - %s ", estado1, cidade1, estado2, cidade2);
            printf("Atributo: Desidade demográfica\n");
            printf("Comparação das cartas (Atributo: Densidade demográfica)\n");
            printf("Carta 1 - %s - Densidade demográfica: %.2f\n", cidade1, densidade_populacional1);
            printf("Carta 2 - %s - Densidade demográfica: %.2f\n", cidade2, densidade_populacional2);
            printf("Resultado: Empate!!!\n");
            printf("-------------------------------------------------\n");

        } else { //senão a carta 2 vence
            printf("Pais %s - %s / País %s - %s ", estado1, cidade1, estado2, cidade2);
            printf("Atributo: Densidade demográfica\n");
            printf("Comparação das cartas (Atributo: Densidade demográfica)\n");
            printf("Carta 1 - %s - Densidade demográfica: %.2f\n", cidade1, densidade_populacional1);
            printf("Carta 2 - %s - Densidade demográfica: %.2f\n", cidade2, densidade_populacional2);
            printf("Resultado: Carta 2 %s venceu!!!\n", cidade2);
            printf("-------------------------------------------------\n");
        }
        break;
        
    case 6:
        printf("Você saiu do sistema...\n");
        printf("----------------------------------------------------\n");
        break;
    default:
    printf("Opção inválida! Tente novamente.\n");
    printf("----------------------------------------------------\n");

    } 
    return 0;  
}
