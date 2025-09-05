#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {

    int cartaA, cartaB;

    int pontoscartaA = 30;
    int pontoscartaB = 40;

    int populacaocartaA = 100000;
    int populacaocartaB = 230000;

    float areacartaA = 2.00000;
    float areacartaB = 1.90000;

    float pibcartaA = 3.000000;
    float pibcartaB = 4.700000;

    char estadocartaA [10] = "A";
    char estadocartaB [10] = "B";

    char cidadecartaA [20] = "Fortaleza";
    char cidadecartaB [20] = "Bahia";

    char codigocartaA [20] = "A01";
    char codigocartaB [20] = "B01";

    float densidadecartaA, densidadecartaB;
    float pibcapitacartaA, pibcapitacartaB;

    printf("Digite quantos pontos turísticos tem a cartaA: \n");
    scanf("%d", &pontoscartaA);
    printf("Digite quantos pontos turísticos tem a cartaB: \n");
    scanf("%d", &pontoscartaB);
    
    printf("Digite o número da população da cartaA: \n");
    scanf("%d", &populacaocartaA);
    printf("Digite o número da população da cartaB: \n");
    scanf("%d", &populacaocartaB);

    printf("Digite quanto tem de área em km² a cartaA: \n");
    scanf("%f", &areacartaA);
    printf("Digite quanto tem de área em km² a cartaB: \n");
    scanf("%f", &areacartaB);

    printf("Digite o número do PIB da cartaA: \n");
    scanf("%f", &pibcartaA);
    printf("Digite o número do PIB da cartaB: \n");
    scanf("%f", &pibcartaB);

    printf("Digite o Estado da cartaA: \n");
    scanf("%s", estadocartaA);
    printf("Digite o Estado da cartaB: \n");
    scanf("%s", estadocartaB);

    printf("Digite a cidade da cartaA: \n");
    scanf("%s", cidadecartaA);
    printf("Digite a cidade da cartaB: \n");
    scanf("%s", cidadecartaB);

    printf("Digite o código da cartaA: \n");
    scanf("%s", codigocartaA);
    printf("Digite o código da cartaB: \n");
    scanf("%s", codigocartaB);

    densidadecartaA = populacaocartaA / areacartaA;
    densidadecartaB = populacaocartaB / areacartaB;

    pibcapitacartaA = pibcartaA / populacaocartaA;
    pibcapitacartaB = pibcartaB / populacaocartaB;

    printf("Densidade populacional: %.2f\n", densidadecartaA);
    printf("Densidade populacional: %.2f\n", densidadecartaB);

    printf("PIB per capita: %.2f\n", pibcapitacartaA);
    printf("PIB per capita: %.2f\n", pibcapitacartaB);


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
