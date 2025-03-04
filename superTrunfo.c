#include <stdio.h>

int main()
{
    // DECLARAÇÃO DAS VARIÁVEIS PARA A PRIMEIRA CARTA
    char
        estado1,
        codigo1[4],
        nomeCidade1[50];
    float
        area1,
        pib1,
        densidadePopulacional1,
        pibPerCapita1,
        superPoder1;
    int
        pontosTuristicos1;
    unsigned long int
        populacao1;

    // ENTRA DE DADOS PARA A PRIMEIRA CARTA
    printf("Cadastro da Carta 1:\n");
    // ESTADO
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);
    // CÓDIGO DA CARTA
    printf("Código da Carta: ");
    scanf(" %s", codigo1);
    // NOME DA CIDADE
    printf("Nome da Cidade: ");
    scanf(" %s", nomeCidade1);
    // POPULAÇÃO
    printf("População: ");
    scanf(" %lu", &populacao1);
    // ÁREA
    printf("Área (em km²): ");
    scanf(" %f", &area1);
    // PIB
    printf("PIB (em bilhões de reais): ");
    scanf(" %f", &pib1);
    // PONTOS TURÍSTICOS
    printf("Número de Pontos Turísticos: ");
    scanf(" %d", &pontosTuristicos1);

    // CALCULO DA DENSIDADE POPULACIONAL E PIB PER CAPITA PARA A PRIMEIRA CARTA
    densidadePopulacional1 = populacao1 / area1;
    pibPerCapita1 = pib1 * 1000000000 / populacao1;
    superPoder1 = populacao1 + area1 + (pib1 * 1000000000) + pontosTuristicos1 + pibPerCapita1 + (1 / densidadePopulacional1);

    // -----------------------------------------------------------------------------------------------------------------------//

    // DECLARAÇÃO DAS VARIÁVEIS PARA A SEGUNDA CARTA
    char
        estado2,
        codigo2[4],
        nomeCidade2[50];
    float
        area2,
        pib2,
        densidadePopulacional2,
        pibPerCapita2,
        superPoder2;
    int
        pontosTuristicos2;
    unsigned long int
        populacao2;

    // ENTRA DE DADOS PARA A SEGUNDA CARTA
    printf("\nCadastro da Carta 2:\n");
    // ESTADO
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    // CÓDIGO DA CARTA
    printf("Código da Carta: ");
    scanf(" %s", codigo2);
    // NOME DA CIDADE
    printf("Nome da Cidade: ");
    scanf(" %s", nomeCidade2);
    // POPULAÇÃO
    printf("População: ");
    scanf(" %lu", &populacao2);
    // ÁREA
    printf("Área (em km²): ");
    scanf(" %f", &area2);
    // PIB
    printf("PIB (em bilhões de reais): ");
    scanf(" %f", &pib2);
    // PONTOS TURÍSTICOS
    printf("Número de Pontos Turísticos: ");
    scanf(" %d", &pontosTuristicos2);

    // CALCULO DA DENSIDADE POPULACIONAL E PIB PER CAPITA PARA A SEGUNDA CARTA
    densidadePopulacional2 = populacao2 / area2;
    pibPerCapita2 = pib2 * 1000000000 / populacao2;
    superPoder2 = populacao2 + area2 + (pib2 * 1000000000) + pontosTuristicos2 + pibPerCapita2 + (1 / densidadePopulacional2);

    // -----------------------------------------------------------------------------------------------------------------------//

    // EXIBIÇÃO DOS DADOS DA PRIMEIRA CARTA
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

    // EXIBIÇÃO DOS DADOS DA SEGUNDA CARTA
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    // EXIBIÇÃO DOS RESULTADOS DAS COMPARAÇÕES
    printf("\nComparação de Cartas:\n");
    printf("População: Carta %d venceu\n", populacao1 > populacao2 ? 1 : 2);
    printf("Área: Carta %d venceu\n", area1 > area2 ? 1 : 2);
    printf("PIB: Carta %d venceu\n", pib1 > pib2 ? 1 : 2);
    printf("Pontos Turísticos: Carta %d venceu\n", pontosTuristicos1 > pontosTuristicos2 ? 1 : 2);
    printf("Densidade Populacional: Carta %d venceu\n", densidadePopulacional1 < densidadePopulacional2 ? 1 : 2);
    printf("PIB per Capita: Carta %d venceu\n", pibPerCapita1 > pibPerCapita2 ? 1 : 2);
    printf("Super Poder: Carta %d venceu\n", superPoder1 > superPoder2 ? 1 : 2);

    return 0;
}
