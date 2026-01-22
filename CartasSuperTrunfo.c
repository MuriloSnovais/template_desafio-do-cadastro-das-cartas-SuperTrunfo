#include <stdio.h>

int main(){
    char Estado;
    char CodCarta[4];
    char NomeCidade[50];
    unsigned long int Populacao;
    float area;
    float PIB;
    int PontosTuristicos;
    float DensidadePopulacional;
    float Pibpercapita;
    float SuperPoder;
    
    char Estado2;
    char CodCarta2[4];
    char NomeCidade2[50];
    unsigned long int Populacao2;
    float area2;
    float PIB2;
    int PontosTuristicos2;
    float DensidadePopulacional2;
    float Pibpercapita2;
    float SuperPoder2;

    printf("Carta 1\n");

    printf("Digite o Estado: ");
    scanf(" %c", &Estado);
    
    printf("Digite o código da carta: ");
    scanf("%s", CodCarta);
    
    printf("Digite o nome da cidade: ");
    getchar();
    fgets(NomeCidade, 50, stdin);
    
    printf("Digite a população da cidade: ");
    scanf("%lu", &Populacao);
    
    printf("Digite a área (km²): ");
    scanf("%f", &area);
    
    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &PIB);
    
    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &PontosTuristicos);

    DensidadePopulacional = (float)Populacao / area;
    Pibpercapita = (PIB * 1000000000.0f) / Populacao;

    printf("\nCarta 2\n");

    printf("Digite o Estado: ");
    scanf(" %c", &Estado2);
    
    printf("Digite o código da carta: ");
    scanf("%s", CodCarta2);
    
    printf("Digite o nome da cidade: ");
    getchar();
    fgets(NomeCidade2, 50, stdin);
    
    printf("Digite a população da cidade: ");
    scanf("%lu", &Populacao2);
    
    printf("Digite a área (km²): ");
    scanf("%f", &area2);
    
    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &PIB2);
    
    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &PontosTuristicos2);

    DensidadePopulacional2 = (float)Populacao2 / area2;
    Pibpercapita2 = (PIB2 * 1000000000.0f) / Populacao2;

    SuperPoder =
        (float)Populacao +
        area +
        PIB +
        PontosTuristicos +
        Pibpercapita +
        (1.0f / DensidadePopulacional);

    SuperPoder2 =
        (float)Populacao2 +
        area2 +
        PIB2 +
        PontosTuristicos2 +
        Pibpercapita2 +
        (1.0f / DensidadePopulacional2);


    printf("\nComparação de Cartas:\n\n");

    printf("População: Carta 1 venceu (%d)\n", Populacao > Populacao2);
    printf("Área: Carta 1 venceu (%d)\n", area > area2);
    printf("PIB: Carta 1 venceu (%d)\n", PIB > PIB2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", PontosTuristicos > PontosTuristicos2);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", DensidadePopulacional < DensidadePopulacional2);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", Pibpercapita > Pibpercapita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", SuperPoder > SuperPoder2);

    return 0;
}
