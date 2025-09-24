#include <stdio.h>

int main(){
    char estado[10];
    char codigodacarta[10];
    char nomedacidade[15];
    int populacao;
    float areaemkm2;
    float pib;
    int numerodepontosturisticos;

    printf("Estado: \n");
    scanf("%s", &estado);

    printf("Código da carta: \n");
    scanf("%s", &codigodacarta);

    printf("Nome da cidade: \n");
    scanf("%s", nomedacidade);

    printf("População: \n");
    scanf("%d", &populacao);

    printf("Área em km²: \n");
    scanf("%f", &areaemkm2);

    printf("PIB: \n");
    scanf("%f", &pib);

    printf("Número de pontos turísticos: \n", numerodepontosturisticos);
    scanf("%d", &numerodepontosturisticos);


    // Exibindo os dados das cartas


    printf(">>>>Carta: \n - Estado: %s\n", estado);
    printf("-Código da carta: %s\n - Nome da cidade: %s\n", codigodacarta, nomedacidade);
    printf("-População: %d\n - Área em km²: %.2f\n", populacao, areaemkm2);
    printf("-PIB: %.2f\n - Número de pontos turísticos: %d\n", pib, numerodepontosturisticos);

   
    return 0;

    }