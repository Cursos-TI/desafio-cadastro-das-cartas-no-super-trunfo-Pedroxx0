#include <stdio.h>

int main()
{

    // Declarando as variáveis da carta 1.
    char pais1[11], estado1[11];    // Variável do tipo caracter para o Estado.
    char cod1[4], nome_cidade1[16]; // Tipo caracter para o código da carta e o nome da cidade.
    unsigned long int populacao1;
    int escolha, npt1;  // Essa é do tipo inteira para a população e o número de pontos turisticos da cidade.
    float pib1, area1;  // Eariável tipo float para o PIB da cidade e a área quadrade.
    float densidade_p1; // Essa variável é para armazenar o valor de Densidade Populacional, p1 por conta que é a primeiro cidade.
    float pib_per1;     // variável que armazena o valor do PIB Per Capita (Riqueza média por pessoa).
    float superPoder1;  // Nova habilidade, essa variável é a soma de todos os atributos.

    // Essas são as variáveis da segunda carta e segue o mesmo conceito e ordem da carta 1.
    char pais2[11], estado2[11], cod2[4], nome_cidade2[16];
    unsigned long int populacao2;
    int npt2;
    float pib2, area2, densidade_p2, pib_per2, superPoder2;

    printf("Carta 1 \n");      // Mostra qual a carta.
    printf("Digite o País: "); // Mostra o Pais
    scanf("%s", pais1);       // Aqui você insere o pais escolhido

    printf("Digite o Estado: "); // Vai aparecer qual Estado escolheu.
    scanf("%s", estado1);       // Digite qual Estado deseja.

    // Código escolhido para a carta.
    printf("Código: ");
    scanf("%s", cod1);

    printf("Nome da Cidade: "); // Mostra o nome da Cidade.
    scanf("%s", nome_cidade1); // Entrada para o nome que escolher

    printf("População: ");     // Saída da quantidade de pessoas.
    scanf("%ld", &populacao1); // Digite quantos habitantes quer.

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
    densidade_p1 = (float)populacao1 / area1;
    // Dividindo o PIB e a População da Carta 1.
    pib_per1 = (float)(pib1 * 1000000000) / populacao1;
    // Calculando todos os atributos.
    superPoder1 = (float)populacao1 + npt1 + (pib1 * 1000000000) + area1 + (1 / densidade_p1) + pib_per1;

    // A Carta 2 segue o mesmo conceito que a carta 1.
    printf("Carta 2 \n");
    printf("Digite o País: ");
    scanf("%s", pais2);

    printf("Digite o Estado: ");
    scanf("%s", estado2);

    printf("Código: ");
    scanf("%s", cod2);

    printf("Nome da Cidade: ");
    scanf("%s", nome_cidade2);

    printf("População: ");
    scanf("%ld", &populacao2);

    printf("Área: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turisticos: ");
    scanf("%d", &npt2);

    densidade_p2 = (float)populacao2 / area2;
    pib_per2 = (float)(pib2 * 1000000000) / populacao2;
    superPoder2 = (float)populacao2 + npt2 + (pib2 * 1000000000) + area2 + (1 / densidade_p2) + pib_per2;

    // saídas dos atributos da carta 1
    printf("Carta: 1\n");
    printf("País: %s\n", pais1);
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", cod1);
    printf("Nome da cidade: %s\n", nome_cidade1);
    printf("População: %li\n", populacao1);
    printf("Área: %.2f km\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", npt1);
    // Saída da Densidade Populacional.
    printf("Densidade Populacional: %.2f hab/km\n", densidade_p1);
    // Sáida do PIB per Capita.
    printf("PIB per Capita: %.2f reais\n", pib_per1);
    printf("Super Poder: %.2f\n", superPoder1);

    // saídas dos atributos da carta 2
    printf("Carta: 2\n");
    printf("País: %s\n", pais2);
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", cod2);
    printf("Nome da cidade: %s\n", nome_cidade2);
    printf("População: %li\n", populacao2);
    printf("Área: %.2f Km\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", npt2);
    printf("Densidade Populacional: %.2f hab/km\n", densidade_p2);
    printf("PIB per Capita: %.2f reais\n", pib_per2);
    printf("Super Poder: %.2f\n", superPoder2);

    printf("*** Escolha apenas um atributo para comparação ***\n");
    printf("1. Nome do País: \n");
    printf("2. População: \n");
    printf("3. Área: \n");
    printf("4. PIB: \n");
    printf("5. Número de pontos turísticos: \n");
    printf("6. Densidade Demográfica: \n");
    scanf("%d", &escolha);

    printf("Comparando %s e %s\n", pais1, pais2);

    switch (escolha)
    {
    case 1:
        printf("Os paises na disputa são %s e %s", pais1, pais2);
        break;
    case 2:
        printf("População: %lu VS %lu\n", populacao1, populacao2);
        if (populacao1 > populacao2)
        {
            printf("Vencedor: %s", nome_cidade1);
        }
        else if (populacao2 > populacao1)
        {
            printf("Vencedor: %s", nome_cidade2);
        }
        else
        {
            printf("Tivemos um Empate...");
        }
        break;
    case 3:
        printf("Área: %.2f VS %.2f\n", area1, area2);
        if (area1 > area2)
        {
            printf("Vencedor: %s", nome_cidade1);
        }
        else if (area2 > area1)
        {
            printf("Vencedor: %s", nome_cidade2);
        }
        else
        {
            printf("Tivemos um Empate...");
        }
        break;
    case 4:
        printf("PIB: %.2f VS %.2f\n", pib1, pib2);
        if (pib1 > pib2)
        {
            printf("Vencedor: %.2f", pib1);
        }
        else if (pib2 > pib1)
        {
            printf("Vencedor: %.2f", pib2);
        }
        else
        {
            printf("Tivemos um Empate...");
        }
        break;
    case 5:
        printf("Número de pontos turísticos: %d VS %d\n", npt1, npt2);
        if (npt1 > npt2)
        {
            printf("Vencedor: %d", npt1);
        }
        else if (npt2 > npt1)
        {
            printf("Vencedor: %d", npt2);
        }
        else
        {
            printf("Tivemos um Empate...");
        }
        break;
    case 6:
        printf("Densidade Demográfoca: %.2f VS %.2f\n", densidade_p1, densidade_p2);
        if (densidade_p1 > densidade_p2)
        {
            printf("Vencedor: %.2f", densidade_p1);
        }
        else if (densidade_p2 > densidade_p1)
        {
            printf("Vencedor: %.2f", densidade_p2);
        }
        else
        {
            printf("Tivemos mais um empate...");
        }
        break;
    default:
    {
        printf("Escolha uma opção válida, que vai de 1 a 6...");
        break;
    }
    }

    /*    // Comparando as cartas.
    printf("Comparações das Cartas\n");

    // Aqui é a saída do Nome da Cidade, Estado e a Quantidade de habitantes.
    printf("Carta - 1 %s (%s): População %lu\n", nome_cidade1, estado1, populacao1);
    printf("Carta - 2 %s (%s): População %lu\n", nome_cidade2, estado2, populacao2);

    // Estrutura de decisão, decide a carta vencedora com base em quem tem mais habitantes.
    if(populacao1 > populacao2){
        printf("Carta 1 %s venceu!!\n", nome_cidade1);
    } else{
        printf("Cartão 2 %s venceu!!\n", nome_cidade2);
    }



    printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Área: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turisticos: Carta 1 venceu(%d)\n", npt1 > npt2);
    printf("Densidade Populacional: Carta 1 venceu(%d)\n", densidade_p1 > densidade_p2);
    printf("PIB per Capita: Carta 1 venceu(%d)\n", pib_per1 > pib_per2);
    printf("Super Poder: Carta 1 venceu(%d)\n", superPoder1 > superPoder2);
    */

    return 0;
}