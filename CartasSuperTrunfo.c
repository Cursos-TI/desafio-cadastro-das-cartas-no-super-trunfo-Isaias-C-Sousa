#include <stdio.h>  // Biblioteca padrão para entrada e saída
#include <string.h> // Biblioteca para manipulação de strings

int main()
{
    // -------- Carta 1 --------
    char estado1;          // Armazena a letra do estado da carta 1
    char codigo1[4];       // Armazena o código da carta (ex: A01)
    char nomeCidade1[50];  // Nome da cidade da carta 1
    int populacao1;        // População da cidade 1
    float area1;           // Área da cidade 1
    float pib1;            // PIB da cidade 1 em bilhões
    int pontosTuristicos1; // Número de pontos turísticos da cidade 1

    // -------- Carta 2 --------
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // -------- Entrada de dados da Carta 1 --------
    printf("=== Cadastro da Carta 1 ===\n");

    printf("Informe o Estado (A a H): ");
    scanf(" %c", &estado1); // Espaço antes do %c pra ignorar enter

    printf("Informe o Código da Carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Informe o Nome da Cidade: ");
    getchar();                                      // Limpa o buffer
    fgets(nomeCidade1, sizeof(nomeCidade1), stdin); // Lê string com espaço
    nomeCidade1[strcspn(nomeCidade1, "\n")] = 0;    // Remove o \n do final

    printf("Informe a População: ");
    scanf("%d", &populacao1);

    printf("Informe a Área (km²): ");
    scanf("%f", &area1);

    printf("Informe o PIB (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Informe o Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // -------- Entrada de dados da Carta 2 --------
    printf("\n=== Cadastro da Carta 2 ===\n");

    printf("Informe o Estado (A a H): ");
    scanf(" %c", &estado2);

    printf("Informe o Código da Carta (ex: B02): ");
    scanf("%s", codigo2);

    printf("Informe o Nome da Cidade: ");
    getchar();
    fgets(nomeCidade2, sizeof(nomeCidade2), stdin);
    nomeCidade2[strcspn(nomeCidade2, "\n")] = 0;

    printf("Informe a População: ");
    scanf("%d", &populacao2);

    printf("Informe a Área (km²): ");
    scanf("%f", &area2);

    printf("Informe o PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Informe o Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // -------- Cálculos da Carta 1 --------
    float densidade1 = populacao1 / area1;                  // Densidade populacional
    float pibPerCapita1 = (pib1 * 1000000000) / populacao1; // PIB per capita

    // -------- Cálculos da Carta 2 --------
    float densidade2 = populacao2 / area2;
    float pibPerCapita2 = (pib2 * 1000000000) / populacao2;

    // -------- Exibição dos dados da Carta 1 --------
    printf("\n=== Carta 1 ===\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

    // -------- Exibição dos dados da Carta 2 --------
    printf("\n=== Carta 2 ===\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    return 0; // Fim do programa
}