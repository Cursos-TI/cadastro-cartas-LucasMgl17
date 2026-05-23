#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Nível Novato: Cadastro das cartas
// Objetivo: Criar cartas usando scanf para entrada de dados e printf para exibir as informações.

// Estrutura da Carta de Cidade para o Nível Novato

int main() {
    // ==========================================
    // CARTA 1 - VARIÁVEIS 
    // ==========================================
    char estado1;
    char codigo1[4];
    char cidade1[50];
    unsigned long int populacao1; // Usando long para cidades muito grandes
    float area1;
    float pib1;
    int pontosTuristicos1;
    
    // VARIÁVEIS CÁLCULADAS (Nível Aventureiro e Mestre)
    float densidade1;
    float pibPerCapita1;
    float superPoder1;

    // ==========================================
    // CARTA 2 - VARIÁVEIS 
    // ==========================================
    char estado2;
    char codigo2[4];
    char cidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    
    // VARIÁVEIS CÁLCULADAS 
    float densidade2;
    float pibPerCapita2;
    float superPoder2;

    // ------------------------------------------
    // CADASTRO - CARTA 1 
    // ------------------------------------------
    printf("=== CADASTRO DA CARTA 1 ===\n");
    printf("Estado (Ex:A-Z): ");
    scanf(" %c", &estado1);
    printf("Código da Carta (Ex: A01): ");
    scanf(" %s", codigo1);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade1);
    printf("População: ");
    scanf("%lu", &populacao1);
    printf("Área (em km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // CÁLCULOS - CARTA 1 (Nível Aventureiro)
    densidade1 = (float)populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000.0) / (float)populacao1; // Convertendo PIB para valor real antes de dividir
    
    // CÁLCULO DO SUPER PODER (Nível Mestre)
    // Nota: Como menor densidade é melhor, usamos (1 / densidade) para o Super Poder fazer sentido logicamente
    superPoder1 = (float)populacao1 + area1 + pib1 + (float)pontosTuristicos1 + pibPerCapita1 + (1.0f / densidade1);

    printf("\n");

    // ------------------------------------------
    // CADASTRO - CARTA 2 
    // ------------------------------------------
    printf("=== CADASTRO DA CARTA 2 ===\n");
    printf("Estado (Ex:A-Z): ");
    scanf(" %c", &estado2);
    printf("Código da Carta (Ex: B02): ");
    scanf(" %s", codigo2);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade2);
    printf("População: ");
    scanf("%lu", &populacao2);
    printf("Área (em km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // CÁLCULOS - CARTA 2 
    densidade2 = (float)populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000.0) / (float)populacao2;
    
    // CÁLCULO DO SUPER PODER 
    superPoder2 = (float)populacao2 + area2 + pib2 + (float)pontosTuristicos2 + pibPerCapita2 + (1.0f / densidade2);

    // ==========================================
    // EXIBIÇÃO E COMPARAÇÃO 
    // ==========================================
    printf("\n========================================\n");
    printf("         RESULTADO DO CONFRONTO         \n");
    printf("========================================\n");
    printf("Carta 1: %s (%s) | Carta 2: %s (%s)\n\n", cidade1, codigo1, cidade2, codigo2);

    // 1. População
    printf("População: ");
    if (populacao1 > populacao2) printf("Carta 1 (%s) Venceu!\n", cidade1);
    else if (populacao2 > populacao1) printf("Carta 2 (%s) Venceu!\n", cidade2);
    else printf("Empate!\n");

    // 2. Área
    printf("Área: ");
    if (area1 > area2) printf("Carta 1 (%s) Venceu!\n", cidade1);
    else if (area2 > area1) printf("Carta 2 (%s) Venceu!\n", cidade2);
    else printf("Empate!\n");

    // 3. PIB
    printf("PIB: ");
    if (pib1 > pib2) printf("Carta 1 (%s) Venceu!\n", cidade1);
    else if (pib2 > pib1) printf("Carta 2 (%s) Venceu!\n", cidade2);
    else printf("Empate!\n");

    // 4. Pontos Turísticos
    printf("Pontos Turísticos: ");
    if (pontosTuristicos1 > pontosTuristicos2) printf("Carta 1 (%s) Venceu!\n", cidade1);
    else if (pontosTuristicos2 > pontosTuristicos1) printf("Carta 2 (%s) Venceu!\n", cidade2);
    else printf("Empate!\n");

    // 5. Densidade Populacional (CRITÉRIO INVERTIDO: Menor vence!)
    printf("Densidade Populacional: ");
    if (densidade1 < densidade2) printf("Carta 1 (%s) Venceu! (Menor Densidade)\n", cidade1);
    else if (densidade2 < densidade1) printf("Carta 2 (%s) Venceu! (Menor Densidade)\n", cidade2);
    else printf("Empate!\n");

    // 6. PIB per Capita
    printf("PIB per Capita: ");
    if (pibPerCapita1 > pibPerCapita2) printf("Carta 1 (%s) Venceu!\n", cidade1);
    else if (pibPerCapita2 > pibPerCapita1) printf("Carta 2 (%s) Venceu!\n", cidade2);
    else printf("Empate!\n");

    // 7. SUPER PODER
    printf("----------------------------------------\n");
    printf("SUPER PODER: ");
    if (superPoder1 > superPoder2) printf("Carta 1 (%s) Venceu o Jogo! (%.2f vs %.2f)\n", cidade1, superPoder1, superPoder2);
    else if (superPoder2 > superPoder1) printf("Carta 2 (%s) Venceu o Jogo! (%.2f vs %.2f)\n", cidade2, superPoder2, superPoder1);
    else printf("Empate Supremo!\n");
    printf("----------------------------------------\n");

    return 0;
}