#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.


int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    char pais[50];
    char codigo[10];
    char cidade[50];
    float populacao;
    float area;
    float PIB;
    int numero_de_pontos_turisticos;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    printf("Digite nome do País: \n");
    scanf("%s", pais);

    printf("Digite codigo da cidade: \n");
    scanf("%s", &codigo);

    printf("Digite nome da cidade: \n");
    scanf("%s", cidade);

    printf("Digite população: \n");
    scanf("%f", &populacao);

    printf("Digite área da cidade: \n");
    scanf("%f", &area);

    printf("Digite PIB da cidade: \n");
    scanf("%f", &PIB);

    printf("Digite Número de pontos turísticos: \n");
    scanf("%d", &numero_de_pontos_turisticos);
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("Nome do País: %s \n", pais);
    printf("Codigo da Cidade: %s \n", codigo);
    printf("Nome da cidade: %s \n", cidade);
    printf("População da cidade: %.2f milhões \n", populacao);
    printf("Área da Cidade: %.2f km² \n", area);
    printf("PIB da cidade: %.2f bilhões \n", PIB);
    printf("Número de Pontos Turísticos: %d \n", numero_de_pontos_turisticos);

    return 0;
}
