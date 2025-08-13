#include <stdio.h>

int main()
{

    // Declarando as variáveis da carta 1.
    char estado1[11];               // Variável do tipo caracter para o Estado.
    char cod1[4], nome_cidade1[16]; // Tipo caracter para o código da carta e o nome da cidade.
    int populacao1, npt1;           // Essa é do tipo inteira para a população e o número de pontos turisticos da cidade.
    float pib1, area1;              // Eariável tipo float para o PIB da cidade e a área quadrade.
    float densidade_p1;             // Essa variável é para armazenar o valor de Densidade Populacional, p1 por conta que é a primeiro cidade.
    float pib_per1;                 // variável que armazena o valor do PIB Per Capita (Riqueza média por pessoa).

    // Essas são as variáveis da segunda carta e segue o mesmo conceito e ordem da carta 1.
    char estado2[11];
    char cod2[4], nome_cidade2[16];
    int populacao2, npt2;
    float pib2, area2;
    float densidade_p2;
    float pib_per2;

    printf("Carta 1 \n");        // Mostra qual a carta.
    printf("Digite o Estado: "); // Vai aparecer qual Estado escolheu.
    scanf("%s", estado1);        // Digite qual Estado deseja.

    // Código escolhido para a carta.
    printf("Código: ");
    scanf("%s", cod1);

    printf("Nome da Cidade: "); // Mostra o nome da Cidade.
    scanf("%s", nome_cidade1);  // Entrada para o nome que escolher

    printf("População: ");    // Saída da quantidade de pessoas.
    scanf("%d", &populacao1); // Digite quantos habitantes quer.

    // Entrada e Sáida para quantos metros quadrados quer que a cidade tenha.
    printf("Área: ");
    scanf("%f", &area1);

    // PIB da cidade.
    printf("PIB: ");
    scanf("%f", &pib1);

    // Quandtidade de pontos túristicos.
    printf("Número de Pontos Turisticos: ");
    scanf("%d", &npt1);

    // Dividindo a População e a Área da Carta 1.
    float divisao1 = (float) populacao1 / area1;
    // Dividindo o PIB e a População da Carta 1.
    float divisao2 = (float) (pib1 * 1000000000) / populacao1;

    // A Carta 2 segue o mesmo conceito que a carta 1.
    printf("Carta 2 \n");
    printf("Digite o Estado: ");
    scanf("%s", estado2);

    printf("Código: ");
    scanf("%s", cod2);

    printf("Nome da Cidade: ");
    scanf("%s", nome_cidade2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turisticos: ");
    scanf("%d", &npt2);

    float divisao3 = (float) populacao2 / area2;
    float divisao4 = (float) (pib2 * 1000000000) / populacao2;

    // saídas dos atributos da carta 1
    printf("Carta: 1\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", cod1);
    printf("Nome da cidade: %s\n", nome_cidade1);
    printf("População: %i\n", populacao1);
    printf("Área: %.2f km\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", npt1);
    // Saída da Densidade Populacional.
    printf("Densidade Populacional: %.2f hab/km\n", divisao1);
    // Sáida do PIB per Capita.
    printf("PIB per Capita: %.2f reais\n", divisao2);

    // saídas dos atributos da carta 2
    printf("Carta: 2\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", cod2);
    printf("Nome da cidade: %s\n", nome_cidade2);
    printf("População: %i\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", npt2);
    printf("Densidade Populacional: %.2f hab/km\n", divisao3);
    printf("PIB per Capita: %.2f reais\n", divisao4);

    return 0;
}