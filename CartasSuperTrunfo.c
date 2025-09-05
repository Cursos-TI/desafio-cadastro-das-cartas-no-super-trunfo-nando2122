#include <stdio.h>

int main() {

    int cartaA, cartaB;

    int pontoscartaA = 30;
    int pontoscartaB = 40;

    int populacaocartaA = 100000;
    int populacaocartaB = 230000;

    float areacartaA = 2.000000;
    float areacartaB = 1.900000;

    float pibcartaA = 3.00000;
    float pibcartaB = 4.70000;

    char estadocartaA [10] = "A";
    char estadocartaB [10] = "B";

    char cidadecartaA [20] = "Fortaleza";
    char cidadecartaB [20] = "Bahia";

    char codigocartaA [20] = "A01";
    char codigocartaB [20] = "B01";

    float densidadecartaA, densidadecartaB;
    float pibcapitacartaA, pibcapitacartaB;

    printf("Carta A e Carta B\n");

    printf("Digite quantos pontos turísticos tem a cartaA: \n");
    scanf("%d", &pontoscartaA);
    printf("Digite quantos pontos turísticos tem a cartaB: \n");
    scanf("%d", &pontoscartaB);
    
    printf("Digite o número da população da cartaA: \n");
    scanf("%d", &populacaocartaA);
    printf("Digite o número da população da cartaB: \n");
    scanf("%d", &populacaocartaB);

    printf("Digite quanto tem de área em km² a cartaA: %f milhões\n");
    scanf("%f", &areacartaA);
    printf("Digite quanto tem de área em km² a cartaB: %f milhões\n");
    scanf("%f", &areacartaB);

    printf("Digite o número do PIB da cartaA: %f bilhões de reais\n");
    scanf("%f", &pibcartaA);
    printf("Digite o número do PIB da cartaB: %f bilhões de reais\n");
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

    pibcapitacartaA = populacaocartaA / pibcartaA;
    pibcapitacartaB = populacaocartaB / pibcartaB;

    printf("Densidade populacional da cartaA é: %.2f hab/km²\n", densidadecartaA);
    printf("Densidade populacional da cartaB é: %.2f hab/km²\n", densidadecartaB);

    printf("PIB per capita: %.2f reais\n", pibcapitacartaA);
    printf("PIB per capita: %.2f reais\n", pibcapitacartaB);


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
