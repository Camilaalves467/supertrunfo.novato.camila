
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
    float pib = 13.985;
    float pib2 = 14.256;
    float area = 323.92;
    float area2 = 342.568;
    float resultado = habitantes / area;



    //mostrando informações em tela
    printf ("Super Trunfo: carta 1 e 2");
    
    printf ("*** Carta 1 *** \n");
    printf ("Estado: %s\n", estado);

    printf ("Cidade: %s\n", cidade);
    
    printf ("Habitantes: %.3f\n", habitantes);

    printf ("Pontos turisticos: %d\n", pontosturisticos);

    printf ("PIB: %2.f bilhões\n", pib);

    printf ("Área em km²: %2.fkm² \n", area);

    printf ("*** Carta 2 *** \n");
    printf ("Estado: %s\n", estado2);

    printf ("Cidade: %s\n", cidade2);
    
    printf ("Habitantes: %.3f\n", habitantes2);

    printf ("Pontos turisticos: %d\n", pontosturisticos2);

    printf ("PIB: %2.f milhões\n", pib2);

    printf ("Área em km²: %2.fkm² \n", area2);

    printf ("Densidade populacional carta 1: %.3fkm²\n", habitantes / area);
    printf ("Pib per capita carta 1: %.4f mil\n", pib + habitantes);

    printf ("Densidade populacional carta 2: %.3fkm²\n", habitantes2 / area2);
    printf ("Pib per capita carta 2: %.4f mil\n", pib2 + habitantes2);

    return 0;

 





}
