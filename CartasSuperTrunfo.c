#include <stdio.h>
     
int main() {

    int carta1, carta2;
    char estado1[1], estado2[1];
    char codigo1[3], codigo2[3];
    char cidade1[50], cidade2[50];
    int populacao1, populacao2;
    float area1, area2; 
    float pib1, pib2;
    int turistico1, turistico2;

    printf("\nDigite os dados da primeira cidade:\n");
    printf("Carta: ");
    scanf("%d", &carta1);
    printf("Estado (sigla): ");
    scanf("%s", estado1);
    printf("Codigo: ");
    scanf("%s", codigo1);
    printf("Cidade: ");
    scanf("%s", cidade1);
    printf("Populacao: ");
    scanf("%d", &populacao1);
    printf("Area: ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%f", &pib1);
    printf("Quantidade de pontos Turisticos: ");
    scanf("%d", &turistico1);

    printf("\nDados da primeira cidade:\n");
    printf("Carta: %d\n", carta1);
    printf("Estado: %s\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Quantidade de pontos Turisticos: %d\n", turistico1);

    printf("\nDigite os dados da segunda cidade:\n");
    printf("Carta: ");
    scanf("%d", &carta2);
    printf("Estado (sigla): ");
    scanf("%s", estado2);
    printf("Codigo: ");
    scanf("%s", codigo2);
    printf("Cidade: ");
    scanf("%s", cidade2);
    printf("Populacao: ");
    scanf("%d", &populacao2);
    printf("Area: ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Quantidade de pontos Turisticos: ");
    scanf("%d", &turistico2);

    printf("\nDados da segunda cidade:\n");
    printf("Carta: %d\n", carta2);
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Quantidade de pontos Turisticos: %d\n", turistico2);

    return 0;
    
}