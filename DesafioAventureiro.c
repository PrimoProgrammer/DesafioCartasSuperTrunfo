#include <stdio.h>

int main() {
    char Estado1[10], Estado2[10];
    char codigodacarta1[3], codigodacarta2[3];
    char nomedacidade1[10], nomedacidade2[10];
    int populacao1, populacao2;
    float areaemkm21, areaemkm22;
    float pib1, pib2;
    int numerodepontosturisticos1, numerodepontosturisticos2;
    float densidade1, densidade2;
    float pibpercapita1, pibpercapita2;
    
    
      /* Aqui abaixo carta 1 para colocar os dados   */
 printf("****Desafio Aventureiro Carta 01****\n");

  printf("Estado: \n");
    scanf("%s", Estado1);

    printf("Código da carta: \n");
    scanf("%s", codigodacarta1);

    printf("Nome da cidade: \n");
    scanf("%s", nomedacidade1);

    printf("População: \n");
    scanf("%d", &populacao1);

    printf("Área em km²: \n");
    scanf("%f", &areaemkm21);

    printf("PIB: \n");
    scanf("%f", &pib1);

    printf("Número de pontos turísticos: \n");
    scanf("%d", &numerodepontosturisticos1);

    /* Aqui abaixo carta 2 para colocar os dados   */

     printf("****Desafio Aventureiro Carta 02****\n");

  printf("Estado: \n");
    scanf("%s", Estado2);

    printf("Código da carta: \n");
    scanf("%s", codigodacarta2);

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

    /*CARTA 01 apresentada*/

    printf("####  Carta 01 #### \n - Estado: %s\n", Estado1);
    printf("-Código da carta: %s\n - Nome da cidade: %s\n", codigodacarta1, nomedacidade1);
    printf("-População: %d\n - Área em km²: %.2f\n", populacao1, areaemkm21);
    printf("-PIB: %.2f\n - Número de pontos turísticos: %d\n", pib1, numerodepontosturisticos1);

    densidade1 = populacao1 / areaemkm21;
    pibpercapita1 = pib1 / populacao1; 

    printf(">>>>Dados Calculados: \n - Densidade demográfica: %.2f hab/km²\n", densidade1);
    printf("- PIB per capita: %.2f\n\n", pibpercapita1);

    /*CARTA 02 apresentada*/
    printf("####  Carta 02 #### \n\n - Estado: %s\n", Estado2);
    printf("-Código da carta: %s\n - Nome da cidade: %s\n", codigodacarta2, nomedacidade2);
    printf("-População: %d\n - Área em km²: %.2f\n", populacao2, areaemkm22);
    printf("-PIB: %.2f\n - Número de pontos turísticos: %d\n", pib2, numerodepontosturisticos2);

    densidade2 = populacao2 / areaemkm22;
    pibpercapita2 = pib2 / populacao2;

    printf(">>>>Dados Calculados: \n - Densidade demográfica: %.2f hab/km²\n", densidade2);
    printf("- PIB per capita: %.2f\n", pibpercapita2);

    return 0;

}
