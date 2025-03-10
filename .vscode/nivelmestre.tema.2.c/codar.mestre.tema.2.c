#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
    int numeroJogador, numeroComputador, resultado;
    char Tipocomparacao;

    // gerar número aleatorio
    srand (time (0));
    numeroComputador = rand () % 100 + 1; //numero entre 1 e 100

    // inicio do jogo
    printf ("Bem-vindo ao jogo Maior, Menor ou Igual \n");
    printf ("Você deve escolher um número e o tipo de comparação\n");
    printf ("M. Maior\n");
    printf ("N. Menor\n");
    printf ("T. Igual\n");

    printf ("Escolha a comparação \n");
    scanf ("%c", &Tipocomparacao);

    printf ("Dgite seu número (Entre 1 e 100): \n");
    scanf ("%d", &numeroJogador);

// exibir numero do computador
     printf ("O número do computador é: %d \n", numeroComputador);

     switch (Tipocomparacao)
     {
     case 'M': 
     case 'm':
     printf ("Você esolheu a opção Maior\n");
     resultado = numeroJogador > numeroComputador ? 1 : 0;
        break;
     case 'N':
     case 'n':
     printf ("Você escolheu a opção Menor \n");
     resultado = numeroJogador < numeroComputador ? 1 : 0;
     break;
     case 'I':
     case 'i':
     printf ("Você esolheu a opção Igual \n");
     resultado = numeroJogador == numeroComputador ? 1 : 0;
     break;
     default: 
     printf (" Opção invalida!\n");
     break;
    }
    printf ("O número do computador é: %d e o do jogador é: %d\n", numeroComputador, numeroJogador);

    if (resultado == 1)
    {
        printf ("Você venceu!\n");
    } else {
        printf ("Você perdeu! \n");
    }








}
