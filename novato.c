
#include <stdio.h>

int main (){

    //informações cartas 1 e 2 já estipuladas

    char estado[20] = "São Paulo";
    char estado2[20] = "Minas Gerais";
    char cidade[50] = "Cotia";
    char cidade2[50] = "Nazareno";
    double habitantes = 325.125;
    double habitantes2 = 10.546;
    int pontosturisticos = 15;
    int pontosturisticos2 = 7;
    float pib = 13.365; 
    float pib2 = 668.985;
    float area = 323.92;
    float area2 = 342.568;



    //mostrando informações em tela
    printf ("Comparando cartas 1 e 2 - \n");
    
    printf ("Estados \n");
    printf ("Estado carta 1: %s\n", estado);
    printf ("Estado carta 2: %s\n", estado2);

    printf ("Cidades \n");
    printf ("Cidade carta 1: %s\n", cidade);
    printf ("Cidade carta 2: %s\n", cidade2);

    printf ("Número de habitantes na cidade \n");
    printf ("Habitantes carta 1: %f\n", habitantes);
    printf ("Habitantes carta 2: %f\n", habitantes2);

    printf ("Pontos turisticos \n");
    printf ("Carta 1: %d\n", pontosturisticos);
    printf ("Carta 2: %d\n", pontosturisticos2);

    printf ("PIB per capita \n");
    printf ("PIB carta 1: %2.f bilhões\n", pib);
    printf ("PIB carta 2: %2.f milhões\n", pib2);

    printf ("Área em Km² \n");
    printf ("Área total da cidade carta 1: %2.fkm² \n", area);
    printf ("Área total da cidade carta 2: %2.fkm² \n", area2);

    return 0;

 





}
