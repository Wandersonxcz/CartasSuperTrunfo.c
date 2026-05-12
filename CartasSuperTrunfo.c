#include <stdio.h>

// Desafio Super Trunfo - Países 
// Tema 1 - Cadastro das Cartas 
// Aluno: José Wanderson
// Estácio - 2026


int main() {

    // --- Variáveis para a Carta 1 ---

        char estado1;
            char codigo1[4];
                char nomeCidade1[50];
                    int populacao1;
                        float area1;
                            float pib1;
                                float densidadepopulacional1;
                                    float pibpercapita1;
                                        int expectativadevida1;
                                            int pontosTuristicos1;


                                                // --- Variáveis para a Carta 2 ---

                                                    char estado2;
                                                        char codigo2[4];
                                                            char nomeCidade2[50];
                                                                int populacao2;
                                                                    float area2;
                                                                        float pib2;
                                                                            float densidadepopulacional2;
                                                                                float pibpercapita2;
                                                                                    int expectativadevida2;
                                                                                        int pontosTuristicos2;

                                                                                            // === Área para entrada de dados ===

                                                                                                // Cadastro da Carta 1
                                                                                                    printf("--- Cadastro da Carta 1 ---\n");
                                                                                                        printf("Estado (A-H): ");
                                                                                                            scanf(" %c", &estado1);
                                                                                                                while(getchar() != '\n'); // Limpa o buffer após ler o caractere

                                                                                                                    printf("Código da Carta (ex: A01): ");
                                                                                                                        scanf("%s", codigo1);
                                                                                                                            while(getchar() != '\n'); // Limpa o buffer após ler o código

                                                                                                                                printf("Nome da Cidade: ");
                                                                                                                                    scanf(" %[^\n]", nomeCidade1); // Usei %[^\n] para permitir nomes com espaços
                                                                                                                                        
                                                                                                                                            printf("População: ");
                                                                                                                                                scanf("%d", &populacao1);
                                                                                                                                                    printf("Área (em km²): ");
                                                                                                                                                        scanf("%f", &area1);
                                                                                                                                                            printf("PIB: ");
                                                                                                                                                                scanf("%f", &pib1);
                                                                                                                                                                    printf("Expectativa de Vida: ");
                                                                                                                                                                        scanf("%d", &expectativadevida1);
                                                                                                                                                                            printf("Número de Pontos Turísticos: ");
                                                                                                                                                                                scanf("%d", &pontosTuristicos1);
                                                                                                                                                                                    printf("Densidade Populacional: ");
                                                                                                                                                                                        scanf("%d", densidadepopulacional1);
                                                                                                                                                                                            printf("PIB perc apita: ");
                                                                                                                                                                                                scanf("%d", pibpercapita1)

                                                                                                                                                                                                    printf("\n"); // Para separar visualmente no console

                                                                                                                                                                                                        // Cadastro da Carta 2
                                                                                                                                                                                                            printf("--- Cadastro da Carta 2 ---\n");
                                                                                                                                                                                                                printf("Estado (A-H): ");
                                                                                                                                                                                                                    scanf(" %c", &estado2);
                                                                                                                                                                                                                        while(getchar() != '\n'); // Limpa o buffer

                                                                                                                                                                                                                            printf("Código da Carta (ex: B02): ");
                                                                                                                                                                                                                                scanf("%s", codigo2);
                                                                                                                                                                                                                                    while(getchar() != '\n'); // Limpa o buffer

                                                                                                                                                                                                                                        printf("Nome da Cidade: ");
                                                                                                                                                                                                                                            scanf(" %[^\n]", nomeCidade2);

                                                                                                                                                                                                                                                printf("População: ");
                                                                                                                                                                                                                                                    scanf("%d", &populacao2);
                                                                                                                                                                                                                                                        printf("Área (em km²): ");
                                                                                                                                                                                                                                                            scanf("%f", &area2);
                                                                                                                                                                                                                                                                printf("PIB: ");
                                                                                                                                                                                                                                                                    scanf("%f", &pib2);
                                                                                                                                                                                                                                                                        printf("Expectativa de Vida: ");
                                                                                                                                                                                                                                                                            scanf("%d", &expectativadevida2);
                                                                                                                                                                                                                                                                                printf("Número de Pontos Turísticos: ");
                                                                                                                                                                                                                                                                                    scanf("%d", &pontosTuristicos2);
                                                                                                                                                                                                                                                                                        printf("Densidade Populacional: ");
                                                                                                                                                                                                                                                                                            scanf(%d", &densidadepopulacional2

                                                                                                                                                                                                                                                                                                // === Área para exibição dos dados ===

                                                                                                                                                                                                                                                                                                    printf("\n---------------------------\n");
                                                                                                                                                                                                                                                                                                        printf("RESULTADO DAS CARTAS");
                                                                                                                                                                                                                                                                                                            printf("\n---------------------------\n");

                                                                                                                                                                                                                                                                                                                // Exibição Carta 1:

                                                                                                                                                                                                                                                                                                                    printf("Carta 1:\n");
                                                                                                                                                                                                                                                                                                                        printf("Estado: %c\n", estado1);
                                                                                                                                                                                                                                                                                                                            printf("Código: %s\n", codigo1);
                                                                                                                                                                                                                                                                                                                                printf("Nome da Cidade: %s\n", nomeCidade1);
                                                                                                                                                                                                                                                                                                                                    printf("População: %d\n", populacao1);
                                                                                                                                                                                                                                                                                                                                        printf("Área: %.2f km²\n", area1);
                                                                                                                                                                                                                                                                                                                                            printf("PIB: %.2f bilhões de reais\n", pib1);
                                                                                                                                                                                                                                                                                                                                                printf("Expectativa de Vida: %d anos\n", expectativadevida1);
                                                                                                                                                                                                                                                                                                                                                    printf("Pontos Turísticos: %d\n", pontosTuristicos1);

                                                                                                                                                                                                                                                                                                                                                        printf("\n"); // Pula linha entre as cartas

                                                                                                                                                                                                                                                                                                                                                            // Exibição Carta 2:

                                                                                                                                                                                                                                                                                                                                                                printf("Carta 2:\n");
                                                                                                                                                                                                                                                                                                                                                                    printf("Estado: %c\n", estado2);
                                                                                                                                                                                                                                                                                                                                                                        printf("Código: %s\n", codigo2);
                                                                                                                                                                                                                                                                                                                                                                            printf("Nome da Cidade: %s\n", nomeCidade2);
                                                                                                                                                                                                                                                                                                                                                                                printf("População: %d\n", populacao2);
                                                                                                                                                                                                                                                                                                                                                                                    printf("Área: %.2f km²\n", area2);
                                                                                                                                                                                                                                                                                                                                                                                        printf("PIB: %.2f bilhões de reais\n", pib2);
                                                                                                                                                                                                                                                                                                                                                                                            printf("Expectativa de Vida: %d anos\n", expectativadevida2);
                                                                                                                                                                                                                                                                                                                                                                                                printf("Pontos Turísticos: %d\n", pontosTuristicos2);

                                                                                                                                                                                                                                                                                                                                                                                                    return 0;
                                                                                                                                                                                                                                                                                                                                                                                                    }