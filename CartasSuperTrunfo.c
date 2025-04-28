#include <stdio.h>

int main() {
    // Estrutura para armazenar os dados de uma carta

    // Estrutura da primeira e segunda carta

    char codigo_carta1, codigo_carta2;
    char estado1, estado2;
    char cidade1, cidade2;
    int pontos_turisticos1, pontos_turisticos2;
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    float densidade_populacional1, densidade_populacional2;
    float pib_Per_Capita1, pib_Per_Capita2;



    // Informações de cadastro da Primeira Carta

    printf("Cadastrando a primeira carta: \n");

    printf("Informe o codigo da carta: ");
    scanf("%c", &codigo_carta1);

    printf("Informe o estado: ");
    scanf("%c", &estado1);

    printf("Informe a cidade: ");
    scanf("%c", &cidade1);

    printf("Informe a Populacao: ");
    scanf("%d", &populacao1);

    printf("Informe a Area: ");
    scanf("%f", &area1);

    printf("Informe o PIB: ");
    scanf("%f", &pib1);

    printf("Informe a quantidade de Pontos Turisticos: ");
    scanf("%d", &pontos_turisticos1);
    printf("\n");

    // Calculo PIB e Densidade Populacional

    pib_Per_Capita1 = pib1 / populacao1;
    densidade_populacional1 = populacao1 / area1;


    // Informações de cadastro da segunda Carta

    printf("Cadastrando a segunda carta:\n");

    printf("Informe o codigo da carta: ");
    scanf("%c", &codigo_carta2);

    printf("Informe o estado: ");
    scanf("%c", &estado2);
    
    printf("Informe a cidade: ");
    scanf("%c", &cidade2);

    printf("Informe a Populacao: ");
    scanf("%d", &populacao2);

    printf("Informe a Area: ");
    scanf("%f", &area2);

    printf("Informe o PIB: ");
    scanf("%f", &pib2);

    printf("Informe a quantidade de Pontos Turisticos: ");
    scanf("%d", &pontos_turisticos2);
    printf("\n");

        // Calculo PIB e Densidade Populacional

        pib_Per_Capita2 = pib2 / populacao2;
        densidade_populacional2 = populacao2 / area2;


    // Exibindo os dados de captura da primeira carta

    printf("Dados coletados da primeira carta:  \n");

    printf("Codigo da Carta:  %c\n", codigo_carta1);

    printf("Estado:  %c\n", estado1);

    printf("Cidade:  %c\n", cidade1);

    printf("Populacao:  %d\n", populacao1);

    printf("Area:  %f \n", area1);

    printf("Pib: %f\n", pib1);

    printf("Pontos Turisticos:  %d\n", pontos_turisticos1);

    printf("Densidade Populacional: %f\n", densidade_populacional1);
    printf("PIB Per Capita: %f\n", pib_Per_Capita1);

    printf("\n");



    // Exibindo os dados de captura da segunda carta

    printf("Dados coletados da segunda carta:\n");

    printf("Codigo da Carta: %c\n", codigo_carta2);

    printf("Estado: %c\n", estado2);

    printf("Cidade: %c\n", cidade2);

    printf("Populacao: %d\n", populacao2);

    printf("Area: %f\n", area2);

    printf("Pib: %f\n", pib2);

    printf("Pontos Turisticos: %d\n", pontos_turisticos2);

    printf("Densidade Populacional: %f\n", densidade_populacional2);
    printf("PIB Per Capita: %f\n", pib_Per_Capita2);
    printf("\n");

    return 0;

}