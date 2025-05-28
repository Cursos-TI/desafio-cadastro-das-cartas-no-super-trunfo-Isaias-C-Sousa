#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    //Declaração das variaveis CARTA 1
    char estado1;
    char codigo1[4];
    char nomeCidade1[100];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    //Declaração das variaveis CARTA 2
    char estado2;
    char codigo2[4];
    char nomeCidade2[100];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    //Leitura dos dados da Carta 1
    printf("Cadastro da Carta 1:\n");

    printf("Digite o Estado (A a H);\n");
    scanf("%c", &estado1);
    getchar();

    printf("Digite o Código da Carta (ex: A01): ");
    scanf("%s", codigo1);
    getchar();

    printf("Digite o Nome do Cidade: ");
    scanf("%[^\n]", nomeCidade1);
    getchar();

    printf("Digite a População: ");
    scanf("%d", &populacao1);
    getchar();

    printf("Digite a Área (em km²): ");
    scanf("%f", &area1);
    getchar();

    printf("Digite o Pib da Cidade (em bilhões de reais): ");
    scanf("%f", &pib1);
    getchar();

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);
    getchar();


    //Leitura dos dados da Carta 2
    printf("Cadastro da Carta 2:\n");

    printf("Digite o Estado (A a H);\n");
    scanf("%c", &estado2);
    getchar();

    printf("Digite o Código da Carta (ex: A01): ");
    scanf("%s", codigo2);
    getchar();

    printf("Digite o Nome do Cidade: ");
    scanf("%[^\n]", nomeCidade2);
    getchar();

    printf("Digite a População: ");
    scanf("%d", &populacao2);
    getchar();

    printf("Digite a Área (em km²): ");
    scanf("%f", &area2);
    getchar();

    printf("Digite o Pib da Cidade (em bilhões de reais): ");
    scanf("%f", &pib2);
    getchar();

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);
    getchar();


    // Exibição dos dados da Carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);


    // Exibição dos dados da Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2%f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

    return 0;
}
