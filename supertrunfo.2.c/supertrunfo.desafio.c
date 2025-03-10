#include <stdio.h>

int main (){

    //informações cartas 1 e 2 já estipuladas

    char estado = sp, estado2= sp;
    char cidade = cotia, cidade2 = aruja;
    double habitantes = 325.125;
    double habitantes2 = 315.478;
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

    

    // mostrando informações completas

    printf ("***Dados Carta 1***\n");
    printf ("Estado: %s\n", estado);

    printf ("Cidade: %s\n", cidade);

    printf ("Habitantes: %.3f \n", habitantes);

    printf ("Pontos turisticos: %d\n", pontosturisticos);

    printf ("PIB: %2.f bilhões\n", pib);

    printf ("Área em km²: %2.fkm² \n", area);
    
    printf ("Densidade populacional: %.3fhab/km²\n", densidadepopu);

    printf ("Pib per capita: %.3f mil\n\n", pibpercap);

        // mostrando informações completas

    printf ("*** Carta 2 *** \n\n");
    printf ("Estado: %s\n", estado2);

    printf ("Cidade: %s\n", cidade2);
    
    printf ("Habitantes: %.3f\n", habitantes2);

    printf ("Pontos turisticos: %d\n", pontosturisticos2);

    printf ("PIB: %2.f milhões\n", pib2);

    printf ("Área em km²: %2.fkm² \n", area2);

    printf ("Densidade populacional carta 2: %.3fhab/km²\n", densidadepopu2);

    printf ("Pib per capita carta 2: %.3f mil\n\n", pibpercap2);


    printf ("Resultados das cartas ganhadoras! \n\n");
    // calculando os resultados e mostrando a carta ganhadora
    printf ("Em Habitantes ganhou a Carta %d\n", (habitantes > habitantes2)*1 + (habitantes <= habitantes2) * 2);
    printf ("Em Pontos Turisticos ganho a Carta %i\n", (pontosturisticos > pontosturisticos2) * 1 + (pontosturisticos <= pontosturisticos2) * 2);
    printf ("Em PIB ganhou a Carta %d\n", (pib > pib2) * 1 + (pib <= pib2));
    printf ("Em Área km² ganhou a carta: %d\n", (area > area2) * 1 + (area <= area2) * 2 );
    printf ("Pela Densidade Populacional ganhou a carta: %d\n", (densidadepopu < densidadepopu2) * 1 + (densidadepopu >= densidadepopu2) * 2);
    printf ("Pelo PIB per capita, ganhou a carta: %d\n", (pibpercap > pibpercap2) * 1 + (pibpercap <= pibpercap2) * 2);
    printf ("E o Super Poder ganhador é a carta: %d\n\n", (superpoder > superpoder2) * 1 + (superpoder <= superpoder2) * 2);

    printf ("Comparando os Resultados das Cartas(2) \n\n");

    printf ("Carta 1 é do estado de %s, cidade  de %s, com %.3f mil habitantes \n", estado, cidade, habitantes);
    printf ("Carta 2 é do estado de %s, cidade  de %s, com %.3f mil habitantes \n", estado2, cidade2, habitantes2);

    //comparando as cartas com as informações em tela
    if (habitantes > habitantes2){
        printf ("Resultado: Carta 1 (SP-Cotia) venceu! \n\n"); //dados aleatorios
    } else {
        printf ("Resultado: Carta 2 (SP-Arujá) venceu! \n\n"); // dados aletorios
    }

    printf ("Carta 1 há %i pontos turisticos \n", pontosturisticos);
    printf ("Carta 2 há %i pontos turisticos\n", pontosturisticos2);
    if (pontosturisticos > pontosturisticos2){
        printf ("Resultado: Carta 1 venceu!\n\n");
    } else{
        printf ("Resultado: Carta 2 venceu!\n\n");
    }
    printf ("Carta 1 PIB de %.3f \n", pib);
    printf ("Carta 2 PIB de %.3f \n", pib2);
    if (pib > pib2){
        printf ("Resultado: Carta 1 venceu! \n\n");
    }else {
        printf ("Resultado: Carta 2 venceu! \n\n");
    }
    printf ("Carta 1 tem a densidade populacional de %f\n", densidadepopu);
    printf ("Carta 2 tem a desindade populacional de %f\n", densidadepopu2);
    if (densidadepopu < densidadepopu2){
        printf ("Resuldado: Carta 1 ganhou! \n\n");
    
    } else{
        printf ("Resultado: Carta 2 venceu!");
        
    }
 

    return 0;


    

}