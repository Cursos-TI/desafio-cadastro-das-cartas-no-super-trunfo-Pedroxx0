#include <stdio.h>

int main(){


    // declarando as variáveis da carta 1
    char estado1[11]; // variável do tipo caracter para o Estado
    char cod1 [4], nome_cidade1[16]; // tipo caracter para o código da carta e o nome da cidade
    int populacao1, npt1; // essa é do tipo inteira para a população e o número de pontos turisticos da cidade
    float pib1, area1; // variável tipo float para o PIB da cidade e a área quadrade


    // aqui é a segunda carta e segue o mesmo conceito da carta 1, declarada acima
    char estado2[11];
    char cod2 [4], nome_cidade2[16];
    int populacao2, npt2;
    float pib2, area2;


    // da linha 21 a 63 são entradas e saídas dos atributos de cada carta
    printf("Carta 1 \n");
    printf("Digite o Estado: ");
    scanf("%s", estado1);

    printf("Código: ");
    scanf("%s", cod1);

    printf("Nome da Cidade: ");
    scanf("%s", nome_cidade1);

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área: ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Número de Pontos Turisticos: ");
    scanf("%d", &npt1);

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


    // saídas dos atributos da carta 1
    printf("Carta: 1\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", cod1);
    printf("Nome da cidade: %s\n", nome_cidade1);
    printf("População: %i\n", populacao1);
    printf("Área: %f\n", area1);
    printf("PIB: %f\n", area1);
    printf("Número de Pontos Turísticos: %d\n", npt1);

    // saídas dos atributos da carta 2
    printf("Carta: 1\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", cod1);
    printf("Nome da cidade: %s\n", nome_cidade1);
    printf("População: %i\n", populacao1);
    printf("Área: %f\n", area1);
    printf("PIB: %f\n", area1);
    printf("Número de Pontos Turísticos: %d", npt1);


    return 0;


}