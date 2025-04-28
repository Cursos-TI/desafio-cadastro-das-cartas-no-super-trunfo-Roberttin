#include <stdio.h>

int main() {
    // Estrutura para armazenar os dados de uma carta

    // Estrutura da primeira e segunda carta
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos_turisticos1, pontos_turisticos2;



    // Informações de cadastro da Primeira Carta

    printf("Cadastrando a primeira carta: \n");

    printf("Informe a Populacao: ");
    scanf("%d", &populacao1);

    printf("Informe a Area: ");
    scanf("%f", &area1);

    printf("Informe o PIB: ");
    scanf("%f", &pib1);

    printf("Informe a quantidade de Pontos Turisticos: ");
    scanf("%d", &pontos_turisticos1);
    printf("\n");



    // Informações de cadastro da segunda Carta

    printf("Cadastrando a segunda carta:\n");

    printf("Informe a Populacao: ");
    scanf("%d", &populacao2);

    printf("Informe a Area: ");
    scanf("%f", &area2);

    printf("Informe o PIB: ");
    scanf("%f", &pib2);

    printf("Informe a quantidade de Pontos Turisticos: ");
    scanf("%d", &pontos_turisticos2);
    printf("\n");


    // Exibindo os dados de captura da primeira carta

    printf("Dados coletados da primeira carta:\n");

    printf("Populacao: %d\n", populacao1);

    printf("Area: %f \n", area1);

    printf("Pib: %f\n", pib1);

    printf("Pontos Turisticos:%d\n", pontos_turisticos1);
    printf("\n");



    // Exibindo os dados de captura da segunda carta

    printf("Dados coletados da segunda carta:\n");

    printf("Populacao: %d\n", populacao2);

    printf("Area: %f\n", area2);

    printf("Pib: %f\n", pib2);

    printf("Pontos Turisticos: %d\n", pontos_turisticos2);
    printf("\n");

    return 0;

}