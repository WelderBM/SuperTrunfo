#include <stdio.h>

int main()
{
    /*
    Estado: Uma letra de 'A' a 'H' (representando um dos oito estados). Tipo: char

Código da Carta: A letra do estado seguida de um número de 01 a 04 (ex: A01, B03). Tipo: char[] (um array de caracteres, ou string)

Nome da Cidade: O nome da cidade. Tipo: char[] (string)

População: O número de habitantes da cidade. Tipo: int

Área (em km²): A área da cidade em quilômetros quadrados. Tipo: float

PIB: O Produto Interno Bruto da cidade. Tipo: float

Número de Pontos Turísticos: A quantidade de pontos turísticos na cidade. Tipo: int
    */
    char state1;
    char cardCode1[4];
    char cityName1[50];
    int population1;
    float area1;
    float pib1;
    int touristPoints1;
    float populationDensity1;
    float pibPerCapita1;

    char state2;
    char cardCode2[4];
    char cityName2[50];
    int population2;
    float area2;
    float pib2;
    int touristPoints2;
    float populationDensity2;
    float pibPerCapita2;

    printf("Super Trunfo\n");
    printf("Digite os dados da primeira carta:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &state1);
    printf("Código da Carta (ex: A01): ");
    scanf("%s", cardCode1);
    printf("Nome da Cidade: ");
    scanf("%s", cityName1);
    printf("População: ");
    scanf("%d", &population1);
    printf("Área (km²): ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &touristPoints1);

    printf("\nDigite os dados da segunda carta:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &state2);
    printf("Código da Carta (ex: A01): ");
    scanf("%s", cardCode2);
    printf("Nome da Cidade: ");
    scanf("%s", cityName2);
    printf("População: ");
    scanf("%d", &population2);
    printf("Área (km²): ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &touristPoints2);

    printf("\nCarta 1: %s - %s\n", cardCode1, cityName1);
    printf("Estado: %c\n", state1);
    printf("População: %d\n", population1);
    printf("Área (km²): %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", touristPoints1);

    printf("\nCarta 2: %s - %s\n", cardCode2, cityName2);
    printf("Estado: %c\n", state2);
    printf("População: %d\n", population2);
    printf("Área (km²): %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", touristPoints2);

    // Cálculo da densidade populacional e PIB per capita para as cartas
    populationDensity1 = population1 / area1;
    pibPerCapita1 = pib1 / population1;
    populationDensity2 = population2 / area2;
    pibPerCapita2 = pib2 / population2;

    printf("\nDensidade Populacional - Carta 1: %.2f hab/km²\n", populationDensity1);
    printf("PIB per Capita - Carta 1: %.2f reais\n", pibPerCapita1);
    printf("Densidade Populacional - Carta 2: %.2f hab/km²\n", populationDensity2);
    printf("PIB per Capita - Carta 2: %.2f reais\n", pibPerCapita2);

    float superPower1 = (float)population1 + area1 + pib1 + (float)touristPoints1 + pibPerCapita1 + (1.0f / populationDensity1);
    float superPower2 = (float)population2 + area2 + pib2 + (float)touristPoints2 + pibPerCapita2 + (1.0f / populationDensity2);

    printf("\nComparação dos Atributos:\n");
    printf("População: ");
    if (population1 > population2)
    {
        printf("Carta 1 vence\n");
    }
    else if (population1 < population2)
    {
        printf("Carta 2 vence\n");
    }
    else
    {
        printf("Empate\n");
    }

    printf("Área: ");
    if (area1 > area2)
    {
        printf("Carta 1 vence\n");
    }
    else if (area1 < area2)
    {
        printf("Carta 2 vence\n");
    }
    else
    {
        printf("Empate\n");
    }
    printf("PIB: ");
    if (pib1 > pib2)
    {
        printf("Carta 1 vence\n");
    }
    else if (pib1 < pib2)
    {
        printf("Carta 2 vence\n");
    }
    else
    {
        printf("Empate\n");
    }

    printf("Número de Pontos Turísticos: ");
    if (touristPoints1 > touristPoints2)
    {
        printf("Carta 1 vence\n");
    }
    else if (touristPoints1 < touristPoints2)
    {
        printf("Carta 2 vence\n");
    }
    else
    {
        printf("Empate\n");
    }
    printf("Densidade Populacional: ");
    if (populationDensity1 < populationDensity2)
    {
        printf("Carta 1 vence\n");
    }
    else if (populationDensity1 > populationDensity2)
    {
        printf("Carta 2 vence\n");
    }
    else
    {
        printf("Empate\n");
    }
    printf("PIB per Capita: ");
    if (pibPerCapita1 > pibPerCapita2)
    {
        printf("Carta 1 vence\n");
    }
    else if (pibPerCapita1 < pibPerCapita2)
    {
        printf("Carta 2 vence\n");
    }
    else
    {
        printf("Empate\n");
    }
    printf("Super Poder: ");
    if (superPower1 > superPower2)
    {
        printf("Carta 1 vence\n");
    }
    else if (superPower1 < superPower2)
    {
        printf("Carta 2 vence\n");
    }
    else
    {
        printf("Empate\n");
    }

    return 0;
}