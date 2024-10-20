#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    int codigo;
    char nome[50];
    int populacao;
    int area;
    int pib;
    int pontos_turisticos;

    printf("Digite o codigo da cidade:\n");
    scanf("%d", &codigo);

    printf("Digite o nome da cidade:\n");
    scanf("%s", nome);

    printf("Digite a populacao da cidade\n");
    scanf("%d", &populacao);

    printf("Digite area da cidade\n");
    scanf("%d", &area);

    printf("Digite PIB da cidade\n");
    scanf("%d", &pib);

    printf("Digite os pontos turisticos da cidade\n");
    scanf("%d", &pontos_turisticos);

    
    printf(" \n");
    printf(" \n");
    printf(" \n");
    printf(" \n");
    
    printf("****Atributos da carta****\n");
    printf(" \n");
    printf(" \n");
    printf(" \n");
    
    printf("Codigo da cidade: %d\n", codigo);  
    printf("Nome da cidade: %s\n", nome);
    printf("Populacao: %d\n", populacao);
    printf("Area: %d\n", area);
    printf("PIB: %d\n", pib);
    printf("Pontos Turisticos: %d\n", pontos_turisticos);
    
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
