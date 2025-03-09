#include <stdio.h>

int main()
{
    // DECLARAÇÃO DAS VARIÁVEIS PARA A PRIMEIRA CARTA
    char estado1, codigo1[4], nomeCidade1[50];
    float area1, pib1, densidadePopulacional1, pibPerCapita1;
    int pontosTuristicos1;
    unsigned long int populacao1;

    // ENTRADA DE DADOS PARA A PRIMEIRA CARTA
    printf("Cadastro da Carta 1:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Código da Carta: ");
    scanf(" %s", codigo1);
    printf("Nome da Cidade: ");
    scanf(" %s", nomeCidade1);
    printf("População: ");
    scanf(" %lu", &populacao1);
    printf("Área (em km²): ");
    scanf(" %f", &area1);
    printf("PIB (em bilhões de reais): ");
    scanf(" %f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf(" %d", &pontosTuristicos1);

    // CÁLCULO DE DENSIDADE POPULACIONAL E PIB PER CAPITA
    densidadePopulacional1 = populacao1 / area1;
    pibPerCapita1 = pib1 * 1000000000 / populacao1;

    // DECLARAÇÃO DAS VARIÁVEIS PARA A SEGUNDA CARTA
    char estado2, codigo2[4], nomeCidade2[50];
    float area2, pib2, densidadePopulacional2, pibPerCapita2;
    int pontosTuristicos2;
    unsigned long int populacao2;

    // ENTRADA DE DADOS PARA A SEGUNDA CARTA
    printf("\nCadastro da Carta 2:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Código da Carta: ");
    scanf(" %s", codigo2);
    printf("Nome da Cidade: ");
    scanf(" %s", nomeCidade2);
    printf("População: ");
    scanf(" %lu", &populacao2);
    printf("Área (em km²): ");
    scanf(" %f", &area2);
    printf("PIB (em bilhões de reais): ");
    scanf(" %f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf(" %d", &pontosTuristicos2);

    // CÁLCULO DE DENSIDADE POPULACIONAL E PIB PER CAPITA
    densidadePopulacional2 = populacao2 / area2;
    pibPerCapita2 = pib2 * 1000000000 / populacao2;

    // MENU INTERATIVO PARA ESCOLHA DOS ATRIBUTOS
    int escolha1, escolha2;
    printf("\nEscolha o primeiro atributo para comparacao:\n");
    printf("1 - Populacao\n2 - Area\n3 - PIB\n4 - Pontos Turisticos\n5 - Densidade Populacional\n");
    scanf("%d", &escolha1);

    do {
        printf("\nEscolha o segundo atributo para comparacao (diferente do primeiro):\n");
        scanf("%d", &escolha2);
    } while (escolha2 == escolha1);

    // FUNÇÃO PARA COMPARAÇÃO DOS ATRIBUTOS
    float valor1 = 0, valor2 = 0;
    for (int i = 1; i <= 2; i++) {
        int atributo = (i == 1) ? escolha1 : escolha2;
        float v1, v2;

        switch (atributo) {
        case 1: v1 = populacao1; v2 = populacao2; break;
        case 2: v1 = area1; v2 = area2; break;
        case 3: v1 = pib1; v2 = pib2; break;
        case 4: v1 = pontosTuristicos1; v2 = pontosTuristicos2; break;
        case 5: v1 = densidadePopulacional1; v2 = densidadePopulacional2; break;
        }
        
        // Se for Densidade Populacional, menor vence, senão maior vence
        valor1 += (atributo == 5) ? -v1 : v1;
        valor2 += (atributo == 5) ? -v2 : v2;
    }

    // EXIBIÇÃO DO RESULTADO
    printf("\nResultado da Comparacao:\n");
    printf("Atributos escolhidos: %d e %d\n", escolha1, escolha2);
    printf("Soma dos atributos - %s: %.2f\n", nomeCidade1, valor1);
    printf("Soma dos atributos - %s: %.2f\n", nomeCidade2, valor2);
    printf("Resultado: %s venceu!\n", (valor1 > valor2) ? nomeCidade1 : (valor1 < valor2) ? nomeCidade2 : "Empate");

    return 0;
}
