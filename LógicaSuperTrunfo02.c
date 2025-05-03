#include <stdio.h>
int main() {
    //segue a sequencia de variaveis para a carta 1
    char país = 'A';
    int populacao = 454000;
    float area = 278000; // Em quilômetros quadrados
    float PIB = 483000;
    int npt = 15;
    float dpop = (float) populacao/area; //para densidade populacional
   
        //segue a sequencia de variaveis para a carta 2
        char país2 = 'B';
        int populacao2 = 211000;
        float area2 = 850000; // Em quilômetros quadrados
        float PIB2 = 910000;
        int npt2 = 20;
        float dpop2 = (float) populacao2/area2; //para densidade populacional

        int opcao;
      
        printf("Escolha um dos atrubutos a seguir\n");
        printf("1. para População\n");
        printf("2. para Área\n");
        printf("3. para PIB\n");
        printf("4. para Número de pontos Turísticos\n");
        printf("5. para Densidade Demográfica\n");
        printf("Escolha uma opção de 1 a 5: \n");
        scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
            printf("comparação da ## POPULAÇÃO ##:\N");
        if (populacao > populacao2){
            printf("população da Carta 01: %d\n", populacao);
            printf("população da Carta 02: %d\n", populacao2);
            printf("A carta 01 ganha no quisito População\n");
        } else 
            printf("população da Carta 01: %d\n", populacao);
            printf("população da Carta 02: %d\n", populacao2);
            printf("A carta 02 ganha no quisito População\n");
            break;
    case 2:
            printf("comparação da ## ÁREA ##:\N");
        if (area > area2){
            printf("Área da Carta 01: %.2f\n", area);
            printf("Área da Carta 02: %.2f\n", area2);
            printf("A carta 01 ganha no quisito Área\n");
        } else 
            printf("PIB da Carta 01: %.2f\n", area);
            printf("PIB da Carta 02: %.2f\n", area2);
            printf("A carta 02 ganha no quisito Área\n");
            break;
    case 3:
            printf("comparação da ## PIB ##:\N");

        if (PIB > PIB2){
            printf("PIB da Carta 01: %.f\n", PIB);
            printf("PIB da Carta 02: %.f\n", PIB2);
            printf("A carta 01 ganha no quisito PIB\n");
        } else 
            printf("PIB da Carta 01: %.f\n", PIB);
            printf("PIB da Carta 02: %.f\n", PIB2);
            printf("A carta 02 ganha no quisito PIB\n");
            break;
    case 4:
            printf("comparação da ## NÚMERO DE POSTOS TURÍSTICOS ##:\N");
        if (npt > npt2){
            printf("Número de pontos turísticos da Carta 01: %d\n", npt);
            printf("Número de pontos turísticos da Carta 02: %d\n", npt2);
            printf("A carta 01 ganha no quisito Número de pontos turísticos\n");
        } else 
            printf("Número de pontos turísticos da Carta 01: %d\n", npt);
            printf("Número de pontos turísticos da Carta 02: %d\n", npt2);
            printf("A carta 02 ganha no quisito Número de pontos turísticos\n");
            break;
    case 5:
            printf("comparação da ## DENSIDADE DEMOGRÁFICA ##:\N");
        if ((dpop2/1) > (dpop/1)){
            printf("Densidade Demográfica da Carta 01: %.2f\n", dpop);
            printf("Densidade Demográfica da Carta 02: %.2f\n", dpop2);
            printf("A carta 01 ganha no quisito Densidade Demográfica\n");
        } else 
            printf("Densidade Demográfica da Carta 01: %.2f\n", dpop);
            printf("Densidade Demográfica da Carta 02: %.2f\n", dpop2);
            printf("A carta 02 ganha no quisito Densidade Demográfica\n");
            break;
    
        
    }

    return 0;
}