
#include <stdio.h>

int main (){

    char estado, estado2;
    char cidade, cidade2;
    double habitantes, habitantes2;
    float mediarendasalarialporfamilia, mediarendasalarialporfamilia2;
    float mediahabitantespordomicilio, mediahabitantespordomicilio2;

    printf ("Digite a sigla do estado para a carta 1: \nEstado: ");
    scanf ("%s", &estado);

    printf ("Agora, digite o nome de uma cidade do mesmo estado que você escolheu na carta 1: \nCidade: ");
    scanf ("%s", &cidade);

    printf ("Digite a média de habitante que há nessa cidade da carta 1: \nHabitantes: ");
    scanf ("%d", &habitantes);

    printf ("Digite a média salárial por família dessa cidade: \nMedia salaria por familia: ");
    scanf ("%f", &mediarendasalarialporfamilia);

    printf ("Por fim digite a média de habitantes por familia na cidade escolhida na carta 1: \nMédia de habitantes por fámilia: ");
    scanf ("%f", &mediahabitantespordomicilio);

    printf ("Agora vamos para a carta número 2 \n");

    printf ("Digite a sigla do estado para a carta 2 - \nEstado: ");
    scanf ("%s", &estado2);

    printf ("Agora, digite o nome de uma cidade do mesmo estado que você escolheu na carta 2 - \nCidade: ");
    scanf ("%s", &cidade2);

    printf ("Digite a média de habitante que há nessa cidade da carta 2 - \nHabitantes: ");
    scanf ("%d", &habitantes2);

    printf ("Digite a média salárial por família dessa cidade: \nMedia salaria por familia - ");
    scanf ("%f", &mediarendasalarialporfamilia2);

    printf ("Por fim digite a média de habitantes por familia na cidade escolhida na carta 2 - \nMedia de habitantes por fámilia: ");
    scanf ("%f", &mediahabitantespordomicilio2);


    //exibindo resultado das cartas 1 e 2

    printf ("Carta 1: \nEstado: %s\n Cidade: %s\n Habitantes%f\n Media salarial por familia: %f\n Media de habitantes por fámilia: \n",
        estado, cidade, habitantes, mediarendasalarialporfamilia, mediahabitantespordomicilio);

    printf ("Carta 2: \nEstado: %s\n Cidade: %s\n Habitantes%f\n Media salarial por familia: %f\n Media de habitantes por fámilia: \n",
        estado2, cidade2, habitantes2, mediarendasalarialporfamilia2, mediahabitantespordomicilio2);


return 0;

}
