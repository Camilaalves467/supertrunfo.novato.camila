#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
    int escolhaJogador, escolhaComputador;
    srand (time(0));

    printf ("Jogo de Jokenpô\n");
    printf ("Escolha uma opção:\n");
    printf ("1. Pedra\n");
    printf ("2. Papel\n");
    printf ("3.Tesoura\n");
    printf ("Escolha: ");
    scanf ("%d", &escolhaJogador);

    escolhaComputador = rand()% 3 + 1;

    switch (escolhaJogador)
    {
    case 1:
    printf ("Jogador: Pedra - \n");
        break;
    case 2: ("Jogador: Papel - \n");
    break;
    case 3: ("Jogador: Tesoura - \n");
    break;
    default:
    printf (" Opção invalida \n");
        break;
    }
    switch (escolhaComputador)
    {
    case 1:
    printf ("Computador: Pedra - \n");
        break;
    case 2: ("Computador: Papel - \n");
    break;
    case 3: ("Computador: Tesoura - \n");
    break;
    default:
    printf (" Opção invalida \n");
        break;
    }

    if (escolhaComputador == escolhaJogador)
    {
        printf ("Empate \n");
    } else if ((escolhaJogador == 1) && (escolhaComputador == 3)
     || (escolhaJogador == 2) && (escolhaComputador == 1) ||
    (escolhaJogador == 3) && (escolhaComputador == 2))
{
    printf ("Parabéns, você ganhou!! \n");
} else {
    printf ("Você perdeu.\n");
}















}