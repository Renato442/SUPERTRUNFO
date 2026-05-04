#include <stdio.h>
int main(){

    //variaveis carta 01//
    char estado1;
    char codigo_da_carta1 [4];
    char nome_da_cidade1 [50];
    int populacao1;
    float area1;
    float pib1;
    int numero_de_pontos_turisticos1;
    float Densidade_Populacional1;
    float PIB_per_capita1;

    //variaveis carta 02//
    char estado2;
    char codigo_da_carta2 [4];
    char nome_da_cidade2 [50];
    int populacao2;
    float area2;
    float pib2;
    int numero_de_pontos_turisticos2;
    float Densidade_Populacional2;
    float PIB_per_capita2;

    // coleta de dados carta 01 //
    printf("Carta 1:\n ");

    printf("Estado (A-H):\n ");
    scanf(" %c", &estado1);

    printf("Codigo da carta (ex: A01):\n ");
    scanf(" %s", codigo_da_carta1);

    printf("Nome da cidade:\n ");
    scanf(" %s", nome_da_cidade1);  // CORRIGIDO

    printf("Populacao:\n ");
    scanf(" %d", &populacao1);

    printf("Area:\n ");
    scanf(" %f", &area1);

    printf("PIB:\n ");
    scanf(" %f", &pib1);

    printf("Numero de pontos turisticos:\n ");
    scanf(" %d", &numero_de_pontos_turisticos1);

    Densidade_Populacional1 = (float) populacao1 / area1;
    PIB_per_capita1 = pib1 / populacao1;

    // coleta de dados carta 2 //

    printf("Carta 2\n ");

    printf("Estado (A-H):\n ");
    scanf(" %c", &estado2);

    printf("Codigo da carta (ex: A02):\n ");
    scanf("%s", codigo_da_carta2);

    printf("Nome da cidade:\n ");
    scanf(" %s", nome_da_cidade2);  // CORRIGIDO

    printf("Populacao:\n ");
    scanf(" %d", &populacao2);

    printf("Area:\n ");
    scanf("%f", &area2);

    printf("PIB:\n ");
    scanf(" %f", &pib2);

    printf("Numero de pontos turisticos:\n ");
    scanf(" %d", &numero_de_pontos_turisticos2);

    Densidade_Populacional2 = (float) populacao2 / area2;
    PIB_per_capita2 = pib2 / populacao2;

    printf("\n===== RESULTADO =====\n");

    // Carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo_da_carta1);
    printf("Cidade: %s\n", nome_da_cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos turisticos: %d\n", numero_de_pontos_turisticos1);
    printf("Densidade populacional: %.2f\n", Densidade_Populacional1);
    printf("PIB per capita: %.2f\n", PIB_per_capita1);

    // Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo_da_carta2);
    printf("Cidade: %s\n", nome_da_cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turisticos: %d\n", numero_de_pontos_turisticos2);
    printf("Densidade populacional: %.2f\n", Densidade_Populacional2);
    printf("PIB per capita: %.2f\n", PIB_per_capita2);

    return 0;
}