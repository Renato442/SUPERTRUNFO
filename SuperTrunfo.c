#include <stdio.h>
int main(){

    //variaveis carta 01//
    char estado1;
    char codigo_da_carta1 [4];
    char nome_da_cidade1 [50];
    unsigned long int populacao1; // ALTERADO
    float area1;
    float pib1;
    int numero_de_pontos_turisticos1;
    float Densidade_Populacional1;
    float PIB_per_capita1;
    float Super_Poder1; // NOVO

    //variaveis carta 02//
    char estado2;
    char codigo_da_carta2 [4];
    char nome_da_cidade2 [50];
    unsigned long int populacao2; // ALTERADO
    float area2;
    float pib2;
    int numero_de_pontos_turisticos2;
    float Densidade_Populacional2;
    float PIB_per_capita2;
    float Super_Poder2; // NOVO

    // coleta de dados carta 01 //
    printf("Carta 1:\n ");

    printf("Estado (A-H):\n ");
    scanf(" %c", &estado1);

    printf("Codigo da carta (ex: A01):\n ");
    scanf(" %s", codigo_da_carta1);

    printf("Nome da cidade:\n ");
    scanf(" %s", nome_da_cidade1);

    printf("Populacao:\n ");
    scanf(" %lu", &populacao1); // ALTERADO

    printf("Area:\n ");
    scanf(" %f", &area1);

    printf("PIB:\n ");
    scanf(" %f", &pib1);

    printf("Numero de pontos turisticos:\n ");
    scanf(" %d", &numero_de_pontos_turisticos1);

    Densidade_Populacional1 = (float) populacao1 / area1;
    PIB_per_capita1 = pib1 / populacao1;

    // SUPER PODER 1 (NOVO)
    Super_Poder1 = (float)populacao1 + area1 + pib1 +
                   numero_de_pontos_turisticos1 +
                   PIB_per_capita1 +
                   (1 / Densidade_Populacional1);

    // coleta de dados carta 2 //

    printf("Carta 2\n ");

    printf("Estado (A-H):\n ");
    scanf(" %c", &estado2);

    printf("Codigo da carta (ex: A02):\n ");
    scanf("%s", codigo_da_carta2);

    printf("Nome da cidade:\n ");
    scanf(" %s", nome_da_cidade2);

    printf("Populacao:\n ");
    scanf(" %lu", &populacao2); // ALTERADO

    printf("Area:\n ");
    scanf("%f", &area2);

    printf("PIB:\n ");
    scanf(" %f", &pib2);

    printf("Numero de pontos turisticos:\n ");
    scanf(" %d", &numero_de_pontos_turisticos2);

    Densidade_Populacional2 = (float) populacao2 / area2;
    PIB_per_capita2 = pib2 / populacao2;

    // SUPER PODER 2 (NOVO)
    Super_Poder2 = (float)populacao2 + area2 + pib2 +
                   numero_de_pontos_turisticos2 +
                   PIB_per_capita2 +
                   (1 / Densidade_Populacional2);

    printf("\n===== RESULTADO =====\n");

    // Carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo_da_carta1);
    printf("Cidade: %s\n", nome_da_cidade1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos turisticos: %d\n", numero_de_pontos_turisticos1);
    printf("Densidade populacional: %.2f\n", Densidade_Populacional1);
    printf("PIB per capita: %.2f\n", PIB_per_capita1);
    printf("Super Poder: %.2f\n", Super_Poder1);

    // Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo_da_carta2);
    printf("Cidade: %s\n", nome_da_cidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turisticos: %d\n", numero_de_pontos_turisticos2);
    printf("Densidade populacional: %.2f\n", Densidade_Populacional2);
    printf("PIB per capita: %.2f\n", PIB_per_capita2);
    printf("Super Poder: %.2f\n", Super_Poder2);

    // COMPARAÇÃO (NOVO)
    printf("\n===== COMPARAÇÃO DE CARTAS =====\n");

    printf("Populacao: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Area: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turisticos: Carta 1 venceu (%d)\n", numero_de_pontos_turisticos1 > numero_de_pontos_turisticos2);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", Densidade_Populacional1 < Densidade_Populacional2);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", PIB_per_capita1 > PIB_per_capita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", Super_Poder1 > Super_Poder2);

    return 0;
}