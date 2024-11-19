#include <stdio.h>

// Função para calcular a densidade populacional
float calcular_densidade_populacional(float populacao, float area) {
    return populacao * 1000000 / area; // Converte população para habitantes e calcula
}

// Função para calcular o PIB per capita
float calcular_pib_per_capita(float PIB, float populacao) {
    return PIB * 1000000000 / (populacao * 1000000); // Converte PIB e população para a unidade correta
}

// Função para calcular o "Super Poder" da carta
float calcular_super_poder(float densidade_populacional, float pib_per_capita, int pontos_turisticos) {
    return densidade_populacional + pib_per_capita + pontos_turisticos;
}

int main() {
    // Atributos das duas cartas
    char pais1[50], pais2[50];
    char codigo1[10], codigo2[10];
    char cidade1[50], cidade2[50];
    float populacao1, populacao2;
    float area1, area2;
    float PIB1, PIB2;
    int pontos_turisticos1, pontos_turisticos2;

    // Cadastro da primeira carta
    printf("Digite os dados da primeira cidade:\n");
    printf("Digite nome do País: ");
    scanf("%s", pais1);
    printf("Digite código da cidade: ");
    scanf("%s", codigo1);
    printf("Digite nome da cidade: ");
    scanf("%s", cidade1);
    printf("Digite população (em milhões): ");
    scanf("%f", &populacao1);
    printf("Digite área da cidade (em km²): ");
    scanf("%f", &area1);
    printf("Digite PIB da cidade (em bilhões): ");
    scanf("%f", &PIB1);
    printf("Digite número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);

    // Cadastro da segunda carta
    printf("\nDigite os dados da segunda cidade:\n");
    printf("Digite nome do País: ");
    scanf("%s", pais2);
    printf("Digite código da cidade: ");
    scanf("%s", codigo2);
    printf("Digite nome da cidade: ");
    scanf("%s", cidade2);
    printf("Digite população (em milhões): ");
    scanf("%f", &populacao2);
    printf("Digite área da cidade (em km²): ");
    scanf("%f", &area2);
    printf("Digite PIB da cidade (em bilhões): ");
    scanf("%f", &PIB2);
    printf("Digite número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);

    // Cálculos das propriedades
    float densidade1 = calcular_densidade_populacional(populacao1, area1);
    float densidade2 = calcular_densidade_populacional(populacao2, area2);
    float pib_per_capita1 = calcular_pib_per_capita(PIB1, populacao1);
    float pib_per_capita2 = calcular_pib_per_capita(PIB2, populacao2);
    float super_poder1 = calcular_super_poder(densidade1, pib_per_capita1, pontos_turisticos1);
    float super_poder2 = calcular_super_poder(densidade2, pib_per_capita2, pontos_turisticos2);

    // Exibição dos resultados
    printf("\n--- Comparação entre as cartas ---\n");

    printf("Densidade Populacional: ");
    if (densidade1 < densidade2) {
        printf("Vencedora: %s\n", cidade1);
    } else if (densidade1 > densidade2) {
        printf("Vencedora: %s\n", cidade2);
    } else {
        printf("Empate\n");
    }

    printf("PIB per Capita: ");
    if (pib_per_capita1 > pib_per_capita2) {
        printf("Vencedora: %s\n", cidade1);
    } else if (pib_per_capita1 < pib_per_capita2) {
        printf("Vencedora: %s\n", cidade2);
    } else {
        printf("Empate\n");
    }

    printf("Número de Pontos Turísticos: ");
    if (pontos_turisticos1 > pontos_turisticos2) {
        printf("Vencedora: %s\n", cidade1);
    } else if (pontos_turisticos1 < pontos_turisticos2) {
        printf("Vencedora: %s\n", cidade2);
    } else {
        printf("Empate\n");
    }

    printf("Super Poder (Soma das Propriedades): ");
    if (super_poder1 > super_poder2) {
        printf("Vencedora: %s\n", cidade1);
    } else if (super_poder1 < super_poder2) {
        printf("Vencedora: %s\n", cidade2);
    } else {
        printf("Empate\n");
    }

    return 0;
}
