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

    char state2;
    char cardCode2[4];
    char cityName2[50];
    int population2;
    float area2;
    float pib2;
    int touristPoints2;

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

    return 0;
}