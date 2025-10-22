#include <stdio.h>

int main() {
    char estado1[10], estado2[10];
    char códigodacarta1[3], códigodacarta2[3];
    char nomedacidade1[10], nomedacidade2[10];
    int populacao1, populacao2;
    float areaemkm21, areaemkm22;
    float pib1, pib2;
    int numerodepontosturisticos1, numerodepontosturisticos2;
    float densidadepoulacional1, densidadepoulacional2;
    int pibpercapita1, pibpercapita2;
    int somacarta1, somacarta2;

    printf("### Carta 01 ###\n");
    printf("Estado: \n" );
    scanf("%s", &estado1);

    printf("Código da carta: \n");
    scanf("%s", &códigodacarta1);

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
    scanf("%s", &códigodacarta2);

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
    printf("\n### Carta 01 ###\n");
    printf("Estado: %s\n", estado1);
    printf("Código da carta: %s\n", códigodacarta1);
    printf("Nome da cidade: %s\n", nomedacidade1);
    printf("População: %d\n", populacao1);
    printf("Área em km²: %.2f\n", areaemkm21);
    printf("PIB: %.2f\n", pib1);
    printf("Número de pontos turísticos: %d\n\n", numerodepontosturisticos1);

    printf("\n### Carta 02 ###\n");
    printf("Estado: %s\n", estado2);
    printf("Código da carta: %s\n", códigodacarta2);
    printf("Nome da cidade: %s\n", nomedacidade2);
    printf("População: %d\n", populacao2);
    printf("Área em km²: %.2f\n", areaemkm22);
    printf("PIB: %.2f\n", pib2);
    printf("Número de pontos turísticos: %d\n\n", numerodepontosturisticos2);

    // Cálculo da densidade populacional
    densidadepoulacional1 = populacao1 / areaemkm21;
    densidadepoulacional2 = populacao2 / areaemkm22;
    printf("Densidade populacional da carta 1: %.2f\n", densidadepoulacional1);
    printf("Densidade populacional da carta 2: %.2f\n", densidadepoulacional2);

    // Cálculo do PIB per capita
    pibpercapita1 = pib1 / populacao1;
    pibpercapita2 = pib2 / populacao2;
    printf("PIB per capita da carta 1: %d\n", pibpercapita1);
    printf("PIB per capita da carta 2: %d\n", pibpercapita2);

    printf("\nComparação de cartas (Área):\n\n");

    if(areaemkm21 == areaemkm22) {
        printf("As cartas têm a mesma área. \n");
    } else if(areaemkm21 > areaemkm22) {
        printf("A carta 1 tem a maior área. \n");
    } else {
        printf("A carta 2 tem a maior área. \n");
    }
    
    somacarta1 = populacao1 + areaemkm21 + pib1 + pibpercapita1 + numerodepontosturisticos1;
    somacarta2 = populacao2 + areaemkm22 + pib2 + pibpercapita2 + numerodepontosturisticos2;
    
    printf("\nA carta com maior valor:\n");

    printf("Valor total da carta 1: %d\n", somacarta1);
    printf("Valor total da carta 2: %d\n\n", somacarta2);

    if(somacarta1 > somacarta2) {
        printf("A Carta 1 venceu!\n\n");
    } else {
        printf("A Carta 2 venceu!\n\n");
    }
    printf("\nA carta que possui menor densidade populacional:\n\n");

    if(densidadepoulacional1 < densidadepoulacional2) {
        printf("A Carta 1 Venceu!\n\n");
    } else {
        printf("A Carta 2 Venceu!\n\n");
    }

    printf("Comparação de cartas (População):\n\n");

    printf("Carta 1 - %s(%s): %d habitantes\n", nomedacidade1, estado1, populacao1);
    printf("Carta 2 - %s(%s): %d habitantes\n", nomedacidade2, estado2, populacao2);

    if(populacao1 == populacao2) {
        printf("Resultado:As cartas têm a mesma população.\n");
    } else if(populacao1 > populacao2) {
        printf("Resultado: A carta 1 %s venceu!\n", nomedacidade1);
    } else {
        printf("Resultado: A carta 2 %s venceu!\n", nomedacidade2);
    }

    return 0;
}