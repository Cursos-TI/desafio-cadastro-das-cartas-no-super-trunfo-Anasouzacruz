#include <stdio.h>


int main() {
    // Variáveis para a primeira carta
    char estado1;               // Estado da primeira carta
    char codigo1[4];            // Código da primeira carta
    char nomeCidade1[50];       // Nome da cidade da primeira carta;
    int populacao1;             // População da cidade
    float area1;                // Área da cidade em km²
    float pib1;                 // PIB da cidade
    int pontosTuristicos1;      // Pontos turísticos da cidade

    // Variáveis para a segunda carta
    char estado2;               // Estado da segunda carta
    char codigo2[4];            // Código da segunda carta
    char nomeCidade2[50];       // Nome da cidade da segunda carta
    int populacao2;             // População da cidade
    float area2;                // Área da cidade em km²
    float pib2;                 // PIB da cidade
    int pontosTuristicos2;      // Pontos turísticos da cidade

    // Solicita os dados da primeira carta ao usuário
    printf("Digite os dados da primeira carta:\n");
    
    printf("Estado (A a H): ");
    scanf(" %c", &estado1); // Lê o estado

    printf("Código da carta (ex: A01): ");
    scanf("%s", codigo1); // Lê o código da carta

    printf("Nome da cidade: ");
    scanf(" %[^\n]s", nomeCidade1); // Lê o nome da cidade com espaços

    printf("População: ");
    scanf("%d", &populacao1); // Lê a população

    printf("Área (em km²): ");
    scanf("%f", &area1); // Lê a área

    printf("PIB (em bilhões): ");
    scanf("%f", &pib1); // Lê o PIB

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1); // Lê os pontos turísticos

    // Solicita os dados da segunda carta ao usuário
    printf("\nDigite os dados da segunda carta:\n");

    printf("Estado (A a H): ");
    scanf(" %c", &estado2);

    printf("Código da carta (ex: A01): ");
    scanf("%s", codigo2);

    printf("Nome da cidade: ");
    scanf(" %[^\n]s", nomeCidade2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área (em km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Exibe os dados da primeira carta
    printf("\n--- Dados da Primeira Carta ---\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", nomeCidade1);
    printf("População: %d habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos turísticos: %d\n", pontosTuristicos1);

    // Exibe os dados da segunda carta
    printf("\n--- Dados da Segunda Carta ---\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", nomeCidade2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos turísticos: %d\n", pontosTuristicos2);

    return 0; // Finaliza o programa
}