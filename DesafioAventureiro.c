#include <stdio.h>

int main() {
    char Estado[10];
    char codigodacarta[3];
    char nomedacidade[10];
    int populacao;
    float areaemkm2;
    float pib;
    int numerodepontosturisticos;
    float densidade;
    float pibpercapita;

 printf("****Desafio Aventureiro****\n");

  printf("Estado: \n");
    scanf("%s", Estado);

    printf("Código da carta: \n");
    scanf("%s", codigodacarta);

    printf("Nome da cidade: \n");
    scanf("%s", nomedacidade);

    printf("População: \n");
    scanf("%d", &populacao);

    printf("Área em km²: \n");
    scanf("%f", &areaemkm2);

    printf("PIB: \n");
    scanf("%f", &pib);

    printf("Número de pontos turísticos: \n");
    scanf("%d", &numerodepontosturisticos);

    printf(">>>>Carta: \n - Estado: %s\n", Estado);
    printf("-Código da carta: %s\n - Nome da cidade: %s\n", codigodacarta, nomedacidade);
    printf("-População: %d\n - Área em km²: %.2f\n", populacao, areaemkm2);
    printf("-PIB: %.2f\n - Número de pontos turísticos: %d\n", pib, numerodepontosturisticos);

    densidade = populacao / areaemkm2;
    pibpercapita = pib / populacao;

    printf(">>>>Dados Calculados: \n - Densidade demográfica: %.2f hab/km²\n", densidade);
    printf("- PIB per capita: %.2f\n", pibpercapita);

    return 0;

}
