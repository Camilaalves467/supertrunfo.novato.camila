
#include <stdio.h>

int main (){

    //informações cartas 1 e 2 já estipuladas

    char estado[20]; 
    char estado2[20];
    char cidade[50];
    char cidade2[50];
    double habitantes = 325.125;
    double habitantes2 = 365.478;
    int pontosturisticos = 15;
    int pontosturisticos2 = 19;
    double pib = 13.985;
    double pib2 = 14.256;
    double area = 323.92;
    double area2 = 342.568;
    float densidadepopu = habitantes / area;
    float densidadepopu2 = habitantes2 / area2;
    double pibpercap = pib + area;
    double pibpercap2 = pib2 + area2;
    float superpoder = habitantes + pontosturisticos + pib + area + densidadepopu + pibpercap;
    float superpoder2 = habitantes2 + pontosturisticos2 + pib2 + area2 + densidadepopu2 + pibpercap2;

    
    //mostrando informações em tela
    printf ("Super Trunfo: carta 1 e 2\n");
    
    printf ("*** Carta 1 *** \n\n");
    printf ("Digite estado e cidade carta 1: \n");

    printf ("Estado: %s\n", estado);
    scanf ("%s", estado);

    printf ("Cidade: %s\n", cidade);
    scanf ("%s", &cidade);

    //testando impressão das informações
    // mostrando informações completas

    printf ("***Dados Carta 1***\n");
    printf ("Estado: %s\n", estado);

    printf ("Cidade: %s\n", cidade);

    printf ("Habitantes: %.3f\n", habitantes);

    printf ("Pontos turisticos: %d\n", pontosturisticos);

    printf ("PIB: %2.f bilhões\n", pib);

    printf ("Área em km²: %2.fkm² \n", area);
    
    printf ("Densidade populacional: %.3fhab/km²\n", densidadepopu);

    printf ("Pib per capita: %.3f mil\n\n", pibpercap);

    printf ("*** Carta 2 *** \n\n");
    printf ("Digite estado e cidade carta 2: \n");

    printf ("Estado: %s\n", estado2);
    scanf ("%s", &estado2);

    printf ("Cidade: %s\n", cidade2);
    scanf ("%s", &cidade2);

    //testando impressão das informações
    // mostrando informações completas

    printf ("Estado: %s\n", estado2);

    printf ("Cidade: %s\n", cidade2);
    
    printf ("Habitantes: %.3f\n", habitantes2);

    printf ("Pontos turisticos: %d\n", pontosturisticos2);

    printf ("PIB: %2.f milhões\n", pib2);

    printf ("Área em km²: %2.fkm² \n", area2);

    printf ("Densidade populacional carta 2: %.3fhab/km²\n", densidadepopu2);

    printf ("Pib per capita carta 2: %.3f mil\n\n", pibpercap2);

    printf ("Resultados das cartas ganhadoras! \n\n");
    
    printf ("Em Habitantes ganhou a Carta %d\n", (habitantes > habitantes2)*1 + (habitantes <= habitantes2) * 2);
    printf ("Em Pontos Turisticos ganho a Carta %i\n", (pontosturisticos > pontosturisticos2) * 1 + (pontosturisticos <= pontosturisticos2) * 2);
    printf ("Em PIB ganhou a Carta %d\n", (pib > pib2) * 1 + (pib <= pib2));
    printf ("Em Área km² ganhou a carta: %d\n", (area > area2) * 1 + (area <= area2) * 2 );
    printf ("Pela Densidade Populacional ganhou a carta: %d\n", (densidadepopu < densidadepopu2) * 1 + (densidadepopu >= densidadepopu2) * 2);
    printf ("Pelo PIB per capita, ganhou a carta: %d\n", (pibpercap > pibpercap2) * 1 + (pibpercap <= pibpercap2) * 2);
    printf ("E o Super Poder ganhador é a carta: %d\n", (superpoder > superpoder2) * 1 + (superpoder <= superpoder2) * 2);




    return 0;


    

}
