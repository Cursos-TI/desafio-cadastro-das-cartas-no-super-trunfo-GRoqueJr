#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    // Variaveis da carta 1
    char estado1;
    char codigo1[2];
    char nomeDaCidade1[50];
    int populacao1, numeroDePontosTuristicos1;
    float areaEmKmQuadrado1, pib1, densidadePopulacional1, pibPercapta1, super1;

    // Variaveis da carta 2
    char estado2;
    char codigo2[2];
    char nomeDaCidade2[50];
    int populacao2, numeroDePontosTuristicos2;
    float areaEmKmQuadrado2, pib2, densidadePopulacional2, pibPercapta2, super2;


    /* colhendo dados da carta 1 */
    printf("Vamos preencher os dados da carta 01: \n\n");

    printf("Digite o estado: ");
    scanf(" %c", &estado1); 

    printf("Digite o codigo: ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: ");
    getchar();  // Consumir o caractere de nova linha pendente
    fgets(nomeDaCidade1, sizeof(nomeDaCidade1), stdin);
    nomeDaCidade1[strcspn(nomeDaCidade1, "\n")] = 0;  // Remover nova linha

    printf("Digite a populacao: "); 
    scanf("%d", &populacao1);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &numeroDePontosTuristicos1);

    printf("Digite a area em km quadrado: ");
    scanf("%f", &areaEmKmQuadrado1);

    printf("Digite o Pib em bilhoes: ");
    scanf("%f", &pib1);

     // Faz os calculos das variveis
     densidadePopulacional1 = (float)populacao1 / areaEmKmQuadrado1;
     pibPercapta1 = pib1 * 1000000000 / (float)populacao1;
    super1 = (float)populacao1 +  (float)numeroDePontosTuristicos1 + areaEmKmQuadrado1 + pib1;


    /* colhendo dados da carta 2 */
    printf("\n\n Vamos preencher os dados da carta 02: \n\n");

    printf("Digite o estado: ");
    scanf(" %c", &estado2); 

    printf("Digite o codigo: ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: ");
    getchar();  // Consumir o caractere de nova linha pendente
    fgets(nomeDaCidade2, sizeof(nomeDaCidade2), stdin);
    nomeDaCidade2[strcspn(nomeDaCidade2, "\n")] = 0;  // Remover nova linha

    printf("Digite a populacao: "); 
    scanf("%d", &populacao2);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &numeroDePontosTuristicos2);

    printf("Digite a area em km quadrado: ");
    scanf("%f", &areaEmKmQuadrado2);

    printf("Digite o Pib em bilhoes: ");
    scanf("%f", &pib2);

    // Faz os calculos das variveis
    densidadePopulacional2 = (float)populacao2 / areaEmKmQuadrado2;
    pibPercapta2 = pib2 * 1000000000 / (float)populacao2;
    super2 = (float)populacao2 + (float)numeroDePontosTuristicos2 + areaEmKmQuadrado2 + pib2;
    
    // Dados da carta 1
    printf("\n\nDados da carta 01: \n\n");
    printf("Estado: %c\n", estado1);    
    printf("Codigo: "); printf("%c", estado1); printf("%s\n", codigo1);
    printf("Nome da cidade: %s\n", nomeDaCidade1);
    printf("Populacao: %d\n", populacao1);
    
    printf("Area: %.2f m2", areaEmKmQuadrado1);
    if (areaEmKmQuadrado1 > areaEmKmQuadrado2) {
        printf(" (GANHOU) \n");
    } else if (areaEmKmQuadrado1 < areaEmKmQuadrado2) {
        printf(" (PERDEU) \n");
    } else
    {
        printf(" (EMPATOU) \n");
    }

    printf("PIB: %.2f em bilhões de reais", pib1);
    if (pib1 > pib2) {
        printf(" (GANHOU) \n");
    } else if (pib1 < pib2) {
        printf(" (PERDEU) \n");
    } else
    {
        printf(" (EMPATOU) \n");
    }

    printf("Numero de pontos turisticos: %d", numeroDePontosTuristicos1);
    if (numeroDePontosTuristicos1 > numeroDePontosTuristicos2) {
        printf(" (GANHOU) \n");
    } else if (numeroDePontosTuristicos1 < numeroDePontosTuristicos2) {
        printf(" (PERDEU) \n");
    } else
    {
        printf(" (EMPATOU) \n");
    }

    printf("Densidade Populacional: %.2f", densidadePopulacional1);
    if (densidadePopulacional1 < densidadePopulacional2) {
        printf(" (GANHOU) \n");
    } else if (densidadePopulacional1 > densidadePopulacional2) {
        printf(" (PERDEU) \n");
    } else
    {
        printf(" (EMPATOU) \n");
    }
    
    
    printf("PIB per Capita: %.2f", pibPercapta1);
    if (pibPercapta1 > pibPercapta2) {
        printf(" (GANHOU) \n");
    } else if (pibPercapta1 < pibPercapta2) {
        printf(" (PERDEU) \n");
    } else
    {
        printf(" (EMPATOU) \n");
    }

    printf("SUPER: %.2f", super1);
    if (super1 > super2) {
        printf(" (GANHOU) \n");
    } else if (super1 < super2) {
        printf(" (PERDEU) \n");
    } else
    {
        printf(" (EMPATOU) \n");
    }

    
    // Dados da carta 2
    printf("\n\nDados da carta 02: \n\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: "); printf("%c", estado2); printf("%s\n", codigo2);
    printf("Nome da cidade: %s\n", nomeDaCidade2);

    printf("Populacao: %d", populacao2);
    if (populacao2 > populacao1) {
        printf(" (GANHOU) \n");
    } else if (populacao2 < populacao1) {
        printf(" (PERDEU) \n");
    } else
    {
        printf(" (EMPATOU) \n");
    }
    
    printf("Area: %.2f m2", areaEmKmQuadrado2);
    if (areaEmKmQuadrado2 > areaEmKmQuadrado1) {
        printf(" (GANHOU) \n");
    } else if (areaEmKmQuadrado2 < areaEmKmQuadrado1) {
        printf(" (PERDEU) \n");
    } else
    {
        printf(" (EMPATOU) \n");
    }

    printf("PIB: %.2f em bilhões de reais", pib2);
    if (pib2 > pib1) {
        printf(" (GANHOU) \n");
    } else if (pib2 < pib1) {
        printf(" (PERDEU) \n");
    } else
    {
        printf(" (EMPATOU) \n");
    }

    printf("Numero de pontos turisticos: %d", numeroDePontosTuristicos2);
    if (numeroDePontosTuristicos2 > numeroDePontosTuristicos1) {
        printf(" (GANHOU) \n");
    } else if (numeroDePontosTuristicos2 < numeroDePontosTuristicos1) {
        printf(" (PERDEU) \n");
    } else
    {
        printf(" (EMPATOU) \n");
    }


    printf("Densidade Populacional: %.2f", densidadePopulacional2);
    if (densidadePopulacional2 < densidadePopulacional1) {
        printf(" (GANHOU) \n");
    } else if (densidadePopulacional2 > densidadePopulacional1) {
        printf(" (PERDEU) \n");
    } else
    {
        printf(" (EMPATOU) \n");
    }


    printf("PIB per Capita: %2.f", pibPercapta2);
    if (pibPercapta2 > pibPercapta1) {
        printf(" (GANHOU) \n");
    } else if (pibPercapta2 < pibPercapta1) {
        printf(" (PERDEU) \n");
    } else
    {
        printf(" (EMPATOU) \n");
    }


    printf("SUPER: %.2f", super2);
    if (super2 > super1) {
        printf(" (GANHOU) \n");
    } else if (super2 < super1) {
        printf(" (PERDEU) \n");
    } else
    {
        printf(" (EMPATOU) \n");
    }
    return 0;
}
