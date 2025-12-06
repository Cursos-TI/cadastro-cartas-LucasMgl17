#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Nível Novato: Cadastro das cartas
// Objetivo: Criar cartas usando scanf para entrada de dados e printf para exibir as informações.

// Estrutura da Carta de Cidade para o Nível Novato
typedef struct {
    char codigo[5];         // Código da Carta (Ex: A01)
    char nome_cidade[50];   // Nome da Cidade
    int populacao;           // População (em habitantes)
    double area_km2;        // Área em km²
    double pib;             // PIB em Milhões
    int pontos_turisticos;  // Número de Pontos Turísticos
} CartaCidade;


int main() {
    // 1. Declaração da variável do tipo CartaCidade
    CartaCidade minha_carta;

    printf("--- Cadastro de Carta de Cidade (Nível Novato) ---\n");

    // ==========================================
    // ÁREA PARA ENTRADA DE DADOS (scanf)
    // ==========================================

    // 2. Entrada do Código da Carta (%s)
    printf("Digite o Código da Carta (Ex: A01): ");
    scanf("%s", minha_carta.codigo);

    // 3. Entrada do Nome da Cidade (%s)
    printf("Digite o Nome da Cidade: ");
    scanf("%s", minha_carta.nome_cidade);

    // 4. Entrada da População (%d, USA &)
    printf("Digite a População (em habitantes): ");
    scanf("%d", &minha_carta.populacao);

    // 5. Entrada da Área (%lf, USA &)
    printf("Digite a Área (em km²): ");
    scanf("%lf", &minha_carta.area_km2); 

    // 6. Entrada do PIB (%lf, USA &)
    printf("Digite o PIB (em milhões de moeda local): ");
    scanf("%lf", &minha_carta.pib);

    // 7. Entrada dos Pontos Turísticos (%d, USA &)
    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &minha_carta.pontos_turisticos);

    printf("\n--- Cadastro Concluído! ---\n");

    // ==========================================
    // ÁREA PARA EXIBIÇÃO DOS DADOS (printf)
    // ==========================================
    printf("=================================\n");
    printf("====== CIDADE CADASTRADA =======\n");
     
     printf("Código da Carta: %s\n", minha_carta.codigo); 
     printf("Nome da Cidade: %s \n", minha_carta.nome_cidade);
     
    // Exibindo as demais propriedades:
    printf("População: %d habitantes\n", minha_carta.populacao); 
    printf("Área (km²): %.2f\n", minha_carta.area_km2);
     printf("PIB (Milhões): %.2f\n", minha_carta.pib);
    printf("Pontos Turísticos: %d\n", minha_carta.pontos_turisticos);

    printf("=================================\n");
    return 0;
}