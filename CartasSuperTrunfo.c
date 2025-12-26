#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
    // --- VARIÁVEIS PARA A CARTA 01 ---
    char estado1[50], codigo1[50], cidade1[50];
    int populacao1, pontos1;
    float area1, pib1;

    // --- VARIÁVEIS PARA A CARTA 02 ---
    char estado2[50], codigo2[50], cidade2[50];
    int populacao2, pontos2;
    float area2, pib2;

    // --- LEITURA DA CARTA 01 ---
    printf("Digite os dados da Carta 1:\n");
    
    printf("Estado (ex: A): ");
    scanf("%s", estado1);

    printf("Codigo (ex: A01): ");
    scanf("%s", codigo1);

    printf("Nome da Cidade (ex: Sao Paulo): ");
    scanf(" %[^\n]", cidade1); // O espaço antes do % é o segredo para ler nomes compostos!

    printf("Populacao: ");
    scanf("%d", &populacao1);

    printf("Area: ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontos1);


    // --- LEITURA DA CARTA 02 ---
    printf("\nDigite os dados da Carta 2:\n");
    
    printf("Estado (ex: B): ");
    scanf("%s", estado2);

    printf("Codigo (ex: B02): ");
    scanf("%s", codigo2);

    printf("Nome da Cidade (ex: Rio de Janeiro): ");
    scanf(" %[^\n]", cidade2); // Lê nomes com espaços

    printf("Populacao: ");
    scanf("%d", &populacao2);

    printf("Area: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontos2);


    // --- EXIBIÇÃO DOS DADOS (Igual à Imagem) ---
    
    printf("\nCarta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km2\n", area1); // %.2f para 2 casas decimais
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontos1);

    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontos2);

    return 0;
}
