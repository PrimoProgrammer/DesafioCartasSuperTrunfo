#include <stdio.h>

int main(){
    char estado1[10], estado2[10];
    char codigodacarta1[3], codigodacarta2[3];
    char nomedacidade1[10], nomedacidade2[10];
    int populacao1, populacao2;
    float areaemkm21, areaemkm22;
    float pib1, pib2;
    int numerodepontosturisticos1, numerodepontosturisticos2;

    printf("### Carta 01 ###\n");
    printf("Estado: \n");
    scanf("%s", &estado1);

    printf("Código da carta: \n");
    scanf("%s", &codigodacarta1);

    printf("Nome da cidade: \n");
    scanf("%s", nomedacidade1);

    printf("População: \n");
    scanf("%d", &populacao1);

    printf("Área em km²: \n");
    scanf("%f", &areaemkm21);

    printf("PIB: \n");
    scanf("%f", &pib1);

    printf("Número de pontos turísticos: \n", numerodepontosturisticos1);
    scanf("%d", &numerodepontosturisticos1);

    // Inserir informações da segunda carta

    printf("### Carta 02 ###\n");
    printf("Estado: \n");
    scanf("%s", &estado2);

    printf("Código da carta: \n");
    scanf("%s", &codigodacarta2);

    printf("Nome da cidade: \n");
    scanf("%s", nomedacidade2);

    printf("População: \n");
    scanf("%d", &populacao2);

    printf("Área em km²: \n");
    scanf("%f", &areaemkm22);

    printf("PIB: \n");
    scanf("%f", &pib2);

    printf("Número de pontos turísticos: \n");
    scanf("%d", &numerodepontosturisticos2);
    
    // Exibindo os dados das cartas


    printf("#### Carta 01 ####: \n - Estado: %s\n", estado1);
    printf("-Código da carta: %s\n - Nome da cidade: %s\n", codigodacarta1, nomedacidade1);
    printf("-População: %d\n - Área em km²: %.2f\n", populacao1, areaemkm21);
    printf("-PIB: %.2f\n - Número de pontos turísticos: %d\n\n", pib1, numerodepontosturisticos1);

    printf("#### Carta 02 ####: \n - Estado: %s\n", estado2);
    printf("-Código da carta: %s\n - Nome da cidade: %s\n", codigodacarta2, nomedacidade2);
    printf("-População: %d\n - Área em km²: %.2f\n", populacao2, areaemkm22);
    printf("-PIB: %.2f\n - Número de pontos turísticos: %d\n", pib2, numerodepontosturisticos2);
   
    return 0;


    }

