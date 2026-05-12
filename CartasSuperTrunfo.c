#include <stdio.h>

/**
 * Desafio Super Trunfo - Países
 * Tema 2 - Comparação das Cartas (Nível Novato)
 * Aluno: José Wanderson
 */

int main() {
    // --- Variáveis para a Carta 1 ---
    char estado1;
    char codigo1[4];
    char nomeCidade1[50];
    unsigned long int populacao1; // Usei unsigned long para populações grandes
    float area1;
    float pib1;
    float densidade1;
    float pibpercapita1;
    int pontosTuristicos1;

    // --- Variáveis para a Carta 2 ---
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    float densidade2;
    float pibpercapita2;
    int pontosTuristicos2;

    // === Entrada de Dados (Cadastro) ===

    // Cadastro da Carta 1
    printf("--- Cadastro da Carta 1 ---\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Código (ex: A01): ");
    scanf("%s", codigo1);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade1);
    printf("População: ");
    scanf("%lu", &populacao1);
    printf("Área (km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib1);
    printf("Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Cálculos da Carta 1
    densidade1 = (float)populacao1 / area1;
    pibpercapita1 = (pib1 * 1000000000) / (float)populacao1; // Ajustado para valor real do PIB

    printf("\n");

    // Cadastro da Carta 2
    printf("--- Cadastro da Carta 2 ---\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Código (ex: B02): ");
    scanf("%s", codigo2);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade2);
    printf("População: ");
    scanf("%lu", &populacao2);
    printf("Área (km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);
    printf("Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculos da Carta 2
    densidade2 = (float)populacao2 / area2;
    pibpercapita2 = (pib2 * 1000000000) / (float)populacao2;

    // === Lógica de Comparação ===
    // Atributo escolhido: População (Conforme regra: maior vence)
    
    printf("\n========================================\n");
    printf("COMPARACAO DE CARTAS (Atributo: Populacao)\n");
    printf("========================================\n");
    
    printf("Carta 1 - %s: %lu habitantes\n", nomeCidade1, populacao1);
    printf("Carta 2 - %s: %lu habitantes\n", nomeCidade2, populacao2);
    printf("----------------------------------------\n");

    if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 (%s) VENCEU!\n", nomeCidade1);
    } else if (populacao2 > populacao1) {
        printf("Resultado: Carta 2 (%s) VENCEU!\n", nomeCidade2);
    } else {
        printf("Resultado: EMPATE!\n");
    }

    /* 
       Nota: Para comparar Densidade Populacional (menor valor vence), 
       o código seria:
       if (densidade1 < densidade2) { ... Carta 1 vence ... }
    */

    return 0;
}