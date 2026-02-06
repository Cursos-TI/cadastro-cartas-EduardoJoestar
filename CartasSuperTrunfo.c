#include <stdio.h>

int main() {

    // ===============================
    // VARIÁVEIS
    // ===============================

    // Carta 1
    char estado1, codigo1[20], nome1[50];
    unsigned long int populacao1;
    int pontos1;
    float area1, pib1, densidade1, pib_per_capita1, super1;

    // Carta 2
    char estado2, codigo2[20], nome2[50];
    unsigned long int populacao2;
    int pontos2;
    float area2, pib2, densidade2, pib_per_capita2, super2;


    printf("===== SUPER TRUNFO - CIDADES =====\n");


    // ===============================
    // CARTA 1
    // ===============================
    printf("\n--- Cadastro Carta 1 ---\n");

    printf("Estado: "); scanf(" %c", &estado1);
    printf("Codigo: "); scanf("%s", codigo1);
    printf("Nome: "); scanf("%s", nome1);

    printf("Populacao: ");
    scanf("%lu", &populacao1);

    printf("Area: ");
    scanf("%f", &area1);

    printf("PIB (bilhoes): ");
    scanf("%f", &pib1);

    printf("Pontos turisticos: ");
    scanf("%d", &pontos1);


    // ===== CÁLCULOS CARTA 1 =====
    densidade1 = populacao1 / area1;

    pib_per_capita1 = (pib1 * 1000000000.0) / populacao1;

    super1 =
        (float)populacao1 +
        area1 +
        pib1 +
        pontos1 +
        pib_per_capita1 +
        (1.0 / densidade1);



    // ===============================
    // CARTA 2
    // ===============================
    printf("\n--- Cadastro Carta 2 ---\n");

    printf("Estado: "); scanf(" %c", &estado2);
    printf("Codigo: "); scanf("%s", codigo2);
    printf("Nome: "); scanf("%s", nome2);

    printf("Populacao: ");
    scanf("%lu", &populacao2);

    printf("Area: ");
    scanf("%f", &area2);

    printf("PIB (bilhoes): ");
    scanf("%f", &pib2);

    printf("Pontos turisticos: ");
    scanf("%d", &pontos2);


    // ===== CÁLCULOS CARTA 2 =====
    densidade2 = populacao2 / area2;

    pib_per_capita2 = (pib2 * 1000000000.0) / populacao2;

    super2 =
        (float)populacao2 +
        area2 +
        pib2 +
        pontos2 +
        pib_per_capita2 +
        (1.0 / densidade2);



    // ===============================
    // EXIBIÇÃO
    // ===============================
    printf("\n===== CARTA 1 =====\n");
    printf("Densidade: %.2f\n", densidade1);
    printf("PIB per capita: %.2f\n", pib_per_capita1);
    printf("Super Poder: %.2f\n", super1);

    printf("\n===== CARTA 2 =====\n");
    printf("Densidade: %.2f\n", densidade2);
    printf("PIB per capita: %.2f\n", pib_per_capita2);
    printf("Super Poder: %.2f\n", super2);



    // ===============================
    // COMPARAÇÃO
    // ===============================
    printf("\n===== COMPARACAO DE CARTAS =====\n");

    printf("Populacao: %d\n", populacao1 > populacao2);
    printf("Area: %d\n", area1 > area2);
    printf("PIB: %d\n", pib1 > pib2);
    printf("Pontos Turisticos: %d\n", pontos1 > pontos2);

    // menor densidade vence
    printf("Densidade Populacional: %d\n", densidade1 < densidade2);

    printf("PIB per Capita: %d\n", pib_per_capita1 > pib_per_capita2);
    printf("Super Poder: %d\n", super1 > super2);


    printf("\nObrigado por jogar!\n");

    return 0;
}
