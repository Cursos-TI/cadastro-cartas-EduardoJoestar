#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  int população, pontos_turisticos;
  char codigo[50];
  float area, pib;

  // Área para entrada de dados
  printf("Bem Vindo ao Super Trunfo - Cidades!\n");
  printf("Vamos cadastrar a primeira cidade. \n");
  printf("Digite o código da cidade: ");
  scanf(" %s", codigo);
 printf("Declare a População, Área, PIB e Pontos Turísticos\n");
  scanf("%d %f %f %d", &população, &area, &pib, &pontos_turisticos);
  // Área para exibição dos dados da cidade
  printf("Carta 1: \n");
  printf("Cidade: %s\n", codigo);
  printf("População: %d\n", população);
  printf("Área: %.2f km²\n", area);
  printf("PIB: R$ %.2f bilhões\n", pib);
  printf("Pontos Turísticos: %d\n", pontos_turisticos);

  printf("Cidade Cadastrada com Sucesso! \n");
  printf("Cadastre a próxima cidade. \n");

   printf("Digite o código da cidade: ");
  scanf(" %s", codigo);
  printf("Declare a População, Área, PIB e Pontos Turísticos\n");
  scanf("%d %f %f %d", &população, &area, &pib, &pontos_turisticos);
  // Área para exibição dos dados da cidade
  printf("Carta 2: \n");
  printf("Cidade: %s\n", codigo);
  printf("População: %d\n", população);
  printf("Área: %.2f km²\n", area);
  printf("PIB: R$ %.2f bilhões\n", pib);
  printf("Pontos Turísticos: %d\n", pontos_turisticos);

  printf("Cidade Cadastrada com Sucesso! \n");
  printf("Obrigado por jogar o Super Trunfo - Cidades!\n");


return 0;
} 
