#include <stdio.h>
    int main(){

        //inicio do jogo//
        //variaveis carta 01//
        char estado1;
        char codigo_da_carta1 [4];
        char nome_da_cidade1 [50];
        int populacao1;
        float area1;
        float pib1;
        int numero_de_pontos_turisticos1;

        //variaveis carta 02//
        char estado2;
        char codigo_da_carta2 [4];
        char nome_da_cidade2 [50];
        int populacao2;
        float area2;
        float pib2;
        int numero_de_pontos_turisticos2;

    // coleta de dados //
    // colata de dados carta 01 //
        printf("Carta 1\n ");

        printf("Estado (A-H): ");
        scanf(" %c", &estado1);

        printf("Codigo da carta (ex: A01): ");
        scanf(" %s", codigo_da_carta1);

        printf("Nome da cidade: ");
        scanf(" %[^\n]", nome_da_cidade1);

        printf("Populaçao: ");
        scanf(" %d", &populacao1);

        printf("Area: ");
        scanf(" %f", &area1);

        printf("PIB: ");
        scanf(" %f", &pib1);

        printf("Numero de pontos turisticos: ");
        scanf(" %d", &numero_de_pontos_turisticos1);


    // coleta de dados carta 2 //

    printf("Carta 2\n ");
        
        printf("Estado (A-H): ");
        scanf(" %c", &estado2);

        printf("Codigo da carta (ex: A02): ");
        scanf("%s", codigo_da_carta2);

        printf("Nome da cidade: ");
        scanf(" %[^\n]", nome_da_cidade2);

        printf("Populaçao: ");
        scanf(" %d", &populacao2);

        printf("Area: ");
        scanf("%f", &area2);

        printf("PIB: ");
        scanf(" %f", &pib2);

        printf("Numero de pontos turisticos: ");
        scanf(" %d", &numero_de_pontos_turisticos2);


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

    // Carta 2
        printf("\nCarta 2:\n");
        printf("Estado: %c\n", estado2);
        printf("Codigo: %s\n", codigo_da_carta2);
        printf("Cidade: %s\n", nome_da_cidade2);
        printf("Populacao: %d\n", populacao2);
        printf("Area: %.2f\n", area2);
        printf("PIB: %.2f\n", pib2);
        printf("Pontos turisticos: %d\n", numero_de_pontos_turisticos2);

  return 0;    
    }
    