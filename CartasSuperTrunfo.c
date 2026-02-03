#include <stdio.h>

int main() {

    // ===============================
    // VARIÁVEIS
    // ===============================

    // Carta 1
    char estado1;
    char codigo1[20];
    char nome1[50];
    int populacao1, pontos1;
    float area1, pib1;
    float densidade1, pib_per_capita1;

    // Carta 2
    char estado2;
    char codigo2[20];
    char nome2[50];
    int populacao2, pontos2;
    float area2, pib2;
    float densidade2, pib_per_capita2;


    printf("===== SUPER TRUNFO - CIDADES =====\n");


    // ===============================
    // CARTA 1
    // ===============================
    printf("\n--- Cadastro Carta 1 ---\n");

    printf("Estado: ");
    scanf(" %c", &estado1);

    printf("Codigo: ");
    scanf("%s", codigo1);

    printf("Nome da cidade: ");
    scanf("%s", nome1);

    printf("Populacao: ");
    scanf("%d", &populacao1);

    printf("Area (apenas numero): ");
    scanf("%f", &area1);

    printf("PIB em bilhoes (apenas numero): ");
    scanf("%f", &pib1);

    printf("Pontos turisticos: ");
    scanf("%d", &pontos1);


    // ===== CÁLCULOS =====
    densidade1 = populacao1 / area1;

    // converte bilhões -> reais
    pib_per_capita1 = (pib1 * 1000000000.0) / populacao1;



    // ===============================
    // CARTA 2
    // ===============================
    printf("\n--- Cadastro Carta 2 ---\n");

    printf("Estado: ");
    scanf(" %c", &estado2);

    printf("Codigo: ");
    scanf("%s", codigo2);

    printf("Nome da cidade: ");
    scanf("%s", nome2);

    printf("Populacao: ");
    scanf("%d", &populacao2);

    printf("Area (apenas numero): ");
    scanf("%f", &area2);

    printf("PIB em bilhoes (apenas numero): ");
    scanf("%f", &pib2);

    printf("Pontos turisticos: ");
    scanf("%d", &pontos2);


    // ===== CÁLCULOS =====
    densidade2 = populacao2 / area2;

    pib_per_capita2 = (pib2 * 1000000000.0) / populacao2;



    // ===============================
    // EXIBIÇÃO
    // ===============================
    printf("\n===== CARTA 1 =====\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome: %s\n", nome1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes\n", pib1);
    printf("Pontos turisticos: %d\n", pontos1);
    printf("Densidade populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per capita: %.2f reais\n", pib_per_capita1);


    printf("\n===== CARTA 2 =====\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome: %s\n", nome2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes\n", pib2);
    printf("Pontos turisticos: %d\n", pontos2);
    printf("Densidade populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: %.2f reais\n", pib_per_capita2);


    printf("\nObrigado por jogar!\n");

    return 0;
}
