#include <stdio.h>
int main() {
    //segue a sequencia de variaveis para a carta 1
    char estado[3] = "A";
    char c_carta[4] = "A01";
    char n_cidade[20] = "Belem";
    int populacao = 55000;
    float area = 70000; // Em quilômetros quadrados
    float PIB = 40000000;
    int npt = 12;
    float dpop = (float) populacao/area; //para densidade populacional
    float pibpc = (float) PIB/populacao; //para pib per capita

        //segue a sequencia de variaveis para a carta 2
        char estado2[3] = "B";
        char c_carta2[4] = "B02"; //a letra do estado seguida de um número de 01 a 04
        char n_cidade2[20] = "Barcarena";
        int populacao2 = 45000;
        float area2 = 65000; // Em quilômetros quadrados
        float PIB2 = 29000000;
        int npt2 = 8;
        float dpop2 = (float) populacao2/area2; //para densidade populacional
        float pibpc2 = (float) PIB2/populacao2; //para pib per capita

    printf("Para a carta 1: \n digite seu estado (A a H): \n");
    scanf("%1s", estado);

    printf("Para a carta 1: \n digite o codigo da carta de 01 a 04 (ex: A01): \n");
    scanf("%3s", c_carta); // Lê no máximo 3 caracteres

    printf("Para a carta 1: \n digite o nome da cidade: \n");
    scanf("%s", n_cidade); // Para nomes sem espaços. Se precisar de espaços, use fgets.

    printf("Para a carta 1: \n digite o numero da populacao da cidade: \n");
    scanf("%d", &populacao); // Lê um inteiro para a população

    printf("Para a carta 1: \n digite a area em quilometros quadrados da cidade: \n");
    scanf("%f", &area);   // Lê um float para a área

    printf("Para a carta 1: \n digite PIB da cidade: \n");
    scanf("%f", &PIB);    // Lê um float para o PIB

    printf("Para a carta 1: \n digite o numero de pontos turisticos da cidade: \n");
    scanf("%d", &npt);    // Lê um inteiro para o número de pontos turísticos

        //segue os comandos para a carta 2
        printf("Para a carta 2: \n digite seu estado (A a H): \n");
        scanf("%1s", estado2); // Lê apenas 1 caractere

        printf("Para a carta 2: \n digite o codigo da carta de 01 a 04 (ex: A01): \n");
        scanf("%3s", c_carta2); // Lê no máximo 3 caracteres

        printf("Para a carta 2: \n digite o nome da cidade: \n");
        scanf("%s", n_cidade2);

        printf("Para a carta 2: \n digite o numero da populacao da cidade: \n");
        scanf("%d", &populacao2); // Lê um inteiro para a população

        printf("Para a carta 2: \n digite a area em quilometros quadrados da cidade: \n");
        scanf("%f", &area2);   // Lê um float para a área

        printf("Para a carta 2: \n digite PIB da cidade: \n");
        scanf("%f", &PIB2);     // Lê um float para o PIB

        printf("Para a carta 2: \n digite o numero de pontos turisticos da cidade: \n");
        scanf("%d", &npt2);   // Lê um inteiro para o número de pontos turísticos

// Comparação de Cartas:
printf("comparação de Cartas:\n(Atributo: População)\nCidade 01: A populacao é: %d\nCidade 02: A populacao é: %d\n", populacao, populacao2);
printf("(Atributo: Área:)\nCidade 01: A área é: %.2f\nCidade 02: A área é: %.2f\n", area, area2);
printf("(Atributo: PIB:)\nCidade 01: O PIB é: %.2f\nCidade 02: O PIB é: %.2f\n", PIB, PIB2);
printf("(Atributo: Número de Pontos Turísticos:)\nCidade 01: O Número de Pontos Turísticos é: %.2f\nCidade 02: O Número de Pontos Turísticos é: %.2f\n", npt, npt2);
printf("(Atributo: Densidade Populacional:)\nCidade 01: A Densidade Populacional é: %.2f\nCidade 02: A Densidade Populacional é: %.2f\n", dpop, dpop2);
printf("(Atributo: PIB per Capita:)\nCidade 01: O PIB per Capita é: %.2f\nCidade 02: O PIB per Capita é: %.2f\n", pibpc, pibpc2);
                
    // Resutado da Comparação das Cartas:
    printf("---RESULTADOS---:\n");
        if (populacao > populacao2) {
            printf("Cidade 1 tem maior população.\n");
        } else {
            printf("Cidade 2 tem maior população.\n");
        }

        if (area > area2) {
            printf("Cidade 1 tem maior área.\n");
        } else {
            printf("Cidade 2 tem maior área.\n");
        }

        if (PIB > PIB2) {
            printf("Cidade 1 tem maior PIB.\n");
        } else {
            printf("Cidade 2 tem maior PIB.\n");
        }

        if (npt > npt2) {
            printf("Cidade 1 tem maior número de pontos turísticos.\n");
        } else {
            printf("Cidade 2 tem maior número de pontos turísticos.\n");
        }

        if (dpop > dpop2) {
            printf("Cidade 1 tem menor densidade populacional.\n");
        } else {
            printf("Cidade 2 tem menor densidade populacional.\n");
        }

        if (pibpc > pibpc2) {
            printf("Cidade 1 tem maior PIB per Capita.\n");
        } else {
            printf("Cidade 2 tem maior PIB per Capita.\n");
        }

        if (populacao > populacao2) {
            printf("Cidade 1 tem maior população.\n");
        } else {
            printf("Cidade 2 tem maior população.\n");
        }

    return 0;
}
