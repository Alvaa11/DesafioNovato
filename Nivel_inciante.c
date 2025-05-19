#include <stdio.h>


int main(void) {
  char State1;
  char CardCode1[4];
  char CardName1[20];
  int population1;
  float area1;
  float pib1;
  int turistsPoints1;

  printf("Digite o estado: \n"), scanf("%c", &State1);
  printf("Digite o código da carta: \n"), scanf("%s", &CardCode1);
  printf("Digite o nome da carta: \n"), scanf("%s", CardName1);
  printf("Digite a população da cidade: \n"), scanf("%d", &population1);
  printf("Digite a área da cidade: \n"), scanf("%f", &area1);
  printf("Digite o PIB da cidade: \n"), scanf("%f", &pib1);
  printf("Digite os pontos turísticos da cidade: \n"), scanf("%d", &turistsPoints1);
  printf("\n");
  
  printf("Carta 1: \n");
  printf("Estado: %c \n", State1);
  printf("Código da carta: %s \n", CardCode1);
  printf("Nome da carta: %s \n", CardName1);
  printf("População: %d \n", population1);
  printf("Área: %.2f km^2 \n", area1);
  printf("PIB: R$%.2f \n", pib1);
  printf("Pontos turísticos: %d \n", turistsPoints1);
  scanf("%*c");
  printf("\n");
  
  char State2;
  char CardCode2[4];
  char CardName2[20];
  int population2;
  float area2;
  float pib2;
  int turistsPoints2;
  
  printf("Digite o estado: \n"), scanf("%c", &State2);
  printf("Digite o código da carta: \n"), scanf("%s", &CardCode2);
  printf("Digite o nome da carta: \n"), scanf("%s", &CardName2);
  printf("Digite a população da cidade: \n"), scanf("%d", &population2);
  printf("Digite a área da cidade: \n"), scanf("%f", &area2);
  printf("Digite o PIB da cidade: \n"), scanf("%f", &pib2);
  printf("Digite os pontos turísticos da cidade: \n"), scanf("%d", &turistsPoints2);
  printf("\n");

  printf("Carta 2: \n");
  printf("Estado: %c \n", State2);
  printf("Código da carta: %s \n", CardCode2);
  printf("Nome da carta: %s \n", CardName2);
  printf("População: %d \n", population2);
  printf("Área: %.2f km^2 \n", area2);
  printf("PIB: R$%.2f \n", pib2);
  printf("Pontos turísticos: %d \n", turistsPoints2);   

  return 0;
  }
