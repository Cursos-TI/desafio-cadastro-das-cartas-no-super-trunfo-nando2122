#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {

    int pontos = 30;
    int populacao = 100000;
    float area = 2.000000;
    float pib = 30.0000;
    char estado[20] = "Ceara";
    char cidade[20] = "Fortaleza";
    char codigo [20]= "C01";

    printf("Digite quantos pontos turísticos tem: \n");
    scanf("%d", &pontos);
    
    printf("Digite o número da população: \n");
    scanf("%d", &populacao);

    printf("Digite quanto tem de área em km²: \n");
    scanf("%f", &area);

    printf("Digite o número do PIB: \n");
    scanf("%f", &pib);

    printf("Digite o Estado: \n");
    scanf("%s", &estado);

    printf("Digite a cidade: \n");
    scanf("%s", &cidade);

    printf("Digite o código da carta: \n");
    scanf("%s", &codigo);



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
