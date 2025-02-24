//Obs dos nomes nos códigos: PT = Pontos Turísticos; Pop = População; PIB = Produto Interno Bruto; CDC = Código da Carta; PPC - Pib per Capita

#include <stdio.h>

int main(){

    // Declaração das variáveis

    char estado1[50], estado2[50];
    char cdc1[50], cdc2[50];
    char cidade1[50], cidade2[50];

    unsigned long int pop1, pop2;
    int pt1, pt2;

    float area1, area2;
    float pib1, pib2;
    float densidade1, densidade2;
    float ppc1, ppc2;
    float super_poder1, super_poder2;

    // Entrada de Dados para a primeira carta

    printf("Digite as informações da Primeira Carta\n");

    printf("Escolha um Estado: ");
    scanf("%s", estado1);

    printf("Digite o Nome da Cidade: ");
    scanf("%s", cidade1);

    printf("Digite o Código da Carta: ");
    scanf("%s", cdc1);

    printf("Digite a População: ");
    scanf("%lu", &pop1);

    printf("Digite a Área: ");
    scanf("%f", &area1);

    printf("Digite o PIB: ");
    scanf("%f", &pib1);
    
    printf("Quantos PT tem? ");
    scanf("%d", &pt1);

    // Calcular densidade populacional e PIB per capita para a Primeira Carta

    densidade1 = pop1 / area1;

    ppc1 = pib1 / pop1;

    // Calcular o Super Poder para a Primeira Carta

    super_poder1 = pop1 + area1 + pib1 + pt1 + ppc1 + (1 / densidade1);

    // Imprimindo as info. da carta 1

    printf("Carta 1 \n");

    printf("Estado: %s\n", estado1);

    printf("Código da carta: %s\n", cdc1);

    printf("Nome da Cidade: %s\n", cidade1);

    printf("População: %lu\n", pop1);
    
    printf("Área: %.2f\n", area1);

    printf("PIB: %.2f\n", pib1);

    printf("Pontos Turisticos: %d\n", pt1);

    printf("Densidade Populacional: %.2f\n", densidade1);

    printf("PIB per Capita: %.2f\n", ppc1);

    printf("Super Poder: %.2f\n", super_poder1);

    // Entrada de Dados para a segunda carta

    printf("Digite as informações da Segunda Carta\n");

    printf("Escolha um Estado: ");
    scanf("%s", estado2);

    printf("Digite o Nome da Cidade: ");
    scanf("%s", cidade2);

    printf("Digite o Código da Carta: ");
    scanf("%s", cdc2);

    printf("Digite a População: ");
    scanf("%lu", &pop2);

    printf("Digite a Área: ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);
    
    printf("Quantos PT tem? ");
    scanf("%d", &pt2);

    // Calcular densidade populacional e PIB per capita para a Segunda Carta

    densidade2 = pop2 / area2;

    ppc2 = pib2 / pop2;

    // Calcular o Super Poder para a Segunda Carta

    super_poder2 = pop2 + area2 + pib2 + pt2 + ppc2 + (1 / densidade2);

    // Imprimindo as info. da carta 2

    printf("Carta 2 \n");

    printf("Estado: %s\n", estado2);

    printf("Código da carta: %s\n", cdc2);

    printf("Nome da Cidade: %s\n", cidade2);

    printf("População: %lu\n", pop2);
    
    printf("Área: %.2f\n", area2);

    printf("PIB: %.2f\n", pib2);

    printf("Pontos Turisticos: %d\n", pt2);

    printf("Densidade Populacional: %.2f\n", densidade2);

    printf("PIB per Capita: %.2f\n", ppc2);

    printf("Super Poder: %.2f\n", super_poder2);

    // Comparação das Cartas

    printf("\n Comparação das Cartas:\n");

    printf("População: %d\n", (pop1 > pop2) ? 1 : 0);
    
    printf("Área: %d\n", (area1 > area2) ? 1 : 0);

    printf("PIB: %d\n", (pib1 > pib2) ? 1 : 0);

    printf("Pontos Turísticos: %d\n", (pt1 > pt2) ? 1 : 0);

    printf("Densidade Populacional: %d\n", (densidade1 < densidade2) ? 1 : 0); // Menor valor vence

    printf("PIB per Capita: %d\n", (ppc1 > ppc2) ? 1 : 0);

    printf("Super Poder: %d\n", (super_poder1 > super_poder2) ? 1 : 0);

    return 0;
}