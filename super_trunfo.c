//Obs dos nomes nos códigos: PT = Pontos Turísticos; Pop = População; PIB = Produto Interno Bruto; CDC = Código da Carta//

// Resultado esperado: O programa deve solicitar ao usuário que insira as informações de duas cartas, e em seguida, imprimir as informações inseridas.

/* O CDC(Código da Carta) será realizado da seguinte forma, o estado que o usuario escolher irá ser representado como letras, sendo elas de A - H,
a cidade irá representar os números, sendo eles de 1 - 4.

EX.: Carta 1 - ESTADO: RJ - CIDADE: ARARUAMA - CÓDIGO: A01 

Tem-se exceções nas cartas como:
1.Terá chances do usuario escolher o mesmo estado porém cidades diferentes, então o código de carta deverá mudar apenas o número e não o estado;
2.Terá chances do usuario escolher outro estado com a cidade do estado escolhido, então o código da carta deverá mudar apenas a letra do estado, ficando assim:

EX2.: Carta 2 - Estado: SP - CIDADE: GUARULHOS - CÓDIGO: B01

*/

#include <stdio.h>
  
  int main() {

    // Declaração das variáveis
    
    char estado1[50], estado2[50];
    char cdc1[50], cdc2[50];
    char cidade1[50], cidade2[50];

    int pop1, pop2;
    int pt1, pt2;

    float area1, area2;
    float pib1, pib2;

    // Entrada de Dados para a primeira carta

    printf("**Digite as informações da Primeira Carta**\n");

    printf("Escolha um Estado: ");
    scanf("%s", estado1);

    printf("Digite o Nome da Cidade: ");
    scanf("%s", cidade1);

    printf("Digite o Código da Carta: ");
    scanf("%s", cdc1);

    printf("Digite a População: ");
    scanf("%d", &pop1);

    printf("Digite a Área: ");
    scanf("%f", &area1);

    printf("Digite o PIB: ");
    scanf("%f", &pib1);

    printf("Digite o PT: ");
    scanf("%d", &pt1);
    
    /* Printf das informações inserida da primeira carta(feito como um teste)

    printf("Carta 1: \n");

    printf("Estado: %s\n", estado1);

    printf("Código da Cidade: %s\n", cdc1);

    printf("Nome da Cidade: %s\n", cidade1);

    printf("População: %d\n", pop1);

    printf("Área: %f\n", area1);

    printf("PIB: %f\n", pib1);

    printf("PT: %d\n", pt1);*/

   // Entrada de Dados para a segunda carta

   printf("**Digite as informações da Segunda Carta**\n");

   printf("Escolha um Estado: ");
   scanf("%s", estado2);

   printf("Digite o Nome da Cidade: ");
   scanf("%s", cidade2);

   printf("Digite o Código da Carta: ");
   scanf("%s", cdc2);

   printf("Digite a População: ");
   scanf("%d", &pop2);

   printf("Digite a Área: ");
   scanf("%f", &area2);

   printf("Digite o PIB: ");
   scanf("%f", &pib2);

   printf("Digite o PT: ");
   scanf("%d", &pt2);
   
   /* Printf das informações inserida da segunda carta (realizado como um teste)

   printf("Carta 2: \n");

   printf("Estado: %s\n", estado2);

   printf("Código da Cidade: %s\n", cdc2);

   printf("Nome da Cidade: %s\n", cidade2);

   printf("População: %d\n", pop2);

   printf("Área: %f\n", area2);

   printf("PIB: %f\n", pib2);

   printf("PT: %d\n", pt2);*/

   // printf das informações das cartas 1 e 2

   printf("Carta 1: \n");

    printf("Estado: %s\n", estado1);

    printf("Código da Carta: %s\n", cdc1);

    printf("Nome da Cidade: %s\n", cidade1);

    printf("População: %d\n", pop1);

    printf("Área: %.2f\n", area1);

    printf("PIB: %.2f\n", pib1);

    printf("Pontos Turísticos: %d\n", pt1);

    printf("Carta 2: \n");

    printf("Estado: %s\n", estado2);
 
    printf("Código da Carta: %s\n", cdc2);
 
    printf("Nome da Cidade: %s\n", cidade2);
 
    printf("População: %d\n", pop2);
 
    printf("Área: %.2f\n", area2);
 
    printf("PIB: %.2f\n", pib2);
 
    printf("Pontos Turísticos: %d\n", pt2);

    
    return 0;
  }